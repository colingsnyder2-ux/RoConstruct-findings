// roc 2007-03 00643950  unit: seg_00640000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00643950
//
// 00643950  83415c01             add dword ptr [ecx + 0x5c], 1
// 00643954  c7415800000000       mov dword ptr [ecx + 0x58], 0
// 0064395b  c3                   ret 
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportControl.cpp (function ?BeginUpdate@CXTPReportControl@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportControl.cpp
