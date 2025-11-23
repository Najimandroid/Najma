#pragma once

#ifdef NAJMA_PLATFORM_WINDOWS
	#ifdef NAJMA_BUILD_DLL
		#define NAJMA_API __declspec(dllexport)
	#else
		#define NAJMA_API __declspec(dllimport)
	#endif
#else
	#error Najma only supports Windows!
#endif
