// roc 2012-06 00996ef0  unit: CXTPCommandBar  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00996ef0
//
// 00996ef0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00996ef4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00996ef8  8b542404             mov edx, dword ptr [esp + 4]
// 00996efc  50                   push eax
// 00996efd  51                   push ecx
// 00996efe  50                   push eax
// 00996eff  52                   push edx
// 00996f00  ff15fc29b200         call dword ptr [0xb229fc]
// 00996f06  83c410               add esp, 0x10
// 00996f09  c3                   ret 
// library xtp-15.2.1-shared-mfc/Source\Calendar\XTPCalendarMAPIDataProvider.cpp (function ?MEMCPY_S@@YAXPAXPBXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/Calendar/XTPCalendarMAPIDataProvider.cpp
