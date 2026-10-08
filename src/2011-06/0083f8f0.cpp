// from server: 100% by auto
// roc 2011-06 0083f8f0  unit: PAVCXTPReportInplaceButton::?$CArray  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0083f8f0
//
// 0083f8f0  56                   push esi
// 0083f8f1  8bf1                 mov esi, ecx
// 0083f8f3  e8d2cc1800           call 0x9cc5ca
// 0083f8f8  8d4e20               lea ecx, [esi + 0x20]
// 0083f8fb  c7063c57ac00         mov dword ptr [esi], 0xac573c
// 0083f901  e8fafeffff           call 0x83f800
// 0083f906  8bc6                 mov eax, esi
// 0083f908  5e                   pop esi
// 0083f909  c3                   ret 
// library xtp-15.2.1/Source\Calendar\XTPCalendarCaptionBarControl.cpp (function ??0?$CXTPCalendarPtrCollectionT@VCXTPCalendarCaptionBarThemePart@@@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarCaptionBarControl.cpp
