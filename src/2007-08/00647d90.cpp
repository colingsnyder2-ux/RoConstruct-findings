// roc 2007-08 00647d90  unit: CXTPCommandBar  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00647d90
//
// 00647d90  e8ab930200           call 0x671140
// 00647d95  8bc8                 mov ecx, eax
// 00647d97  e804940200           call 0x6711a0
// 00647d9c  0fb6c0               movzx eax, al
// 00647d9f  c3                   ret 
// library xtp-11.2.2-vc8/Source\Calendar\XTPCalendarUtils.cpp (function ?IsWin9x@CXTPCalendarUtils@@SAHXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Calendar/XTPCalendarUtils.cpp
