<?php

/**
 * Implementation of hook_strongarm().
 */
function jumpjet_manager_engine_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_theme';
  $strongarm->value = 'seven';
  $export['admin_theme'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_toolbar';
  $strongarm->value = array(
    'layout' => 'vertical',
    'position' => 'nw',
    'behavior' => 'df',
    'blocks' => array(
      'admin-create' => -1,
      'admin-theme' => 1,
      'admin-account' => -1,
      'admin-menu' => 1,
      'menu-menu-jumpjet-manage' => -1,
    ),
  );
  $export['admin_toolbar'] = $strongarm;

  return $export;
}
