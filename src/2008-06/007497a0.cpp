// roc 2008-06 007497a0  unit: CXTPReportPaintManager  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007497a0
//
// 007497a0  8b81cc000000         mov eax, dword ptr [ecx + 0xcc]
// 007497a6  83f8ff               cmp eax, -1
// 007497a9  7506                 jne 0x7497b1
// 007497ab  8b81c8000000         mov eax, dword ptr [ecx + 0xc8]
// 007497b1  8b4c2404             mov ecx, dword ptr [esp + 4]
// 007497b5  50                   push eax
// 007497b6  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007497ba  50                   push eax
// 007497bb  e89e7bf5ff           call 0x6a135e
// 007497c0  c20800               ret 8
// library xtp-11.2.2/Source\ReportControl\XTPReportPaintManager.cpp (function ?FillGroupByControl@CXTPReportPaintManager@@UAEXPAVCDC@@AAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportPaintManager.cpp
