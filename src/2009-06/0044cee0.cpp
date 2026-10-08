// roc 2009-06 0044cee0  unit: CRobloxControlColorSelector  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0044cee0
//
// 0044cee0  8b442404             mov eax, dword ptr [esp + 4]
// 0044cee4  8b542408             mov edx, dword ptr [esp + 8]
// 0044cee8  8981c0000000         mov dword ptr [ecx + 0xc0], eax
// 0044ceee  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0044cef2  8991c4000000         mov dword ptr [ecx + 0xc4], edx
// 0044cef8  8b542410             mov edx, dword ptr [esp + 0x10]
// 0044cefc  8981c8000000         mov dword ptr [ecx + 0xc8], eax
// 0044cf02  8991cc000000         mov dword ptr [ecx + 0xcc], edx
// 0044cf08  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPControl.cpp (function ?SetRect@CXTPControl@@UAEXVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControl.cpp
