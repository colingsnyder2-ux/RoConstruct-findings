// from server: 100% by auto
// roc 2011-06 0087e0c0  unit: CXTPReportColumns  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0087e0c0
//
// 0087e0c0  6aff                 push -1
// 0087e0c2  6a00                 push 0
// 0087e0c4  83c124               add ecx, 0x24
// 0087e0c7  e8740afcff           call 0x83eb40
// 0087e0cc  c3                   ret 
// library xtp-15.2.1/Source\Calendar\XTPDatePickerDaysCollection.cpp (function ?Clear@CXTPDatePickerDaysCollection@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPDatePickerDaysCollection.cpp
