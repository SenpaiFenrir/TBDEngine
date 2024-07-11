#pragma once

#ifdef TBD_PLATFORM_WINDOWS
	#ifdef TBD_BUILD_DLL
		#define TBD_API __declspec(dllexport)
	#else
		#define TBD_API __declspec(dllimport)
	#endif
#else
	#error TBD only supports windows!
#endif