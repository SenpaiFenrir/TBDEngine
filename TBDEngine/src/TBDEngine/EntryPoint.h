#pragma once

#ifdef TBD_PLATFORM_WINDOWS

extern TBDEngine::Application* TBDEngine::CreateApplication();

int main(int argc, char** argv)
{
	auto app = TBDEngine::CreateApplication();

	app->Run();

	delete app;
}

#endif // TBD_PLATFORM_WINDOWS
