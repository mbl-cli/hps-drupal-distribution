<?php
/**
 * @file
 * hps_search.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function hps_search_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'facetapi:block_cache:search_api@hps_node_index';
  $strongarm->value = -1;
  $export['facetapi:block_cache:search_api@hps_node_index'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_api_facets_search_ids';
  $strongarm->value = array(
    'hps_node_index' => array(
      'search_api_views:hps_search:ctools_context_1' => 'search_api_views:hps_search:ctools_context_1',
    ),
  );
  $export['search_api_facets_search_ids'] = $strongarm;

  return $export;
}