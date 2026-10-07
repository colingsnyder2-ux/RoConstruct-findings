// roc 2011-06 0087aa40  unit: CXTPPropertyGridItem  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0087aa40
//
// 0087aa40  56                   push esi
// 0087aa41  8bf1                 mov esi, ecx
// 0087aa43  e8821b1500           call 0x9cc5ca
// 0087aa48  8d4e20               lea ecx, [esi + 0x20]
// 0087aa4b  c7068cddac00         mov dword ptr [esi], 0xacdd8c
// 0087aa51  e83afbffff           call 0x87a590
// 0087aa56  8bc6                 mov eax, esi
// 0087aa58  5e                   pop esi
// 0087aa59  c3                   ret 
// library xtp-15.2.1/Source\Calendar\XTPCalendarCaptionBarControl.cpp (function ??0?$CXTPCalendarPtrCollectionT@VCXTPCalendarCaptionBarThemePart@@@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarCaptionBarControl.cpp
