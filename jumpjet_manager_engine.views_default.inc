<?php

/**
 * Implementation of hook_views_default_views().
 */
function jumpjet_manager_engine_views_default_views() {
  $views = array();

  // Exported view: jumpjet_comment_manager
  $view = new view;
  $view->name = 'jumpjet_comment_manager';
  $view->description = 'JumpJet Comment Manager';
  $view->tag = 'JumpJet';
  $view->view_php = '';
  $view->base_table = 'comments';
  $view->is_cacheable = FALSE;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  
/* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Manage Comments';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    '3' => 3,
    '6' => 6,
    '7' => 7,
    '8' => 8,
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Jumpjet Content Manager Page Header';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = 'Using the controls below you can filter and browse all the comments on your site, and then perform actions on them. To perform \'bulk operations\' on more than one comment, tick the ones you want to act on, and press the button for the action you wish to perform.';
  $handler->display->display_options['header']['area']['format'] = '1';
  /* Empty text: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'Jumpjet Comment Manager Page Empty Text';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = 'There are no comments to display. This may be because of the filters you have selected above, or perhaps because you don\'t have sufficient permissions.';
  $handler->display->display_options['empty']['area']['format'] = '1';
  /* Field: Comment: Post date */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'comments';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['label'] = 'Comment date';
  $handler->display->display_options['fields']['timestamp']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['timestamp']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['timestamp']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['html'] = 0;
  $handler->display->display_options['fields']['timestamp']['hide_empty'] = 0;
  $handler->display->display_options['fields']['timestamp']['empty_zero'] = 0;
  /* Field: Comment: Title */
  $handler->display->display_options['fields']['subject']['id'] = 'subject';
  $handler->display->display_options['fields']['subject']['table'] = 'comments';
  $handler->display->display_options['fields']['subject']['field'] = 'subject';
  $handler->display->display_options['fields']['subject']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['subject']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['subject']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['subject']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['subject']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['subject']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['subject']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['subject']['alter']['html'] = 0;
  $handler->display->display_options['fields']['subject']['hide_empty'] = 0;
  $handler->display->display_options['fields']['subject']['empty_zero'] = 0;
  $handler->display->display_options['fields']['subject']['link_to_comment'] = 1;
  /* Field: Comment: Author */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'comments';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['link_to_user'] = 1;
  /* Field: Comment: Mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'comments';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['label'] = 'Author Email';
  $handler->display->display_options['fields']['mail']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['mail']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['mail']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['html'] = 0;
  $handler->display->display_options['fields']['mail']['hide_empty'] = 0;
  $handler->display->display_options['fields']['mail']['empty_zero'] = 0;
  /* Field: Comment: In moderation */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'comments';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = 'Unpublished';
  $handler->display->display_options['fields']['status']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['status']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['status']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['status']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['status']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['status']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['status']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['status']['alter']['html'] = 0;
  $handler->display->display_options['fields']['status']['hide_empty'] = 0;
  $handler->display->display_options['fields']['status']['empty_zero'] = 0;
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Comment: Delete link */
  $handler->display->display_options['fields']['delete_comment']['id'] = 'delete_comment';
  $handler->display->display_options['fields']['delete_comment']['table'] = 'comments';
  $handler->display->display_options['fields']['delete_comment']['field'] = 'delete_comment';
  $handler->display->display_options['fields']['delete_comment']['label'] = 'Delete';
  $handler->display->display_options['fields']['delete_comment']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['delete_comment']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['delete_comment']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['delete_comment']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['delete_comment']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['delete_comment']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['delete_comment']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['delete_comment']['alter']['html'] = 0;
  $handler->display->display_options['fields']['delete_comment']['hide_empty'] = 0;
  $handler->display->display_options['fields']['delete_comment']['empty_zero'] = 0;
  $handler->display->display_options['fields']['delete_comment']['text'] = 'Delete';
  /* Field: Comment: Edit link */
  $handler->display->display_options['fields']['edit_comment']['id'] = 'edit_comment';
  $handler->display->display_options['fields']['edit_comment']['table'] = 'comments';
  $handler->display->display_options['fields']['edit_comment']['field'] = 'edit_comment';
  $handler->display->display_options['fields']['edit_comment']['label'] = 'Edit';
  $handler->display->display_options['fields']['edit_comment']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['edit_comment']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['edit_comment']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['edit_comment']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['edit_comment']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['edit_comment']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['edit_comment']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['edit_comment']['alter']['html'] = 0;
  $handler->display->display_options['fields']['edit_comment']['hide_empty'] = 0;
  $handler->display->display_options['fields']['edit_comment']['empty_zero'] = 0;
  $handler->display->display_options['fields']['edit_comment']['text'] = 'Edit';
  /* Field: Comment: View link */
  $handler->display->display_options['fields']['view_comment']['id'] = 'view_comment';
  $handler->display->display_options['fields']['view_comment']['table'] = 'comments';
  $handler->display->display_options['fields']['view_comment']['field'] = 'view_comment';
  $handler->display->display_options['fields']['view_comment']['label'] = 'View';
  $handler->display->display_options['fields']['view_comment']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['view_comment']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['view_comment']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['view_comment']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['view_comment']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['view_comment']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['view_comment']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['view_comment']['alter']['html'] = 0;
  $handler->display->display_options['fields']['view_comment']['hide_empty'] = 0;
  $handler->display->display_options['fields']['view_comment']['empty_zero'] = 0;
  $handler->display->display_options['fields']['view_comment']['text'] = 'View';
  /* Sort criterion: Comment: ID */
  $handler->display->display_options['sorts']['cid']['id'] = 'cid';
  $handler->display->display_options['sorts']['cid']['table'] = 'comments';
  $handler->display->display_options['sorts']['cid']['field'] = 'cid';
  $handler->display->display_options['sorts']['cid']['order'] = 'DESC';
  /* Filter: Comment: Post date */
  $handler->display->display_options['filters']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['filters']['timestamp']['table'] = 'comments';
  $handler->display->display_options['filters']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['filters']['timestamp']['operator'] = 'between';
  $handler->display->display_options['filters']['timestamp']['exposed'] = TRUE;
  $handler->display->display_options['filters']['timestamp']['expose']['operator'] = 'timestamp_op';
  $handler->display->display_options['filters']['timestamp']['expose']['label'] = 'Comment Date Between';
  $handler->display->display_options['filters']['timestamp']['expose']['identifier'] = 'timestamp';
  /* Filter: Comment: Author */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'comments';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['label'] = 'Comment Author';
  $handler->display->display_options['filters']['name']['expose']['use_operator'] = 1;
  $handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
  $handler->display->display_options['filters']['name']['case'] = 0;
  /* Filter: Comment: In moderation */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'comments';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 'All';
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Unpublished';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  
/* Display: Page */
  $handler = $view->new_display('page', 'Page', 'jumpjet_commentmanager_page1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'bulk';
  $handler->display->display_options['style_options']['columns'] = array(
    'timestamp' => 'timestamp',
    'subject' => 'subject',
    'name' => 'name',
    'mail' => 'mail',
    'status' => 'status',
    'delete_comment' => 'delete_comment',
    'edit_comment' => 'edit_comment',
    'view_comment' => 'view_comment',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'timestamp' => array(
      'sortable' => 1,
      'align' => '',
      'separator' => '',
    ),
    'subject' => array(
      'sortable' => 1,
      'align' => '',
      'separator' => '',
    ),
    'name' => array(
      'sortable' => 1,
      'align' => '',
      'separator' => '',
    ),
    'mail' => array(
      'sortable' => 0,
      'align' => '',
      'separator' => '',
    ),
    'status' => array(
      'sortable' => 1,
      'align' => '',
      'separator' => '',
    ),
    'delete_comment' => array(
      'align' => '',
      'separator' => '',
    ),
    'edit_comment' => array(
      'align' => '',
      'separator' => '',
    ),
    'view_comment' => array(
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 1;
  $handler->display->display_options['style_options']['selected_operations'] = array(
    'views_bulk_operations_delete_comment_action' => 'views_bulk_operations_delete_comment_action',
    'comment_publish_action' => 'comment_publish_action',
    'comment_unpublish_action' => 'comment_unpublish_action',
    'node_assign_owner_action' => 0,
    'system_message_action' => 0,
    'views_bulk_operations_action' => 0,
    'views_bulk_operations_script_action' => 0,
    'node_make_sticky_action' => 0,
    'node_make_unsticky_action' => 0,
    'views_bulk_operations_argument_selector_action' => 0,
    'node_promote_action' => 0,
    'node_publish_action' => 0,
    'system_goto_action' => 0,
    'node_unpromote_action' => 0,
    'node_save_action' => 0,
    'system_send_email_action' => 0,
    'comment_unpublish_by_keyword_action' => 0,
    'node_unpublish_action' => 0,
  );
  $handler->display->display_options['style_options']['execution_type'] = '2';
  $handler->display->display_options['style_options']['display_type'] = '1';
  $handler->display->display_options['style_options']['skip_confirmation'] = 0;
  $handler->display->display_options['style_options']['display_result'] = 1;
  $handler->display->display_options['style_options']['merge_single_action'] = 1;
  $handler->display->display_options['style_options']['hide_select_all'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['path'] = 'admin/commentmanager';

  $views[$view->name] = $view;

  // Exported view: jumpjet_content_manager
  $view = new view;
  $view->name = 'jumpjet_content_manager';
  $view->description = 'JumpJet Content Manager';
  $view->tag = 'JumpJet';
  $view->view_php = '';
  $view->base_table = 'node';
  $view->is_cacheable = FALSE;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  
/* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Manage Content';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    '3' => 3,
    '5' => 5,
    '6' => 6,
    '7' => 7,
    '8' => 8,
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'bulk';
  $handler->display->display_options['style_options']['columns'] = array(
    'created' => 'created',
    'type' => 'type',
    'title' => 'title',
    'timestamp' => 'timestamp',
    'comment_count' => 'comment_count',
    'status' => 'status',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'created';
  $handler->display->display_options['style_options']['info'] = array(
    'created' => array(
      'sortable' => 1,
      'align' => '',
      'separator' => '',
    ),
    'type' => array(
      'sortable' => 1,
      'align' => '',
      'separator' => '',
    ),
    'title' => array(
      'sortable' => 1,
      'align' => '',
      'separator' => '',
    ),
    'timestamp' => array(
      'align' => '',
      'separator' => '',
    ),
    'comment_count' => array(
      'sortable' => 1,
      'align' => '',
      'separator' => '',
    ),
    'status' => array(
      'sortable' => 1,
      'align' => '',
      'separator' => '',
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 1;
  $handler->display->display_options['style_options']['selected_operations'] = array(
    'node_mass_update:a27b9efabcd054685a549378b174ad11' => 'node_mass_update:a27b9efabcd054685a549378b174ad11',
    'node_mass_update:14de7d028b4bffdf2b4a266562ca18ac' => 'node_mass_update:14de7d028b4bffdf2b4a266562ca18ac',
    'node_mass_update:9c585624b9b3af0b4687d5f97f35e047' => 'node_mass_update:9c585624b9b3af0b4687d5f97f35e047',
    'node_mass_update:0ccad85c1ebe4c9ceada1aa64293b080' => 'node_mass_update:0ccad85c1ebe4c9ceada1aa64293b080',
    'node_assign_owner_action' => 0,
    'views_bulk_operations_delete_node_action' => 0,
    'system_message_action' => 0,
    'views_bulk_operations_action' => 0,
    'views_bulk_operations_script_action' => 0,
    'node_make_sticky_action' => 0,
    'node_make_unsticky_action' => 0,
    'node_mass_update:c4d3b28efb86fd703619a50b74d43794' => 0,
    'views_bulk_operations_fields_action' => 0,
    'views_bulk_operations_taxonomy_action' => 0,
    'views_bulk_operations_argument_selector_action' => 0,
    'node_promote_action' => 0,
    'node_publish_action' => 0,
    'system_goto_action' => 0,
    'node_unpromote_action' => 0,
    'node_mass_update:8ce21b08bb8e773d10018b484fe4815e' => 0,
    'node_save_action' => 0,
    'system_send_email_action' => 0,
    'node_unpublish_action' => 0,
    'node_unpublish_by_keyword_action' => 0,
    'pathauto_node_update_alias_multiple:620e193b20ba9caa374fea9ca0ad38f0' => 0,
  );
  $handler->display->display_options['style_options']['execution_type'] = '2';
  $handler->display->display_options['style_options']['display_type'] = '1';
  $handler->display->display_options['style_options']['skip_confirmation'] = 0;
  $handler->display->display_options['style_options']['display_result'] = 1;
  $handler->display->display_options['style_options']['merge_single_action'] = 1;
  $handler->display->display_options['style_options']['hide_select_all'] = 0;
  $handler->display->display_options['style_options']['views_bulk_operations_fields_action'] = array(
    'php_code' => 0,
    'display_fields' => array(
      '_all_' => '_all_',
    ),
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  /* Empty text: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'Content Manager No Content';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = '<strong>No content available</strong>. This may be because no content fits the selection criteria above, or because you do not have the appropriate permissions to view the content that exists.';
  $handler->display->display_options['empty']['area']['format'] = '1';
  /* Field: Node: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Created';
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['created']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['created']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['created']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['created']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['created']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['created']['alter']['html'] = 0;
  $handler->display->display_options['fields']['created']['hide_empty'] = 0;
  $handler->display->display_options['fields']['created']['empty_zero'] = 0;
  /* Field: Node: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['type']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['type']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['type']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['type']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['type']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['type']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['type']['alter']['html'] = 0;
  $handler->display->display_options['fields']['type']['hide_empty'] = 0;
  $handler->display->display_options['fields']['type']['empty_zero'] = 0;
  $handler->display->display_options['fields']['type']['link_to_node'] = 0;
  $handler->display->display_options['fields']['type']['machine_name'] = 0;
  /* Field: Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Node: Has new content */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'history_user';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['label'] = '';
  $handler->display->display_options['fields']['timestamp']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['timestamp']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['timestamp']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['html'] = 0;
  $handler->display->display_options['fields']['timestamp']['hide_empty'] = 0;
  $handler->display->display_options['fields']['timestamp']['empty_zero'] = 0;
  $handler->display->display_options['fields']['timestamp']['link_to_node'] = 0;
  $handler->display->display_options['fields']['timestamp']['comments'] = 0;
  /* Field: Node: Comment count */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['label'] = 'Comments';
  $handler->display->display_options['fields']['comment_count']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['comment_count']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['comment_count']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['comment_count']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['comment_count']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['comment_count']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['comment_count']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['comment_count']['alter']['html'] = 0;
  $handler->display->display_options['fields']['comment_count']['hide_empty'] = 0;
  $handler->display->display_options['fields']['comment_count']['empty_zero'] = 0;
  $handler->display->display_options['fields']['comment_count']['format_plural'] = 0;
  /* Field: Node: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['status']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['status']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['status']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['status']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['status']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['status']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['status']['alter']['html'] = 0;
  $handler->display->display_options['fields']['status']['hide_empty'] = 0;
  $handler->display->display_options['fields']['status']['empty_zero'] = 0;
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Node: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['edit_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['edit_node']['empty_zero'] = 0;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['operator'] = 'not in';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'profile' => 'profile',
  );
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Content Type';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember'] = 1;
  $handler->display->display_options['filters']['type']['expose']['single'] = 0;
  $handler->display->display_options['filters']['type']['expose']['reduce'] = 0;
  /* Filter: Node: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 'All';
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Published';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['remember'] = 1;
  /* Filter: Node: Post date */
  $handler->display->display_options['filters']['created']['id'] = 'created';
  $handler->display->display_options['filters']['created']['table'] = 'node';
  $handler->display->display_options['filters']['created']['field'] = 'created';
  $handler->display->display_options['filters']['created']['operator'] = 'between';
  $handler->display->display_options['filters']['created']['exposed'] = TRUE;
  $handler->display->display_options['filters']['created']['expose']['operator'] = 'created_op';
  $handler->display->display_options['filters']['created']['expose']['label'] = 'Created Between';
  $handler->display->display_options['filters']['created']['expose']['identifier'] = 'created';
  $handler->display->display_options['filters']['created']['expose']['remember'] = 1;
  
/* Display: Page */
  $handler = $view->new_display('page', 'Page', 'jumpjet_contentmanager_page1');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Content Manager Page Header';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  $handler->display->display_options['header']['area']['content'] = 'You can manage all your site\'s content from this screen. Simply use the filters to narrow down the content to view based on the type of content, the date published, or whether it is published or not. You can also sort the content displayed by clicking on the table headings. Finally you can perform \'bulk operations\' on content by ticking the items you want the operation to affect, and then clicking the button for the action you wish to take.';
  $handler->display->display_options['header']['area']['format'] = '1';
  $handler->display->display_options['path'] = 'admin/contentmanager';

  $views[$view->name] = $view;

  // Exported view: jumpjet_user_manager
  $view = new view;
  $view->name = 'jumpjet_user_manager';
  $view->description = 'Jumpjet User Manager';
  $view->tag = 'JumpJet';
  $view->view_php = '';
  $view->base_table = 'users';
  $view->is_cacheable = FALSE;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  
/* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Manage Users';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    '3' => 3,
    '7' => 7,
    '8' => 8,
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Jumpjet User Manager Page Header';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  $handler->display->display_options['header']['area']['content'] = 'From this page you can manage all the users on the site. Use the filters to narrow down the selection. You can then perform \'bulk operations\' on users by selecting them with the tick box on the left, and clicking the button for the action you wish to perform.';
  $handler->display->display_options['header']['area']['format'] = '1';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['empty'] = FALSE;
  /* Empty text: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'Jumpjet User Manager Page Empty Text';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = 'There are no users to display. This may be because of the filters you have applied above, or perhaps you do not have sufficient permissions.';
  $handler->display->display_options['empty']['area']['format'] = '1';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['link_to_user'] = 1;
  $handler->display->display_options['fields']['name']['overwrite_anonymous'] = 0;
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['mail']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['mail']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['html'] = 0;
  $handler->display->display_options['fields']['mail']['hide_empty'] = 0;
  $handler->display->display_options['fields']['mail']['empty_zero'] = 0;
  /* Field: User: Created date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'users';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Created';
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['created']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['created']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['created']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['created']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['created']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['created']['alter']['html'] = 0;
  $handler->display->display_options['fields']['created']['hide_empty'] = 0;
  $handler->display->display_options['fields']['created']['empty_zero'] = 0;
  /* Field: User: Last access */
  $handler->display->display_options['fields']['access']['id'] = 'access';
  $handler->display->display_options['fields']['access']['table'] = 'users';
  $handler->display->display_options['fields']['access']['field'] = 'access';
  $handler->display->display_options['fields']['access']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['access']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['access']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['access']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['access']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['access']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['access']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['access']['alter']['html'] = 0;
  $handler->display->display_options['fields']['access']['hide_empty'] = 0;
  $handler->display->display_options['fields']['access']['empty_zero'] = 0;
  /* Field: User: Roles */
  $handler->display->display_options['fields']['rid']['id'] = 'rid';
  $handler->display->display_options['fields']['rid']['table'] = 'users_roles';
  $handler->display->display_options['fields']['rid']['field'] = 'rid';
  $handler->display->display_options['fields']['rid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['rid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['rid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['rid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['rid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['rid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['rid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['rid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['rid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['rid']['empty_zero'] = 0;
  /* Field: User: Active */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'users';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = 'Blocked';
  $handler->display->display_options['fields']['status']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['status']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['status']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['status']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['status']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['status']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['status']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['status']['alter']['html'] = 0;
  $handler->display->display_options['fields']['status']['hide_empty'] = 0;
  $handler->display->display_options['fields']['status']['empty_zero'] = 0;
  $handler->display->display_options['fields']['status']['not'] = 1;
  /* Field: User: Link to contact page */
  $handler->display->display_options['fields']['contact']['id'] = 'contact';
  $handler->display->display_options['fields']['contact']['table'] = 'users';
  $handler->display->display_options['fields']['contact']['field'] = 'contact';
  $handler->display->display_options['fields']['contact']['label'] = 'Contact';
  $handler->display->display_options['fields']['contact']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['contact']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['contact']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['contact']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['contact']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['contact']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['contact']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['contact']['alter']['html'] = 0;
  $handler->display->display_options['fields']['contact']['hide_empty'] = 0;
  $handler->display->display_options['fields']['contact']['empty_zero'] = 0;
  $handler->display->display_options['fields']['contact']['text'] = 'Contact';
  /* Field: User: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'users';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['edit_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['edit_node']['empty_zero'] = 0;
  $handler->display->display_options['fields']['edit_node']['text'] = 'EDIT';
  /* Sort criterion: User: Uid */
  $handler->display->display_options['sorts']['uid']['id'] = 'uid';
  $handler->display->display_options['sorts']['uid']['table'] = 'users';
  $handler->display->display_options['sorts']['uid']['field'] = 'uid';
  $handler->display->display_options['sorts']['uid']['order'] = 'DESC';
  /* Filter: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 'All';
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Active';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['remember'] = 1;
  /* Filter: User: Created date */
  $handler->display->display_options['filters']['created']['id'] = 'created';
  $handler->display->display_options['filters']['created']['table'] = 'users';
  $handler->display->display_options['filters']['created']['field'] = 'created';
  $handler->display->display_options['filters']['created']['operator'] = 'between';
  $handler->display->display_options['filters']['created']['exposed'] = TRUE;
  $handler->display->display_options['filters']['created']['expose']['operator'] = 'created_op';
  $handler->display->display_options['filters']['created']['expose']['label'] = 'User Created Between';
  $handler->display->display_options['filters']['created']['expose']['identifier'] = 'created';
  $handler->display->display_options['filters']['created']['expose']['remember'] = 1;
  /* Filter: User: Last access */
  $handler->display->display_options['filters']['access']['id'] = 'access';
  $handler->display->display_options['filters']['access']['table'] = 'users';
  $handler->display->display_options['filters']['access']['field'] = 'access';
  $handler->display->display_options['filters']['access']['operator'] = 'between';
  $handler->display->display_options['filters']['access']['exposed'] = TRUE;
  $handler->display->display_options['filters']['access']['expose']['operator'] = 'access_op';
  $handler->display->display_options['filters']['access']['expose']['label'] = 'User Last Access Site Between';
  $handler->display->display_options['filters']['access']['expose']['identifier'] = 'access';
  $handler->display->display_options['filters']['access']['expose']['remember'] = 1;
  /* Filter: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    '3' => '3',
    '4' => '4',
    '5' => '5',
    '6' => '6',
    '7' => '7',
    '8' => '8',
  );
  $handler->display->display_options['filters']['rid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['rid']['expose']['operator'] = 'rid_op';
  $handler->display->display_options['filters']['rid']['expose']['label'] = 'User Roles';
  $handler->display->display_options['filters']['rid']['expose']['identifier'] = 'rid';
  $handler->display->display_options['filters']['rid']['expose']['remember'] = 1;
  $handler->display->display_options['filters']['rid']['expose']['reduce'] = 0;
  
/* Display: Page */
  $handler = $view->new_display('page', 'Page', 'jumpjet_usermanager_page1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'bulk';
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
    'mail' => 'mail',
    'created' => 'created',
    'access' => 'access',
    'rid' => 'rid',
    'status' => 'status',
    'contact' => 'contact',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'name' => array(
      'sortable' => 1,
      'align' => '',
      'separator' => '',
    ),
    'mail' => array(
      'sortable' => 0,
      'align' => '',
      'separator' => '',
    ),
    'created' => array(
      'sortable' => 1,
      'align' => '',
      'separator' => '',
    ),
    'access' => array(
      'sortable' => 1,
      'align' => '',
      'separator' => '',
    ),
    'rid' => array(
      'align' => '',
      'separator' => '',
    ),
    'status' => array(
      'sortable' => 1,
      'align' => '',
      'separator' => '',
    ),
    'contact' => array(
      'align' => '',
      'separator' => '',
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 1;
  $handler->display->display_options['style_options']['selected_operations'] = array(
    'user_user_operations_block' => 'user_user_operations_block',
    'views_bulk_operations_user_roles_action' => 'views_bulk_operations_user_roles_action',
    'user_user_operations_unblock' => 'user_user_operations_unblock',
    'user_block_ip_action' => 0,
    'user_block_user_action' => 0,
    'views_bulk_operations_delete_user_action' => 0,
    'system_message_action' => 0,
    'views_bulk_operations_action' => 0,
    'views_bulk_operations_script_action' => 0,
    'views_bulk_operations_argument_selector_action' => 0,
    'system_goto_action' => 0,
    'system_send_email_action' => 0,
    'pathauto_user_update_alias_multiple:620e193b20ba9caa374fea9ca0ad38f0' => 0,
  );
  $handler->display->display_options['style_options']['execution_type'] = '2';
  $handler->display->display_options['style_options']['display_type'] = '1';
  $handler->display->display_options['style_options']['skip_confirmation'] = 0;
  $handler->display->display_options['style_options']['display_result'] = 1;
  $handler->display->display_options['style_options']['merge_single_action'] = 1;
  $handler->display->display_options['style_options']['hide_select_all'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['path'] = 'admin/usermanager';

  $views[$view->name] = $view;

  return $views;
}
