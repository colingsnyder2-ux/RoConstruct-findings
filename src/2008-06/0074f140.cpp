// roc 2008-06 0074f140  unit: PAVCXTPReportHyperlink::?$CXTPArrayT  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0074f140
//
// 0074f140  8b442408             mov eax, dword ptr [esp + 8]
// 0074f144  85c0                 test eax, eax
// 0074f146  740f                 je 0x74f157
// 0074f148  83c020               add eax, 0x20
// 0074f14b  89442408             mov dword ptr [esp + 8], eax
// 0074f14f  83c120               add ecx, 0x20
// 0074f152  e979feffff           jmp 0x74efd0
// 0074f157  c20800               ret 8
// library xtp-11.2.2/Source\Calendar\XTPCalendarEventLabel.cpp (function ?InsertAt@?$CXTPArrayT@IIJ@@UAEXHPAV1@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Calendar/XTPCalendarEventLabel.cpp
