<?php

/**
 * Implementation of hook_menu_default_menu_custom().
 */
function jumpjet_manager_engine_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-jumpjet-manage
  $menus['menu-jumpjet-manage'] = array(
    'menu_name' => 'menu-jumpjet-manage',
    'title' => 'Manage',
    'description' => 'A menu for site management',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('A menu for site management');
  t('Manage');


  return $menus;
}
