<?php
/**
 * @file
 * event_entity.features.inc
 */

/**
 * Implements hook_views_api().
 */
function event_entity_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_eck_bundle_info().
 */
function event_entity_eck_bundle_info() {
  $items = array(
    'events_events' => array(
      'machine_name' => 'events_events',
      'entity_type' => 'events',
      'name' => 'events',
      'label' => 'Events',
      'config' => array(),
    ),
  );
  return $items;
}

/**
 * Implements hook_eck_entity_type_info().
 */
function event_entity_eck_entity_type_info() {
  $items = array(
    'events' => array(
      'name' => 'events',
      'label' => 'Events',
      'properties' => array(
        'title' => array(
          'label' => 'Title',
          'type' => 'text',
          'behavior' => 'title',
        ),
        'uid' => array(
          'label' => 'Author',
          'type' => 'integer',
          'behavior' => 'author',
        ),
        'created' => array(
          'label' => 'Created',
          'type' => 'integer',
          'behavior' => 'created',
        ),
        'changed' => array(
          'label' => 'Changed',
          'type' => 'integer',
          'behavior' => 'changed',
        ),
      ),
    ),
  );
  return $items;
}
