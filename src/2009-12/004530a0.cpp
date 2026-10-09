// roc 2009-12 004530a0  unit: CRobloxControlColorSelector  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004530a0
//
// 004530a0  8b442404             mov eax, dword ptr [esp + 4]
// 004530a4  8b542408             mov edx, dword ptr [esp + 8]
// 004530a8  8981c0000000         mov dword ptr [ecx + 0xc0], eax
// 004530ae  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004530b2  8991c4000000         mov dword ptr [ecx + 0xc4], edx
// 004530b8  8b542410             mov edx, dword ptr [esp + 0x10]
// 004530bc  8981c8000000         mov dword ptr [ecx + 0xc8], eax
// 004530c2  8991cc000000         mov dword ptr [ecx + 0xcc], edx
// 004530c8  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPControl.cpp (function ?SetRect@CXTPControl@@UAEXVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControl.cpp
