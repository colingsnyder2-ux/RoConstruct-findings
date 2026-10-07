// roc 2011-06 0081eef0  unit: CXTPCommandBar  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0081eef0
//
// 0081eef0  e8cb210300           call 0x8510c0
// 0081eef5  8bc8                 mov ecx, eax
// 0081eef7  e824220300           call 0x851120
// 0081eefc  0fb6c0               movzx eax, al
// 0081eeff  c3                   ret 
// library xtp-15.2.1/Source\Calendar\XTPCalendarUtils.cpp (function ?IsWin9x@CXTPCalendarUtils@@SAHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarUtils.cpp
