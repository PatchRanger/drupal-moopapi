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

; Download via git, because we don't want to wait while drupal.org builds a package.
libraries[moopapi][type] = module
libraries[moopapi][download][type] = git
libraries[moopapi][download][branch] = 6.x-2.x
libraries[moopapi][destination] = modules

; Dependencies.
projects[autoload][overwrite] = TRUE
projects[autoload][version] = 2.x-dev
projects[libraries][overwrite] = TRUE
projects[libraries][version] = 1.x-dev

; Patch for Autoload long-standing issue.
projects[autoload][patch][] = "http://drupal.org/files/issues/1238562-1-autoload_file_scan_directory_fix.patch"
