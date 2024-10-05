#pragma once
/*
	���ͷ�ļ�������һ���������ѭ������
*/
#ifdef DG_PLATFORM_WINDOWS

extern DeerG::Application* DeerG::CreateApplication(); 

int main(int argc, char** argv) {
	DeerG::Log::Init();
	DeerG::Log::GetCoreLogger()->warn("Initialized Log!");

	auto app = DeerG::CreateApplication();
	app->Run();
	delete app;
}

#endif // DG_PLATFORM_WINDOWS
