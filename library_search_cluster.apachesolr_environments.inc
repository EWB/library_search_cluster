<?php
/**
 * @file
 * library_search_cluster.apachesolr_environments.inc
 */

/**
 * Implements hook_apachesolr_environments().
 */
function library_search_cluster_apachesolr_environments() {
  $export = array();

  $environment = new stdClass();
  $environment->api_version = 1;
  $environment->env_id = 'solr';
  $environment->name = 'localhost server';
  $environment->url = 'http://localhost:8983/solr';
  $environment->service_class = '';
  $environment->conf = array(
    'apachesolr_search_facet_pages' => '',
    'apachesolr_search_show_facets' => 0,
  );
  $environment->index_bundles = array(
    'node' => array(
      0 => 'article',
      1 => 'base_announcement',
      2 => 'page',
    ),
  );
  $export['solr'] = $environment;

  return $export;
}
