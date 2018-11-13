#pragma once
#include <string>
#include <vector>
#include "ofMain.h"
#include "../game_constants.h"

namespace finalproject {

	class Scene {
		protected:
			ofTrueTypeFont font;
			ofImage bg;

		public:
			virtual void update() = 0;
			virtual void draw() = 0;

			virtual void processKey(int key) = 0;
	};

} //namespace finalproject