// from server: 100% by auto
// roc 2011-06 00a17330  unit: seg_00a10000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a17330
//
// 00a17330  6a00                 push 0
// 00a17332  6a00                 push 0
// 00a17334  6a00                 push 0
// 00a17336  6a1f                 push 0x1f
// 00a17338  6a0c                 push 0xc
// 00a1733a  680f270000           push 0x270f
// 00a1733f  b9bc41cb00           mov ecx, 0xcb41bc
// 00a17344  e807cba7ff           call 0x493e50
// 00a17349  c3                   ret 
// library xtp-15.2.1/Source\Calendar\XTPCalendarCaptionBarControl.cpp (function ??__ExtpCalendarDateTime_max@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarCaptionBarControl.cpp
