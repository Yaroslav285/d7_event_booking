<?php
/**
 * @file
 * event_entity.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function event_entity_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['latest_events_block-latest_events'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'latest_events',
    'module' => 'latest_events_block',
    'node_types' => array(),
    'pages' => '/events',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => -6,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Latest events',
    'visibility' => 0,
  );

  $export['views--exp-events-page'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => '-exp-events-page',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '/events',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => -7,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-events-block_1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'events-block_1',
    'module' => 'views',
    'node_types' => array(
      0 => 'author',
    ),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => -9,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
