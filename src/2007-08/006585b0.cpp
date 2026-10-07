// roc 2007-08 006585b0  unit: CXTPReportControl  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006585b0
//
// 006585b0  56                   push esi
// 006585b1  8b7120               mov esi, dword ptr [ecx + 0x20]
// 006585b4  e8857cfdff           call 0x63023e
// 006585b9  56                   push esi
// 006585ba  ff15bced7700         call dword ptr [0x77edbc]
// 006585c0  5e                   pop esi
// 006585c1  c20c00               ret 0xc
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportControl.cpp (function ?OnRButtonUp@CXTPReportControl@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportControl.cpp
