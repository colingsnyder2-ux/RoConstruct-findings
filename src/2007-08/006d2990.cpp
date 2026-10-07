// roc 2007-08 006d2990  unit: PAVCXTPReportHyperlink::?$CXTPArrayT  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d2990
//
// 006d2990  6aff                 push -1
// 006d2992  6a00                 push 0
// 006d2994  83c120               add ecx, 0x20
// 006d2997  e814d10200           call 0x6ffab0
// 006d299c  c3                   ret 
// library xtp-11.2.2-vc8/Source\Calendar\XTPCalendarDayView.cpp (function ?RemoveAll@?$CXTPCalendarPtrCollectionT@VCXTPCalendarDayViewDay@@@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Calendar/XTPCalendarDayView.cpp
