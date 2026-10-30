// roc 2010-06 00454570  unit: CRobloxControlColorSelector  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00454570
//
// 00454570  8b442404             mov eax, dword ptr [esp + 4]
// 00454574  8b542408             mov edx, dword ptr [esp + 8]
// 00454578  8981c0000000         mov dword ptr [ecx + 0xc0], eax
// 0045457e  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00454582  8991c4000000         mov dword ptr [ecx + 0xc4], edx
// 00454588  8b542410             mov edx, dword ptr [esp + 0x10]
// 0045458c  8981c8000000         mov dword ptr [ecx + 0xc8], eax
// 00454592  8991cc000000         mov dword ptr [ecx + 0xcc], edx
// 00454598  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPControl.cpp (function ?SetRect@CXTPControl@@UAEXVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControl.cpp
