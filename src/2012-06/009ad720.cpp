// roc 2012-06 009ad720  unit: CXTPReportControl  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009ad720
//
// 009ad720  56                   push esi
// 009ad721  8b7120               mov esi, dword ptr [ecx + 0x20]
// 009ad724  e8b54ffdff           call 0x9826de
// 009ad729  56                   push esi
// 009ad72a  ff15143bb200         call dword ptr [0xb23b14]
// 009ad730  5e                   pop esi
// 009ad731  c20c00               ret 0xc
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?OnRButtonUp@CXTPReportControl@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
