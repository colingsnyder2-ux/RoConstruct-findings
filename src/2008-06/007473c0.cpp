// from server: 100% by auto
// roc 2008-06 007473c0  unit: CXTPReportPaintManager  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007473c0
//
// 007473c0  8b4178               mov eax, dword ptr [ecx + 0x78]
// 007473c3  83f8ff               cmp eax, -1
// 007473c6  7503                 jne 0x7473cb
// 007473c8  8b4174               mov eax, dword ptr [ecx + 0x74]
// 007473cb  8b4c2404             mov ecx, dword ptr [esp + 4]
// 007473cf  50                   push eax
// 007473d0  8d44240c             lea eax, [esp + 0xc]
// 007473d4  50                   push eax
// 007473d5  e8849ff5ff           call 0x6a135e
// 007473da  c21400               ret 0x14
// library xtp-11.2.2/Source\ReportControl\XTPReportPaintManager.cpp (function ?FillHeaderControl@CXTPReportPaintManager@@UAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportPaintManager.cpp
