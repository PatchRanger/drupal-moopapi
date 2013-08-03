; Core version
; ------------
; Each makefile should begin by declaring the core version of Drupal that all
; projects should be compatible with.
core = 7.x
; API version
; ------------
; Every makefile needs to declare it's Drush Make API version. This version of
; drush make uses API version `2`.
api = 2

; Download via git, because we don't want to wait while drupal.org builds a package.
projects[moopapi][type] = module
projects[moopapi][download][type] = git
projects[moopapi][download][branch] = 7.x-2.x

; Dependencies.
projects[libraries][overwrite] = TRUE
projects[libraries][version] = 3.x-dev
