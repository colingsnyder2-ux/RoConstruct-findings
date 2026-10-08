// from server: 100% by auto
// roc 2011-06 00a17310  unit: seg_00a10000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a17310
//
// 00a17310  6a00                 push 0
// 00a17312  6a00                 push 0
// 00a17314  6a00                 push 0
// 00a17316  6a01                 push 1
// 00a17318  6a01                 push 1
// 00a1731a  6a64                 push 0x64
// 00a1731c  b9b041cb00           mov ecx, 0xcb41b0
// 00a17321  e82acba7ff           call 0x493e50
// 00a17326  c3                   ret 
// library xtp-15.2.1/Source\Calendar\XTPCalendarCaptionBarControl.cpp (function ??__ExtpCalendarDateTime_min@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarCaptionBarControl.cpp
