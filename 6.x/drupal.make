; Core version
; ------------
; Each makefile should begin by declaring the core version of Drupal that all
; projects should be compatible with.
core = 6.x
; API version
; ------------
; Every makefile needs to declare it's Drush Make API version. This version of
; drush make uses API version `2`.
api = 2

; Core.
projects[drupal][type] = core
projects[drupal][version] = 6.x

; Contributed modules.
projects[simpletest][overwrite] = TRUE
projects[simpletest][version] = 2.x-dev

; Patches.
projects[drupal][patch][] = "http://drupalcode.org/project/simpletest.git/blob_plain/refs/heads/6.x-2.x:/D6-core-simpletest.patch"
projects[drupal][patch][] = "http://drupal.org/files/issues/simpletest_drupal.js_.patch"
