<?php

/**
 * @file
 * A handler to filter a view using fields comparison.
 *
 */
class views_fields_compare_handler_filter extends views_handler_filter {

  function can_expose() { return FALSE; }

  /**
   * Implements views_object#option_definition().
   */
  function option_definition() {
    $options = parent::option_definition();

    $options['fields_compare'] = array(
      'contains' => array(
        'left'     => array('default' => ''),
        'operator' => array('default' => '='),
        'right'    => array('default' => '')
      )
    );
    return $options;
  }


  /**
   * Provide a list of all operators
   */
  function fields_operator_options() {
    $operators = array(
      '<' => t('Is less than'),
      '<=' => t('Is less than or equal to'),
      '=' => t('Is equal to'),
      '!=' =>  t('Is not equal to'),
      '>=' => t('Is greater than or equal to'),
      '>' => t('Is greater than')
    );
    return $operators;
  }


  /**
   * Provide a list of available fields
   */
  function field_options() {
    $options = array();
    foreach ($this->view->display_handler->get_handlers('field') as $field => $handler) {
      if ($handler->table != 'views')
        $options[$field] = $handler->ui_name();
    }
    return $options;
  }


  /**
   * Implements views_handler#options_form().
   */
  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);

    $field_options = $this->field_options();

    $form['fields_compare']['left'] = array(
      '#type' => 'select',
      '#title' => t('Left'),
      '#default_value' => $this->options['fields_compare']['left'],
      '#options' => $field_options
    );

    $form['fields_compare']['operator'] = array(
      '#type' => 'select',
      '#title' => t('Operator'),
      '#default_value' => $this->options['fields_compare']['operator'],
      '#options' => $this->fields_operator_options()
    );

    $form['fields_compare']['right'] = array(
      '#type' => 'select',
      '#title' => t('Right'),
      '#default_value' => $this->options['fields_compare']['right'],
      '#options' => $field_options
    );

  }


  /**
   * Implements views_handler_filter#query().
   */
  function query() {
    $left = $this->options['fields_compare']['left'];
    $right = $this->options['fields_compare']['right'];

    $handlers = $this->view->display_handler->get_handlers('field');

    if ( !array_key_exists($left, $handlers) ||
      !array_key_exists($right, $handlers) )
      return;

    $leftHandler = $handlers[$left];

    $leftHandler->set_relationship();
    $leftAlias = $this->query->ensure_table($leftHandler->table, $leftHandler->relationship);

    $rightHandler = $handlers[$this->options['fields_compare']['right']];
    $rightHandler->set_relationship();
    $rightAlias = $this->query->ensure_table($rightHandler->table, $rightHandler->relationship);

    $snippet = "$leftAlias.$leftHandler->real_field " .
      $this->options['fields_compare']['operator'] .
      " $rightAlias.$rightHandler->real_field";

    $this->query->add_where_expression($this->options['group'], $snippet);
  }
}

