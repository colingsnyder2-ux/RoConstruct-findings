// roc 2009-06 00746120  unit: CXTPReportControl  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00746120
//
// 00746120  56                   push esi
// 00746121  8b7120               mov esi, dword ptr [ecx + 0x20]
// 00746124  e8df2efdff           call 0x719008
// 00746129  56                   push esi
// 0074612a  ff15e0ed8900         call dword ptr [0x89ede0]
// 00746130  5e                   pop esi
// 00746131  c20c00               ret 0xc
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?OnRButtonUp@CXTPReportControl@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
