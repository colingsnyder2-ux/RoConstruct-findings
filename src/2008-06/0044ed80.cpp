// roc 2008-06 0044ed80  unit: CRobloxControlColorSelector  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0044ed80
//
// 0044ed80  8b442404             mov eax, dword ptr [esp + 4]
// 0044ed84  8b542408             mov edx, dword ptr [esp + 8]
// 0044ed88  8981c0000000         mov dword ptr [ecx + 0xc0], eax
// 0044ed8e  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0044ed92  8991c4000000         mov dword ptr [ecx + 0xc4], edx
// 0044ed98  8b542410             mov edx, dword ptr [esp + 0x10]
// 0044ed9c  8981c8000000         mov dword ptr [ecx + 0xc8], eax
// 0044eda2  8991cc000000         mov dword ptr [ecx + 0xcc], edx
// 0044eda8  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPControl.cpp (function ?SetRect@CXTPControl@@UAEXVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControl.cpp
