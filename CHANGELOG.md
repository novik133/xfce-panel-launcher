
# Changelog

All notable changes to the XFCE Launcher Plugin will be documented in this file.

## [0.7] - 2025-12-17

### Added
- Hotkey setting to toggle the launcher (integrates with XFCE custom keyboard shortcuts)
- Drag & drop improvements:
	- Reorder apps by dragging
	- Create folders by dropping an app onto another app
	- Add apps to folders by dropping onto a folder
- Search result highlighting (matched text in app names is highlighted)
- Responsive layout: grid size, icon size, and spacing adapt to the current screen resolution when opened

### Changed
- Settings dialog updated (includes hotkey configuration)
- Configuration saving is more robust (XML attribute escaping)

### Fixed
- Fixed broken drag-and-drop behavior
- Fixed potential memory leak when loading configuration (folder id replacement)
- Fixed callback type mismatches and reduced build warnings


## [0.6] - 2025-07-23

### Added
- Customizable panel icon feature with settings dialog
- Enhanced icon chooser with larger preview (48x48 pixels)
- File browser support for custom icons (SVG, PNG, JPEG formats)
- Support for Snap applications
- Support for Flatpak applications (system and user)
- Automatic application refresh without logout/login
- Real-time monitoring of application directories
- Browse button in icon selection dialog
- Support for absolute file paths as icons
- Extended icon selection with more common launcher icons

### Changed
- Improved icon chooser dialog with better layout and spacing
- Enhanced application discovery from multiple sources
- Better duplicate application detection
- Settings dialog now properly displays file-based icons
- Icon size in settings dialog increased for better visibility

### Fixed
- Fixed build errors related to non-existent XfceIconChooser
- Fixed icon display handling for both theme icons and file paths
- Fixed unused function warnings
- Fixed desktop file generation in Makefile

### Technical
- Added dependency on libxfconf-0 for settings management
- Implemented GFileMonitor for directory watching
- Added XfconfChannel to plugin structure

## [0.5] - 2025-07-23

### Added
- Debian packaging support
- Custom icon support with multiple sizes
- Comprehensive documentation

### Changed
- Updated author information and copyright notices
- Improved documentation with feature list

### Fixed
- Minor stability issues

## [0.4] - 2025-07-23

### Added
- Initial release
- Full-screen application launcher plugin for XFCE Panel
- Grid layout with search functionality
- Support for hiding applications
- Dynamic application detection
- Keyboard navigation (ESC to close)
- Real-time search filtering
- Right-click context menu
- Smooth hover animations
