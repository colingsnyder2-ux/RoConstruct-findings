// from server: 100% by auto
// roc 2007-08 0076d520  unit: seg_00760000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076d520
//
// 0076d520  6a00                 push 0
// 0076d522  6a00                 push 0
// 0076d524  6a00                 push 0
// 0076d526  6a1f                 push 0x1f
// 0076d528  6a0c                 push 0xc
// 0076d52a  680f270000           push 0x270f
// 0076d52f  b9b0c08b00           mov ecx, 0x8bc0b0
// 0076d534  e8f75dcfff           call 0x463330
// 0076d539  c3                   ret 
// library xtp-11.2.2-vc8/Source\Calendar\XTPCalendarControl.cpp (function ??__ExtpCalendarDateTime_max@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Calendar/XTPCalendarControl.cpp
