<?php
/**
 * @file
 * event_entity.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function event_entity_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: management_add-events:admin/structure/entity-type/events/events/add.
  $menu_links['management_add-events:admin/structure/entity-type/events/events/add'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/entity-type/events/events/add',
    'router_path' => 'admin/structure/entity-type/events/events/add',
    'link_title' => 'Add Events',
    'options' => array(
      'attributes' => array(
        'title' => 'Add an entity of type Events with bundle Events',
      ),
      'identifier' => 'management_add-events:admin/structure/entity-type/events/events/add',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_events:admin/structure/entity-type/events/events',
  );
  // Exported menu link: management_events:admin/structure/entity-type/events.
  $menu_links['management_events:admin/structure/entity-type/events'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/entity-type/events',
    'router_path' => 'admin/structure/entity-type/events',
    'link_title' => 'Events',
    'options' => array(
      'attributes' => array(
        'title' => 'View all the bundles for \'Events\'',
      ),
      'identifier' => 'management_events:admin/structure/entity-type/events',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_entity-types:admin/structure/entity-type',
  );
  // Exported menu link: management_events:admin/structure/entity-type/events/events.
  $menu_links['management_events:admin/structure/entity-type/events/events'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/entity-type/events/events',
    'router_path' => 'admin/structure/entity-type/events/events',
    'link_title' => 'Events',
    'options' => array(
      'attributes' => array(
        'title' => 'View all entites of type Events with bundle Events',
      ),
      'identifier' => 'management_events:admin/structure/entity-type/events/events',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_events:admin/structure/entity-type/events',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Add Events');
  t('Events');

  return $menu_links;
}
