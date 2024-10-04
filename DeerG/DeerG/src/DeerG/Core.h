#pragma once

#ifdef DG_PLATFORM_WINDOWS
	#ifdef DG_BUILD_DLL
		#define DG_API __declspec(dllexport)
	#else
		#define DG_API __declspec(dllimport)
	#endif
#else
	#error DeerG only support Windows!
#endif // DG_PLATFORM_WINDOWS
