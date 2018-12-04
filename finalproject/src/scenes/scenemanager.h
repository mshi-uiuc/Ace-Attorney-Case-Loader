#pragma once
#include "scenelist.h"
#include <memory>
#include <vector>

using ScenePtr = std::shared_ptr<finalproject::Scene>;

namespace finalproject {

	class SceneManager {
		std::vector<ScenePtr> scene_list;

		public:
			void add(ScenePtr scene);
			void replace(ScenePtr scene);

			void pop();

			void update();
			void draw();
			void processKey(int key);

			bool empty();
			bool isActive(Scene* scene);
	};

	// global variable
	extern SceneManager scenes;
}

