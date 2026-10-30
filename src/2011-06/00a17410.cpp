// from server: 100% by auto
// roc 2011-06 00a17410  unit: seg_00a10000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a17410
//
// 00a17410  6a00                 push 0
// 00a17412  6a00                 push 0
// 00a17414  6a00                 push 0
// 00a17416  6a1f                 push 0x1f
// 00a17418  6a0c                 push 0xc
// 00a1741a  680f270000           push 0x270f
// 00a1741f  b98051cb00           mov ecx, 0xcb5180
// 00a17424  e827caa7ff           call 0x493e50
// 00a17429  c3                   ret 
// library xtp-15.2.1/Source\Calendar\XTPCalendarCaptionBarControl.cpp (function ??__ExtpCalendarDateTime_max@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarCaptionBarControl.cpp
