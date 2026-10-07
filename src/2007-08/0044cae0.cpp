// roc 2007-08 0044cae0  unit: CRobloxControlColorSelector  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0044cae0
//
// 0044cae0  8b442404             mov eax, dword ptr [esp + 4]
// 0044cae4  8b542408             mov edx, dword ptr [esp + 8]
// 0044cae8  8981c0000000         mov dword ptr [ecx + 0xc0], eax
// 0044caee  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0044caf2  8991c4000000         mov dword ptr [ecx + 0xc4], edx
// 0044caf8  8b542410             mov edx, dword ptr [esp + 0x10]
// 0044cafc  8981c8000000         mov dword ptr [ecx + 0xc8], eax
// 0044cb02  8991cc000000         mov dword ptr [ecx + 0xcc], edx
// 0044cb08  c21000               ret 0x10
// library xtp-11.2.2-vc8/Source\CommandBars\XTPControl.cpp (function ?SetRect@CXTPControl@@UAEXVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPControl.cpp
