// roc 2007-08 0076d500  unit: seg_00760000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076d500
//
// 0076d500  6a00                 push 0
// 0076d502  6a00                 push 0
// 0076d504  6a00                 push 0
// 0076d506  6a01                 push 1
// 0076d508  6a01                 push 1
// 0076d50a  6a64                 push 0x64
// 0076d50c  b9a4c08b00           mov ecx, 0x8bc0a4
// 0076d511  e81a5ecfff           call 0x463330
// 0076d516  c3                   ret 
// library xtp-11.2.2-vc8/Source\Calendar\XTPCalendarControl.cpp (function ??__ExtpCalendarDateTime_min@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Calendar/XTPCalendarControl.cpp
