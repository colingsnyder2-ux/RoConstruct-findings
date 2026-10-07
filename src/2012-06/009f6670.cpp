// roc 2012-06 009f6670  unit: CXTPReportColumns  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f6670
//
// 009f6670  6aff                 push -1
// 009f6672  6a00                 push 0
// 009f6674  83c124               add ecx, 0x24
// 009f6677  e8e41bfaff           call 0x998260
// 009f667c  c3                   ret 
// library xtp-15.2.1/Source\Calendar\XTPDatePickerDaysCollection.cpp (function ?Clear@CXTPDatePickerDaysCollection@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPDatePickerDaysCollection.cpp
