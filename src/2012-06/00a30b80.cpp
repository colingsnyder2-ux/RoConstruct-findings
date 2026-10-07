// roc 2012-06 00a30b80  unit: PAVCXTPReportHyperlink::?$CXTPArrayT  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a30b80
//
// 00a30b80  8b442408             mov eax, dword ptr [esp + 8]
// 00a30b84  85c0                 test eax, eax
// 00a30b86  740f                 je 0xa30b97
// 00a30b88  83c020               add eax, 0x20
// 00a30b8b  89442408             mov dword ptr [esp + 8], eax
// 00a30b8f  83c120               add ecx, 0x20
// 00a30b92  e979feffff           jmp 0xa30a10
// 00a30b97  c20800               ret 8
// library xtp-15.2.1/Source\Calendar\XTPCalendarEventLabel.cpp (function ?InsertAt@?$CXTPArrayT@IIJ@@UAEXHPAV1@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarEventLabel.cpp
