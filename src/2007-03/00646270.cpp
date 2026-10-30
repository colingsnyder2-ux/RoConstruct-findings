// roc 2007-03 00646270  unit: seg_00640000  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00646270
//
// 00646270  56                   push esi
// 00646271  8b7120               mov esi, dword ptr [ecx + 0x20]
// 00646274  e85984fdff           call 0x61e6d2
// 00646279  56                   push esi
// 0064627a  ff1574ed7700         call dword ptr [0x77ed74]
// 00646280  5e                   pop esi
// 00646281  c20c00               ret 0xc
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?OnRButtonUp@CXTPReportControl@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
