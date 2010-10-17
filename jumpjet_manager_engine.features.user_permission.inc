<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function jumpjet_manager_engine_user_default_permissions() {
  $permissions = array();

  // Exported permission: access backup and migrate
  $permissions['access backup and migrate'] = array(
    'name' => 'access backup and migrate',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'site manager',
    ),
  );

  // Exported permission: access backup files
  $permissions['access backup files'] = array(
    'name' => 'access backup files',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: access site reports
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'site manager',
    ),
  );

  // Exported permission: administer backup and migrate
  $permissions['administer backup and migrate'] = array(
    'name' => 'administer backup and migrate',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer comments
  $permissions['administer comments'] = array(
    'name' => 'administer comments',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'moderator',
      '2' => 'site manager',
    ),
  );

  // Exported permission: administer menu
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer taxonomy
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'content editor',
      '2' => 'site manager',
    ),
  );

  // Exported permission: administer toolbar
  $permissions['administer toolbar'] = array(
    'name' => 'administer toolbar',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: contextual admin links
  $permissions['contextual admin links'] = array(
    'name' => 'contextual admin links',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'content author',
      '2' => 'content editor',
      '3' => 'moderator',
      '4' => 'site manager',
    ),
  );

  // Exported permission: delete backup files
  $permissions['delete backup files'] = array(
    'name' => 'delete backup files',
    'roles' => array(
      '0' => 'administrator',
    ),
  );



  // Exported permission: menu edit menu-jumpjet-manage
  $permissions['menu edit menu-jumpjet-manage'] = array(
    'name' => 'menu edit menu-jumpjet-manage',
    'roles' => array(),
  );


  // Exported permission: menu edit primary-links
  $permissions['menu edit primary-links'] = array(
    'name' => 'menu edit primary-links',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'site manager',
    ),
  );

  // Exported permission: menu edit secondary-links
  $permissions['menu edit secondary-links'] = array(
    'name' => 'menu edit secondary-links',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'site manager',
    ),
  );

  // Exported permission: perform backup
  $permissions['perform backup'] = array(
    'name' => 'perform backup',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'site manager',
    ),
  );

  // Exported permission: restore from backup
  $permissions['restore from backup'] = array(
    'name' => 'restore from backup',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

   // Exported permission: select toolbar
  $permissions['select toolbar'] = array(
	'name' => 'select toolbar',
    'roles' => array(
        '0' => 'administrator',
    ),
  );

  // Exported permission: use admin toolbar
  $permissions['use admin toolbar'] = array(
    'name' => 'use admin toolbar',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'content editor',
      '2' => 'moderator',
      '3' => 'site manager',
    ),
  );

  // Exported permission: view advanced help index
  $permissions['view advanced help index'] = array(
    'name' => 'view advanced help index',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'content author',
      '2' => 'content editor',
      '3' => 'moderator',
      '4' => 'site manager',
    ),
  );

  // Exported permission: view advanced help popup
  $permissions['view advanced help popup'] = array(
    'name' => 'view advanced help popup',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'content author',
      '2' => 'content editor',
      '3' => 'moderator',
      '4' => 'site manager',
    ),
  );

  // Exported permission: view advanced help topic
  $permissions['view advanced help topic'] = array(
    'name' => 'view advanced help topic',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'content author',
      '2' => 'content editor',
      '3' => 'moderator',
      '4' => 'site manager',
    ),
  );

  return $permissions;
}
