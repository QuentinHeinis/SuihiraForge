#pragma once

#ifdef SF_PLATFORM_WINDOWS



extern SF::Application* SF::CreateApplication();


int main(int argc, char** argv)
{
	auto app = SF::CreateApplication();
	app->Run();
	delete app;
}

#endif // SF_PLATEFORM_WINDOWS
