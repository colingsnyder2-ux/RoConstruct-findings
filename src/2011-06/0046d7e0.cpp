// roc 2011-06 0046d7e0  unit: CRobloxControlColorSelector  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0046d7e0
//
// 0046d7e0  8b442404             mov eax, dword ptr [esp + 4]
// 0046d7e4  8b542408             mov edx, dword ptr [esp + 8]
// 0046d7e8  8981c0000000         mov dword ptr [ecx + 0xc0], eax
// 0046d7ee  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0046d7f2  8991c4000000         mov dword ptr [ecx + 0xc4], edx
// 0046d7f8  8b542410             mov edx, dword ptr [esp + 0x10]
// 0046d7fc  8981c8000000         mov dword ptr [ecx + 0xc8], eax
// 0046d802  8991cc000000         mov dword ptr [ecx + 0xcc], edx
// 0046d808  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPControl.cpp (function ?SetRect@CXTPControl@@UAEXVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControl.cpp
