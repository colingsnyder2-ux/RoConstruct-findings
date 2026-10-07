// roc 2012-06 009b7da0  unit: PAVCXTPReportInplaceButton::?$CArray  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009b7da0
//
// 009b7da0  56                   push esi
// 009b7da1  8bf1                 mov esi, ecx
// 009b7da3  e8dc170e00           call 0xa99584
// 009b7da8  8d4e20               lea ecx, [esi + 0x20]
// 009b7dab  c706240ec100         mov dword ptr [esi], 0xc10e24
// 009b7db1  e8fafeffff           call 0x9b7cb0
// 009b7db6  8bc6                 mov eax, esi
// 009b7db8  5e                   pop esi
// 009b7db9  c3                   ret 
// library xtp-15.2.1/Source\Calendar\XTPCalendarCaptionBarControl.cpp (function ??0?$CXTPCalendarPtrCollectionT@VCXTPCalendarCaptionBarThemePart@@@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarCaptionBarControl.cpp
