#pragma once
/*
	���ͷ�ļ�������һ��Application��Ķ���
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
