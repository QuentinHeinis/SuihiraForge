#pragma once


#include "Core.h"

namespace SF {
	class SUIHIRA_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in client
	Application* CreateApplication();
}
