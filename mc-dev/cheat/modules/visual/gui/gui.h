#pragma once

#include "../../../cheat.h"
#include <variant>

	namespace gui
	{
		extern HWND hwnd;
		extern HDC old_dc;

		extern float menu_color[3];
		extern float item_alpha;

		struct EntityDebugData {
			std::string name;
			float health;
			double x, y, z;
		};
		extern std::vector<EntityDebugData> entity_cache;
		extern std::mutex entity_cache_mutex;

		void drawMenu(HDC dc);
		extern bool draw_ui;
		extern bool draw_hud;
		extern bool debug_entities;
	}