// roc 2012-06 00a26fe0  unit: CXTPReportPaintManager  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a26fe0
//
// 00a26fe0  8b81cc000000         mov eax, dword ptr [ecx + 0xcc]
// 00a26fe6  83f8ff               cmp eax, -1
// 00a26fe9  7506                 jne 0xa26ff1
// 00a26feb  8b81c8000000         mov eax, dword ptr [ecx + 0xc8]
// 00a26ff1  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00a26ff5  50                   push eax
// 00a26ff6  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00a26ffa  50                   push eax
// 00a26ffb  e8acbef5ff           call 0x982eac
// 00a27000  c20800               ret 8
// library xtp-13.2.1/Source\ReportControl\XTPReportPaintManager.cpp (function ?FillGroupByControl@CXTPReportPaintManager@@UAEXPAVCDC@@AAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-13.2.1 Source/ReportControl/XTPReportPaintManager.cpp
