/*
 * XFCE Launcher Plugin v0.7
 *
 * Changelog:
 * - Hotkey setting to toggle the launcher (integrates with XFCE custom keyboard shortcuts)
 * - Drag & drop improvements: reorder apps, create folders, add apps to folders
 * - Search result highlighting (matched text in app names is highlighted)
 * - Responsive layout: grid size, icon size, and spacing adapt to the current screen resolution
 * - Settings dialog updated (includes hotkey configuration)
 * - Configuration saving is more robust (XML attribute escaping)
 * - Fixed broken drag-and-drop behavior
 * - Fixed potential memory leak when loading configuration (folder id replacement)
 * - Fixed callback type mismatches and reduced build warnings

 * Settings management for XFCE Launcher
 * 
 * Copyright (C) 2025 Kamil 'Novik' Nowicki
 *
 * Author: Kamil 'Novik' Nowicki <novik@axisos.org>
 * Website: www.axisos.org
 * Repository: https://github.com/Axis0S/xfce-panel-launcher
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 */

#ifndef XFCE_LAUNCHER_SETTINGS_H
#define XFCE_LAUNCHER_SETTINGS_H

#include <xfconf/xfconf.h>
#include "xfce-launcher.h"

/* Settings property names */
#define XFCE_LAUNCHER_CHANNEL_NAME "xfce4-panel-launcher"
#define SETTING_ICON_NAME "/icon-name"

/* Default values */
#define DEFAULT_ICON_NAME "xfce-launcher"

/* Settings functions */
void launcher_settings_init(LauncherPlugin *launcher);
void launcher_settings_free(LauncherPlugin *launcher);
gchar* launcher_settings_get_icon_name(LauncherPlugin *launcher);
void launcher_settings_set_icon_name(LauncherPlugin *launcher, const gchar *icon_name);
void launcher_show_settings_dialog(LauncherPlugin *launcher);

#endif /* XFCE_LAUNCHER_SETTINGS_H */
