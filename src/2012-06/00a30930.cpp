// from server: 100% by auto
// roc 2012-06 00a30930  unit: PAVCXTPReportHyperlink::?$CXTPArrayT  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a30930
//
// 00a30930  6aff                 push -1
// 00a30932  6a00                 push 0
// 00a30934  83c120               add ecx, 0x20
// 00a30937  e82479f6ff           call 0x998260
// 00a3093c  c3                   ret 
// library xtp-15.2.1/Source\Calendar\XTPCalendarCaptionBarControl.cpp (function ?RemoveAll@?$CXTPCalendarPtrCollectionT@VCXTPCalendarCaptionBarThemePart@@@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarCaptionBarControl.cpp
