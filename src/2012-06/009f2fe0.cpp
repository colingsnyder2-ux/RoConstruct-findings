// from server: 100% by auto
// roc 2012-06 009f2fe0  unit: CXTPPropertyGridItem  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f2fe0
//
// 009f2fe0  56                   push esi
// 009f2fe1  8bf1                 mov esi, ecx
// 009f2fe3  e89c650a00           call 0xa99584
// 009f2fe8  8d4e20               lea ecx, [esi + 0x20]
// 009f2feb  c7064c94c100         mov dword ptr [esi], 0xc1944c
// 009f2ff1  e83afbffff           call 0x9f2b30
// 009f2ff6  8bc6                 mov eax, esi
// 009f2ff8  5e                   pop esi
// 009f2ff9  c3                   ret 
// library xtp-15.2.1/Source\Calendar\XTPCalendarCaptionBarControl.cpp (function ??0?$CXTPCalendarPtrCollectionT@VCXTPCalendarCaptionBarThemePart@@@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarCaptionBarControl.cpp
