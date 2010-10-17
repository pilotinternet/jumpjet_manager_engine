<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function jumpjet_manager_engine_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-jumpjet-manage:admin/build/menu
  $menu_links['menu-jumpjet-manage:admin/build/menu'] = array(
    'menu_name' => 'menu-jumpjet-manage',
    'link_path' => 'admin/build/menu',
    'router_path' => 'admin/build/menu',
    'link_title' => 'Manage Menus',
    'options' => array(
      'attributes' => array(
        'title' => 'Control your site\'s navigation menu, primary links and secondary links. as well as rename and reorganize menu items.',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '5',
  );
  // Exported menu link: menu-jumpjet-manage:admin/build/menu-customize/primary-links/poweredit
  $menu_links['menu-jumpjet-manage:admin/build/menu-customize/primary-links/poweredit'] = array(
    'menu_name' => 'menu-jumpjet-manage',
    'link_path' => 'admin/build/menu-customize/primary-links/poweredit',
    'router_path' => 'admin/build/menu-customize/%/poweredit',
    'link_title' => 'Primary Links',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '5',
    'parent_path' => 'admin/build/menu',
  );
  // Exported menu link: menu-jumpjet-manage:admin/build/menu-customize/secondary-links/poweredit
  $menu_links['menu-jumpjet-manage:admin/build/menu-customize/secondary-links/poweredit'] = array(
    'menu_name' => 'menu-jumpjet-manage',
    'link_path' => 'admin/build/menu-customize/secondary-links/poweredit',
    'router_path' => 'admin/build/menu-customize/%/poweredit',
    'link_title' => 'Secondary Links',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '6',
    'parent_path' => 'admin/build/menu',
  );
  // Exported menu link: menu-jumpjet-manage:admin/commentmanager
  $menu_links['menu-jumpjet-manage:admin/commentmanager'] = array(
    'menu_name' => 'menu-jumpjet-manage',
    'link_path' => 'admin/commentmanager',
    'router_path' => 'admin/commentmanager',
    'link_title' => 'Manage Comments',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '2',
  );
  // Exported menu link: menu-jumpjet-manage:admin/content/backup_migrate
  $menu_links['menu-jumpjet-manage:admin/content/backup_migrate'] = array(
    'menu_name' => 'menu-jumpjet-manage',
    'link_path' => 'admin/content/backup_migrate',
    'router_path' => 'admin/content/backup_migrate',
    'link_title' => 'Backup Website',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '6',
  );
  // Exported menu link: menu-jumpjet-manage:admin/content/taxonomy_manager
  $menu_links['menu-jumpjet-manage:admin/content/taxonomy_manager'] = array(
    'menu_name' => 'menu-jumpjet-manage',
    'link_path' => 'admin/content/taxonomy_manager',
    'router_path' => 'admin/content/taxonomy_manager',
    'link_title' => 'Manage Taxonomy',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '4',
  );
  // Exported menu link: menu-jumpjet-manage:admin/contentmanager
  $menu_links['menu-jumpjet-manage:admin/contentmanager'] = array(
    'menu_name' => 'menu-jumpjet-manage',
    'link_path' => 'admin/contentmanager',
    'router_path' => 'admin/contentmanager',
    'link_title' => 'Manage Content',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '1',
  );
  // Exported menu link: menu-jumpjet-manage:admin/usermanager
  $menu_links['menu-jumpjet-manage:admin/usermanager'] = array(
    'menu_name' => 'menu-jumpjet-manage',
    'link_path' => 'admin/usermanager',
    'router_path' => 'admin/usermanager',
    'link_title' => 'Manage Users',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '3',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Backup Website');
  t('Manage Comments');
  t('Manage Content');
  t('Manage Menus');
  t('Manage Taxonomy');
  t('Manage Users');
  t('Primary Links');
  t('Secondary Links');


  return $menu_links;
}
