// from server: 100% by auto
// roc 2011-06 008b8690  unit: PAVCXTPReportHyperlink::?$CXTPArrayT  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008b8690
//
// 008b8690  8b442408             mov eax, dword ptr [esp + 8]
// 008b8694  85c0                 test eax, eax
// 008b8696  740f                 je 0x8b86a7
// 008b8698  83c020               add eax, 0x20
// 008b869b  89442408             mov dword ptr [esp + 8], eax
// 008b869f  83c120               add ecx, 0x20
// 008b86a2  e979feffff           jmp 0x8b8520
// 008b86a7  c20800               ret 8
// library xtp-15.2.1/Source\Calendar\XTPCalendarEventLabel.cpp (function ?InsertAt@?$CXTPArrayT@IIJ@@UAEXHPAV1@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarEventLabel.cpp
