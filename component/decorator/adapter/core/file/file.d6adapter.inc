<?php

class FileD6Adapter extends ApplicationAdapter /*implements IFile*/ {

  /**
   * Adapter for file_directory_path().
   * @see http://drupal.org/update/modules/6/7#file_directory_path
   */
  public function directory_path() {
    $path = variable_get('file_public_path', conf_path() . '/files');
    // Simpletest does it wrong: we get sites/default/files/simpletest/XXXX/simpletest
    // instead of just sites/default/files/simpletest.
    if (strpos($path, 'simpletest') !== FALSE) {
      $path = conf_path() . '/files';
    }
    return $path;
  }

  /**
   * Adapter for file_check_directory().
   * @see http://drupal.org/update/modules/6/7#file_prepare_directory
   */
  public function check_directory(&$directory, $mode = 0, $form_item = NULL) {
    return file_prepare_directory($directory, $mode);
  }
}