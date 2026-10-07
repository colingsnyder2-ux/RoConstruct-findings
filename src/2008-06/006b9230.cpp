// roc 2008-06 006b9230  unit: CXTPCommandBar  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006b9230
//
// 006b9230  e8fbed0200           call 0x6e8030
// 006b9235  8bc8                 mov ecx, eax
// 006b9237  e854ee0200           call 0x6e8090
// 006b923c  0fb6c0               movzx eax, al
// 006b923f  c3                   ret 
// library xtp-11.2.2/Source\Calendar\XTPCalendarUtils.cpp (function ?IsWin9x@CXTPCalendarUtils@@SAHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Calendar/XTPCalendarUtils.cpp
