<?php
/**
 * @file
 * recurring_dates_exclusion_sets.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function recurring_dates_exclusion_sets_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function recurring_dates_exclusion_sets_node_info() {
  $items = array(
    'recurring_dates_exclusion_set' => array(
      'name' => t('Recurring Dates Exclusion Set'),
      'base' => 'node_content',
      'description' => t('Use to create a master list of dates that can be excluded as a set from a recurring event.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
