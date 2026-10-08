// from server: 100% by auto
// roc 2007-08 00655b20  unit: CXTPReportControl  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00655b20
//
// 00655b20  83415c01             add dword ptr [ecx + 0x5c], 1
// 00655b24  c7415800000000       mov dword ptr [ecx + 0x58], 0
// 00655b2b  c3                   ret 
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportControl.cpp (function ?BeginUpdate@CXTPReportControl@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportControl.cpp
