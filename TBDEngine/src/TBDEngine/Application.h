#pragma once

#include"Core.h"

namespace TBDEngine {
	class TBD_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};


	//TO BE DEFINED IN CLIENT
	Application* CreateApplication();

}


