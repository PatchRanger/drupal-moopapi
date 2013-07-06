<?php

/**
 * @file
 * This file is intended to be separate.
 * It helps to test whether monkey patching works.
 */

function doesMonkeyPatchWork() {
  return FALSE;
}

/**
 * It is for testing Moopapi::wrap().
 */
class ExampleApp {
  public function exampleMethod() {
    return 'ExampleApp';
  }
}

class ExampleAppTestDecorator {
  public function exampleMethod() {
    return 'TestDecorator';
  }
}
