#pragma once

#ifdef SF_PLATFORM_WINDOWS



extern SF::Application* SF::CreateApplication();


int main(int argc, char** argv)
{
	SF::Log::Init();
	SF_CORE_WARN("Initialized Log!");
	int a = 5;
	SF_FATAL("Hello! Var={0}", a);
	auto app = SF::CreateApplication();
	app->Run();
	delete app;
}

#endif // SF_PLATEFORM_WINDOWS
