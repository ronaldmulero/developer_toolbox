<?php
/**
 * @file
 * recurring_dates_exclusion_sets.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function recurring_dates_exclusion_sets_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create field_date_to_exclude'.
  $permissions['create field_date_to_exclude'] = array(
    'name' => 'create field_date_to_exclude',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_dates_to_exclude'.
  $permissions['create field_dates_to_exclude'] = array(
    'name' => 'create field_dates_to_exclude',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_excluded_date_label'.
  $permissions['create field_excluded_date_label'] = array(
    'name' => 'create field_excluded_date_label',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_date_to_exclude'.
  $permissions['edit field_date_to_exclude'] = array(
    'name' => 'edit field_date_to_exclude',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_dates_to_exclude'.
  $permissions['edit field_dates_to_exclude'] = array(
    'name' => 'edit field_dates_to_exclude',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_excluded_date_label'.
  $permissions['edit field_excluded_date_label'] = array(
    'name' => 'edit field_excluded_date_label',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_date_to_exclude'.
  $permissions['edit own field_date_to_exclude'] = array(
    'name' => 'edit own field_date_to_exclude',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_dates_to_exclude'.
  $permissions['edit own field_dates_to_exclude'] = array(
    'name' => 'edit own field_dates_to_exclude',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_excluded_date_label'.
  $permissions['edit own field_excluded_date_label'] = array(
    'name' => 'edit own field_excluded_date_label',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_date_to_exclude'.
  $permissions['view field_date_to_exclude'] = array(
    'name' => 'view field_date_to_exclude',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_dates_to_exclude'.
  $permissions['view field_dates_to_exclude'] = array(
    'name' => 'view field_dates_to_exclude',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_excluded_date_label'.
  $permissions['view field_excluded_date_label'] = array(
    'name' => 'view field_excluded_date_label',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_date_to_exclude'.
  $permissions['view own field_date_to_exclude'] = array(
    'name' => 'view own field_date_to_exclude',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_dates_to_exclude'.
  $permissions['view own field_dates_to_exclude'] = array(
    'name' => 'view own field_dates_to_exclude',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_excluded_date_label'.
  $permissions['view own field_excluded_date_label'] = array(
    'name' => 'view own field_excluded_date_label',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
