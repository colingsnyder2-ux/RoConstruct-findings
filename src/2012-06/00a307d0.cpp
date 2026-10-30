// roc 2012-06 00a307d0  unit: PAVCXTPReportHyperlink::?$CXTPArrayT  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a307d0
//
// 00a307d0  8b01                 mov eax, dword ptr [ecx]
// 00a307d2  8b4078               mov eax, dword ptr [eax + 0x78]
// 00a307d5  ffe0                 jmp eax
// library xtp-15.2.1-shared-mfc/Source\Calendar\XTPCalendarEventLabel.cpp (function ?OleAdd@?$CXTPArrayT@IIJ@@MAEXJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/Calendar/XTPCalendarEventLabel.cpp
