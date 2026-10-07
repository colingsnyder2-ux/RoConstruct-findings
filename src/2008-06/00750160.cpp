// roc 2008-06 00750160  unit: CXTPReportColumns  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00750160
//
// 00750160  6aff                 push -1
// 00750162  6a00                 push 0
// 00750164  83c124               add ecx, 0x24
// 00750167  e864e0fbff           call 0x70e1d0
// 0075016c  c3                   ret 
// library xtp-11.2.2/Source\Calendar\XTPDatePickerDaysCollection.cpp (function ?Clear@CXTPDatePickerDaysCollection@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Calendar/XTPDatePickerDaysCollection.cpp
