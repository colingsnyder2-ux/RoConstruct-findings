// roc 2011-06 008b8630  unit: CXTPReportHyperlinks  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008b8630
//
// 008b8630  56                   push esi
// 008b8631  8bf1                 mov esi, ecx
// 008b8633  e8923f1100           call 0x9cc5ca
// 008b8638  8d4e20               lea ecx, [esi + 0x20]
// 008b863b  c7062c4ead00         mov dword ptr [esi], 0xad4e2c
// 008b8641  e84afeffff           call 0x8b8490
// 008b8646  8bc6                 mov eax, esi
// 008b8648  5e                   pop esi
// 008b8649  c3                   ret 
// library xtp-15.2.1/Source\Calendar\XTPCalendarCaptionBarControl.cpp (function ??0?$CXTPCalendarPtrCollectionT@VCXTPCalendarCaptionBarThemePart@@@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarCaptionBarControl.cpp
