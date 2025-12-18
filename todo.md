# TODO

## Folder open/close polish
- Add open/close animations (zoom + fade) for folder popup (e.g. via `GtkRevealer` and/or CSS transitions).
- Improve background treatment while folder popup is open (stronger blur/dim, optional).

## Drag & drop UX (macOS-like)
- Add drag-hover feedback when moving apps:
  - highlight folder tile when hovering
  - show a placeholder/slot when dropping on background grid
  - optionally scale the dragged icon
- Add snapping behavior when dropping near grid slots.

## Folder popup features
- Implement app reordering inside the folder popup (drag within the popup grid).
- Implement pagination or scrolling behavior that matches macOS more closely (if folder contains many apps).

## Input/interaction improvements
- Keyboard navigation inside folder popup (arrow keys to move selection, Enter to launch, Esc to close popup).
- Click on popup title area to rename folder (optional alternative to right-click).

## Visual consistency
- Tune popup layout sizes (tile size, icon size, padding) to better match macOS Launchpad aesthetics.
- Improve folder preview icon composition (e.g. consistent padding, rounded mini-icons).
- Add rounded-corner icon masking / squircle style for app icons (optional; theme-aware fallback).
- Add subtle drop shadows under tiles/popup to match Launchpad depth.

## Launchpad-style “Edit mode”
- Add long-press (or holding mouse button) to enter edit mode.
- In edit mode:
  - make icons “jiggle” animation
  - show delete/hide badge on apps (macOS has an “x” for removable apps; here map to Hide)
  - allow drag-reorder with stronger snapping
  - allow drag out of folder and keep the folder open until drop (optional)
- Exit edit mode with Esc / clicking background.

## Page/desktop behavior
- Add smooth page transition animation (slide/fade) when switching pages.
- Add touchpad gesture support closer to Launchpad (two-finger swipe to change pages).
- Add page “bounce” / resistance effect at ends (optional).
- Keep dots clickable and add hover/active animations.

## Folder popup UX improvements
- Add open/close animation that matches Launchpad (scale from the folder tile position).
- Add background click-to-close with fade (already done, but animate).
- Add pinch gesture to close folder popup (if available via GTK gestures).

## Search behavior (Launchpad-like)
- Auto-focus search field when opening launcher (already, but ensure refocus when closing folder).
- Show “search results” view with:
  - larger icons + highlighted names
  - keyboard navigation with up/down/enter
  - optionally grouped results (Applications / Settings / Utilities)
- Add clear (✕) button styling similar to macOS.

## App launch animations
- Animate app launch: briefly scale the clicked icon and fade out launcher.
- Optional: show a small “launching” indicator on the tile.

## Sorting and organization
- Add sort modes: name, recently used (requires usage tracking), most used.
- Add manual “reset layout” action.
- Add import/export layout (config backup) UI.

## Accessibility and polish
- Improve focus ring / keyboard focus visuals.
- Add tooltips for truncated app names.
- Add HiDPI-aware sizing and icon scaling.
