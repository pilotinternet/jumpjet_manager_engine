<?php
/**
 * Import of Toolbars - manual export not managed by Features so we do this in the install file
 */

/** ADMINISTRATOR Toolbar **/
$toolbar_administrator_links = array (
  0 => 
  array (
    'link_path' => 'admin/contentmanager',
    'link_title' => 'Manage Content',
    'weight' => '2',
  ),
  1 => 
  array (
    'link_path' => 'node/add',
    'link_title' => 'Create Content',
    'weight' => '1',
  ),
  2 => 
  array (
    'link_path' => 'admin/commentmanager',
    'link_title' => 'Manage Comments',
    'weight' => '3',
  ),
  3 => 
  array (
    'link_path' => 'admin/usermanager',
    'link_title' => 'Manage Users',
    'weight' => '4',
  ),
);
$toolbar_administrator = _toolbar_create('jumpjet_toolbar_administrator', 'Administrator', $toolbar_administrator_links);
$rid = db_result(db_query("SELECT rid FROM {role} WHERE name = '%s'", 'administrator'));
if ($rid) {
  db_query("INSERT INTO {toolbar_role} VALUES(%d, '%s', %d)", $rid, 'set-jumpjet_toolbar_administrator', -10); 
}

/** SITE MANAGER Toolbar **/

$toolbar_sitemanager_links = array (
  0 => 
  array (
    'link_path' => 'admin/contentmanager',
    'link_title' => 'Manage Content',
    'weight' => '-9',
  ),
  1 => 
  array (
    'link_path' => 'admin/usermanager',
    'link_title' => 'Manage Users',
    'weight' => '-7',
  ),
  2 => 
  array (
    'link_path' => 'admin/commentmanager',
    'link_title' => 'Manage Comments',
    'weight' => '-8',
  ),
  3 => 
  array (
    'link_path' => 'node/add',
    'link_title' => 'Create Content',
    'weight' => '-10',
  ),
  4 => 
  array (
    'link_path' => 'admin/content/backup_migrate',
    'link_title' => 'Backup Site',
    'weight' => '-6',
  ),
);
$toolbar_sitemanager = _toolbar_create('jumpjet_toolbar_sitemanager', 'Site Manager', $toolbar_sitemanager_links);
$rid = db_result(db_query("SELECT rid FROM {role} WHERE name = '%s'", 'site manager'));
if ($rid) {
  db_query("INSERT INTO {toolbar_role} VALUES(%d, '%s', %d)", $rid, 'set-jumpjet_toolbar_sitemanager', -5); 
}

/** MODERATOR Toolbar **/
$toolbar_moderator_links = array (
  0 => 
  array (
    'link_path' => 'admin/contentmanager',
    'link_title' => 'Manage Content',
    'weight' => '-9',
  ),
  1 => 
  array (
    'link_path' => 'admin/usermanager',
    'link_title' => 'Manage Users',
    'weight' => '-7',
  ),
  2 => 
  array (
    'link_path' => 'admin/commentmanager',
    'link_title' => 'Manage Comments',
    'weight' => '-8',
  ),
  3 => 
  array (
    'link_path' => 'node/add',
    'link_title' => 'Create Content',
    'weight' => '-10',
  ),
);
$toolbar_moderator = _toolbar_create('jumpjet_toolbar_moderator', 'Moderator', $toolbar_moderator_links);
$rid = db_result(db_query("SELECT rid FROM {role} WHERE name = '%s'", 'moderator'));
if ($rid) { 
  db_query("INSERT INTO {toolbar_role} VALUES(%d, '%s', %d)", $rid, 'set-jumpjet_toolbar_moderator', -4); 
}

/** CONTENT EDITOR Toolbar **/
$toolbar_contenteditor_links = array (
  0 => 
  array (
    'link_path' => 'admin/contentmanager',
    'link_title' => 'Manage Content',
    'weight' => '-9',
  ),
  1 => 
  array (
    'link_path' => 'node/add',
    'link_title' => 'Create Content',
    'weight' => '-10',
  ),
  2 => 
  array (
    'link_path' => 'admin/commentmanager',
    'link_title' => 'Manage Comments',
    'weight' => '-8',
  ),
);
$toolbar_contenteditor = _toolbar_create('jumpjet_toolbar_contenteditor', 'Content Editor', $toolbar_contenteditor_links);
$rid = db_result(db_query("SELECT rid FROM {role} WHERE name = '%s'", 'content editor'));
if ($rid) {
  db_query("INSERT INTO {toolbar_role} VALUES(%d, '%s', %d)", $rid, 'set-jumpjet_toolbar_contenteditor', -3); 
}

/** CONTENT AUTHOR Toolbar **/
$toolbar_contentauthor_links = array (
  0 => 
  array (
    'link_path' => 'admin/contentmanager',
    'link_title' => 'Manage Content',
    'weight' => '-9',
  ),
  1 => 
  array (
    'link_path' => 'node/add',
    'link_title' => 'Create Content',
    'weight' => '-10',
  ),
);
$toolbar_contentauthor = _toolbar_create('jumpjet_toolbar_contentauthor', 'Content Author', $toolbar_contentauthor_links);
$rid = db_result(db_query("SELECT rid FROM {role} WHERE name = '%s'", 'content author'));
if ($rid) {
  db_query("INSERT INTO {toolbar_role} VALUES(%d, '%s', %d)", $rid, 'set-jumpjet_toolbar_contentauthor', -2); 
}
