#include <DeerG.h>

class Sandbox : public DeerG::Application
{
public:
	Sandbox()
	{
	}

	~Sandbox()
	{
	}
};

DeerG::Application* DeerG::CreateApplication() {
	return new Sandbox();
}