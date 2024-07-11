#include <TBDEngine.h>

class Sandbox : public TBDEngine::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

TBDEngine::Application* TBDEngine::CreateApplication() 
{
	return new Sandbox();
}