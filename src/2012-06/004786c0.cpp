// roc 2012-06 004786c0  unit: CRobloxControlColorSelector  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004786c0
//
// 004786c0  8b442404             mov eax, dword ptr [esp + 4]
// 004786c4  8b542408             mov edx, dword ptr [esp + 8]
// 004786c8  8981c0000000         mov dword ptr [ecx + 0xc0], eax
// 004786ce  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004786d2  8991c4000000         mov dword ptr [ecx + 0xc4], edx
// 004786d8  8b542410             mov edx, dword ptr [esp + 0x10]
// 004786dc  8981c8000000         mov dword ptr [ecx + 0xc8], eax
// 004786e2  8991cc000000         mov dword ptr [ecx + 0xcc], edx
// 004786e8  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPControl.cpp (function ?SetRect@CXTPControl@@UAEXVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControl.cpp
