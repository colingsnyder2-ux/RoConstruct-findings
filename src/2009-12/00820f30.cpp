// roc 2009-12 00820f30  unit: CXTPReportControl  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00820f30
//
// 00820f30  56                   push esi
// 00820f31  8b7120               mov esi, dword ptr [ecx + 0x20]
// 00820f34  e8f72efdff           call 0x7f3e30
// 00820f39  56                   push esi
// 00820f3a  ff1584cc9800         call dword ptr [0x98cc84]
// 00820f40  5e                   pop esi
// 00820f41  c20c00               ret 0xc
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?OnRButtonUp@CXTPReportControl@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
