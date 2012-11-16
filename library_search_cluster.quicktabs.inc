<?php
/**
 * @file
 * library_search_cluster.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function library_search_cluster_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'library_search_cluster';
  $quicktabs->ajax = 1;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Library Search Cluster';
  $quicktabs->tabs = array(
    0 => array(
      'bid' => 'boxes_delta_encore_search',
      'hide_title' => 1,
      'title' => 'Catalog',
      'weight' => '-100',
      'type' => 'block',
    ),
    1 => array(
      'bid' => 'boxes_delta_journal_search',
      'hide_title' => 1,
      'title' => 'Journal Titles',
      'weight' => '-98',
      'type' => 'block',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'default';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Catalog');
  t('Journal Titles');
  t('Library Search Cluster');

  $export['library_search_cluster'] = $quicktabs;

  return $export;
}
