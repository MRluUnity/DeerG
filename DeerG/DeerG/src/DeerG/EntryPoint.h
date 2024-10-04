#pragma once
/*
	这个头文件包含了一个主程序的循环调用
*/
#ifdef DG_PLATFORM_WINDOWS

extern DeerG::Application* DeerG::CreateApplication(); 

int main(int argc, char** argv) {
	auto app = DeerG::CreateApplication();
	app->Run();
	delete app;
}

#endif // DG_PLATFORM_WINDOWS
