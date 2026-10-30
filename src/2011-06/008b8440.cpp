// from server: 100% by auto
// roc 2011-06 008b8440  unit: PAVCXTPReportHyperlink::?$CXTPArrayT  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008b8440
//
// 008b8440  6aff                 push -1
// 008b8442  6a00                 push 0
// 008b8444  83c120               add ecx, 0x20
// 008b8447  e8f466f8ff           call 0x83eb40
// 008b844c  c3                   ret 
// library xtp-15.2.1/Source\Calendar\XTPCalendarCaptionBarControl.cpp (function ?RemoveAll@?$CXTPCalendarPtrCollectionT@VCXTPCalendarCaptionBarThemePart@@@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarCaptionBarControl.cpp
