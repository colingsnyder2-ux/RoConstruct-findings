// from server: 100% by auto
// roc 2012-06 00aeb770  unit: seg_00ae0000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00aeb770
//
// 00aeb770  6a00                 push 0
// 00aeb772  6a00                 push 0
// 00aeb774  6a00                 push 0
// 00aeb776  6a01                 push 1
// 00aeb778  6a01                 push 1
// 00aeb77a  6a64                 push 0x64
// 00aeb77c  b9a0ade100           mov ecx, 0xe1ada0
// 00aeb781  e82aba9bff           call 0x4a71b0
// 00aeb786  c3                   ret 
// library xtp-15.2.1/Source\Calendar\XTPCalendarCaptionBarControl.cpp (function ??__ExtpCalendarDateTime_min@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarCaptionBarControl.cpp
