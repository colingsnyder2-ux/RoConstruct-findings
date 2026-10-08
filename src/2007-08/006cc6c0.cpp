// from server: 100% by auto
// roc 2007-08 006cc6c0  unit: CXTPReportPaintManager  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006cc6c0
//
// 006cc6c0  8b4178               mov eax, dword ptr [ecx + 0x78]
// 006cc6c3  83f8ff               cmp eax, -1
// 006cc6c6  7503                 jne 0x6cc6cb
// 006cc6c8  8b4174               mov eax, dword ptr [ecx + 0x74]
// 006cc6cb  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006cc6cf  50                   push eax
// 006cc6d0  8d44240c             lea eax, [esp + 0xc]
// 006cc6d4  50                   push eax
// 006cc6d5  e8d641f6ff           call 0x6308b0
// 006cc6da  c21400               ret 0x14
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportPaintManager.cpp (function ?FillHeaderControl@CXTPReportPaintManager@@UAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportPaintManager.cpp
