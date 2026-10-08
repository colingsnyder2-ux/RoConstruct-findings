// roc 2011-06 00835120  unit: CXTPReportControl  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00835120
//
// 00835120  56                   push esi
// 00835121  8b7120               mov esi, dword ptr [ecx + 0x20]
// 00835124  e80555fdff           call 0x80a62e
// 00835129  56                   push esi
// 0083512a  ff15ec1ba400         call dword ptr [0xa41bec]
// 00835130  5e                   pop esi
// 00835131  c20c00               ret 0xc
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?OnRButtonUp@CXTPReportControl@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
