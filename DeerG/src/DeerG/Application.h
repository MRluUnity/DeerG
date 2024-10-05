#pragma once
/*
	这个头文件包含了一个Application类的定义
*/
#include "Core.h"

namespace DeerG {
	class DG_API Application 
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	Application* CreateApplication();
}
