#pragma once

#ifdef HS_PLATFORM_WINDOWS
	#ifdef HS_BUILD_DLL
		#define HANDLES_API __declspec(dllexport)
	#else 
		#define HANDLES_API __declspec(dllimport)
	#endif
#else
	#error Handles only supports Windows!
#endif
