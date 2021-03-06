<?php
/**
 * @file
 * recurring_dates_exclusion_sets.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function recurring_dates_exclusion_sets_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_recurring_dates_exclusion_set';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_recurring_dates_exclusion_set'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_recurring_dates_exclusion_set';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_recurring_dates_exclusion_set'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_recurring_dates_exclusion_set';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_recurring_dates_exclusion_set'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__recurring_dates_exclusion_set';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'sidebar_image' => array(
        'custom_settings' => TRUE,
      ),
      'inline_image' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '3',
        ),
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '2',
        ),
        'redirect' => array(
          'weight' => '1',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__recurring_dates_exclusion_set'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_recurring_dates_exclusion_set';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_recurring_dates_exclusion_set'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_recurring_dates_exclusion_set';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_recurring_dates_exclusion_set'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_recurring_dates_exclusion_set';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_recurring_dates_exclusion_set'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_recurring_dates_exclusion_set';
  $strongarm->value = '1';
  $export['node_preview_recurring_dates_exclusion_set'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_recurring_dates_exclusion_set';
  $strongarm->value = 1;
  $export['node_submitted_recurring_dates_exclusion_set'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_recurring_dates_exclusion_set_pattern';
  $strongarm->value = '[node:content-type]/[node:title]';
  $export['pathauto_node_recurring_dates_exclusion_set_pattern'] = $strongarm;

  return $export;
}
