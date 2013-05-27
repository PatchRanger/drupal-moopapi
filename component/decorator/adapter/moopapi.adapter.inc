<?php

/**
 * Adapter for Drupal major version.
 */
abstract class Adapter extends Decorator {}

abstract class ApplicationAdapter extends Adapter implements IApplication {
  const ADMIN_PATH = 'admin';
  protected $type = 'Application';
  protected $ctrls = array();
  protected $controllers = array();

  public function __construct($decorators_applied = array(), &$relations = array(), $app) {
    parent::__construct($decorators_applied, $relations, $app);
    $this->getControllers();
  }

  public function getControllers() {
    $controllers = array();
    foreach ($this->ctrls as $ctrl_name) {
      $controllers[$ctrl_name] = $this->getController($ctrl_name);
    }
    return $controllers;
  }

  public function getController($ctrl_name) {
    $this->controllers[$ctrl_name] = ComponentFactory::get($this->app_name, 'Controller', $ctrl_name, $this->decorators_applied, $this->relations);
    return $this->controllers[$ctrl_name];
  }
}