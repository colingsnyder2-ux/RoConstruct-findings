// from server: 100% by auto
// roc 2012-06 009971f0  unit: CXTPCommandBar  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009971f0
//
// 009971f0  e89b230300           call 0x9c9590
// 009971f5  8bc8                 mov ecx, eax
// 009971f7  e8f4230300           call 0x9c95f0
// 009971fc  0fb6c0               movzx eax, al
// 009971ff  c3                   ret 
// library xtp-15.2.1/Source\Calendar\XTPCalendarUtils.cpp (function ?IsWin9x@CXTPCalendarUtils@@SAHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarUtils.cpp
