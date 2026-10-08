// from server: 100% by auto
// roc 2007-08 006d2c90  unit: PAVCXTPReportHyperlink::?$CXTPArrayT  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d2c90
//
// 006d2c90  8b442408             mov eax, dword ptr [esp + 8]
// 006d2c94  85c0                 test eax, eax
// 006d2c96  740f                 je 0x6d2ca7
// 006d2c98  83c020               add eax, 0x20
// 006d2c9b  89442408             mov dword ptr [esp + 8], eax
// 006d2c9f  83c120               add ecx, 0x20
// 006d2ca2  e969feffff           jmp 0x6d2b10
// 006d2ca7  c20800               ret 8
// library xtp-11.2.2-vc8/Source\Calendar\XTPCalendarEventLabel.cpp (function ?InsertAt@?$CXTPArrayT@IIJ@@UAEXHPAV1@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Calendar/XTPCalendarEventLabel.cpp
