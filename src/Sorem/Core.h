#pragma once


#ifdef SOREM_PLATFORM_WINDOWS
	#ifdef SOREM_BUILD_DLL
		#define SOREM_API __declspec(dllexport)
#else
		#define SOREM_API __declspec(dllimport)


#endif // SOREM_BUILD_DLL 
#else
#error Currently supporting only Windows!

#endif // SOREM_PLATFORM_WINDOWS
