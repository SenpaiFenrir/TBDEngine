#pragma once

#ifdef TBD_PLATFORM_WINDOWS

extern TBDEngine::Application* TBDEngine::CreateApplication();

int main(int argc, char** argv)
{
	TBDEngine::Log::Init();
	TBD_CORE_WARN("Initialized Core Log!");
	int a = 5;
	TBD_INFO("Initialized Client Log! Var={0}", a);

	auto app = TBDEngine::CreateApplication();

	app->Run();

	delete app;
}

#endif // TBD_PLATFORM_WINDOWS
