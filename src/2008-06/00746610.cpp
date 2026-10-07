// roc 2008-06 00746610  unit: CXTPReportPaintManager  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00746610
//
// 00746610  8b8108010000         mov eax, dword ptr [ecx + 0x108]
// 00746616  83f8ff               cmp eax, -1
// 00746619  7506                 jne 0x746621
// 0074661b  8b8104010000         mov eax, dword ptr [ecx + 0x104]
// 00746621  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00746625  50                   push eax
// 00746626  8d44240c             lea eax, [esp + 0xc]
// 0074662a  50                   push eax
// 0074662b  e82eadf5ff           call 0x6a135e
// 00746630  c21400               ret 0x14
// library xtp-11.2.2/Source\ReportControl\XTPReportPaintManager.cpp (function ?FillIndent@CXTPReportPaintManager@@UAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportPaintManager.cpp
