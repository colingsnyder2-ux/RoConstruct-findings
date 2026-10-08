// roc 2010-06 007d4f90  unit: CXTPReportControl  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007d4f90
//
// 007d4f90  56                   push esi
// 007d4f91  8b7120               mov esi, dword ptr [ecx + 0x20]
// 007d4f94  e8d72ffdff           call 0x7a7f70
// 007d4f99  56                   push esi
// 007d4f9a  ff1528bc9e00         call dword ptr [0x9ebc28]
// 007d4fa0  5e                   pop esi
// 007d4fa1  c20c00               ret 0xc
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?OnRButtonUp@CXTPReportControl@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
