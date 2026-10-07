// roc 2012-06 00a30b20  unit: CXTPReportHyperlinks  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a30b20
//
// 00a30b20  56                   push esi
// 00a30b21  8bf1                 mov esi, ecx
// 00a30b23  e85c8a0600           call 0xa99584
// 00a30b28  8d4e20               lea ecx, [esi + 0x20]
// 00a30b2b  c706bc04c200         mov dword ptr [esi], 0xc204bc
// 00a30b31  e84afeffff           call 0xa30980
// 00a30b36  8bc6                 mov eax, esi
// 00a30b38  5e                   pop esi
// 00a30b39  c3                   ret 
// library xtp-15.2.1/Source\Calendar\XTPCalendarCaptionBarControl.cpp (function ??0?$CXTPCalendarPtrCollectionT@VCXTPCalendarCaptionBarThemePart@@@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarCaptionBarControl.cpp
