#pragma once

#ifdef SF_PLATFORM_WINDOWS
	#ifdef SF_BUILD_DLL
		#define SUIHIRA_API __declspec(dllexport)
	#else
		#define SUIHIRA_API __declspec(dllimport)
	#endif // SF_BUILD_DLL
#else
	#error SuihiraForge only supports Windows !
#endif // SF_PLATFORM_WINDOWS
