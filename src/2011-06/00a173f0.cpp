// roc 2011-06 00a173f0  unit: seg_00a10000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a173f0
//
// 00a173f0  6a00                 push 0
// 00a173f2  6a00                 push 0
// 00a173f4  6a00                 push 0
// 00a173f6  6a01                 push 1
// 00a173f8  6a01                 push 1
// 00a173fa  6a64                 push 0x64
// 00a173fc  b96851cb00           mov ecx, 0xcb5168
// 00a17401  e84acaa7ff           call 0x493e50
// 00a17406  c3                   ret 
// library xtp-15.2.1/Source\Calendar\XTPCalendarCaptionBarControl.cpp (function ??__ExtpCalendarDateTime_min@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarCaptionBarControl.cpp
