// from server: 100% by auto
// roc 2007-08 006d3ba0  unit: CXTPReportColumns  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d3ba0
//
// 006d3ba0  6aff                 push -1
// 006d3ba2  6a00                 push 0
// 006d3ba4  83c124               add ecx, 0x24
// 006d3ba7  e804bf0200           call 0x6ffab0
// 006d3bac  c3                   ret 
// library xtp-11.2.2-vc8/Source\Calendar\XTPDatePickerDaysCollection.cpp (function ?Clear@CXTPDatePickerDaysCollection@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Calendar/XTPDatePickerDaysCollection.cpp
