// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#include "targetver.h"

#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers
// Windows Header Files:
#include <windows.h>

// C RunTime Header Files
#include <stdlib.h>
#include <malloc.h>
#include <memory.h>
#include <tchar.h>

#include <Strsafe.h>
#include <Shlobj.h>
#include <timeapi.h>
#include <shellapi.h>
#include <dbt.h>
#include <xmmintrin.h>
#include <commctrl.h>
#pragma comment (lib, "comctl32")
#include <hidclass.h>
#include <hidsdi.h>
#include <SetupAPI.h>
#include <winhttp.h>
#include <cfgmgr32.h>
#include <comdef.h>
#include <RegStr.h>
#include <newdev.h>
#include <devguid.h>
#include <sddl.h>

#define DIRECTINPUT_VERSION 0x0800 
#include <dinput.h>

#define _USE_MATH_DEFINES
#include <cmath>
#include <chrono>
#include <thread>
