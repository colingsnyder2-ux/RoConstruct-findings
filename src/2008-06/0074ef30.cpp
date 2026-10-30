// from server: 100% by auto
// roc 2008-06 0074ef30  unit: PAVCXTPReportHyperlink::?$CXTPArrayT  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0074ef30
//
// 0074ef30  6aff                 push -1
// 0074ef32  6a00                 push 0
// 0074ef34  83c120               add ecx, 0x20
// 0074ef37  e894f2fbff           call 0x70e1d0
// 0074ef3c  c3                   ret 
// library xtp-11.2.2/Source\Calendar\XTPCalendarDayView.cpp (function ?RemoveAll@?$CXTPCalendarPtrCollectionT@VCXTPCalendarDayViewDay@@@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Calendar/XTPCalendarDayView.cpp
