#pragma once
/*
	���ͷ�ļ�������һ���������ѭ������
*/
#ifdef DG_PLATFORM_WINDOWS

extern DeerG::Application* DeerG::CreateApplication(); 

int main(int argc, char** argv) {
	auto app = DeerG::CreateApplication();
	app->Run();
	delete app;
}

#endif // DG_PLATFORM_WINDOWS
