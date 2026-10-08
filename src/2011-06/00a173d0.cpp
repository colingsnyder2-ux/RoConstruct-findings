// from server: 100% by auto
// roc 2011-06 00a173d0  unit: seg_00a10000  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a173d0
//
// 00a173d0  a1bc99c100           mov eax, dword ptr [0xc199bc]
// 00a173d5  50                   push eax
// 00a173d6  ff15c01ba400         call dword ptr [0xa41bc0]
// 00a173dc  a39c51cb00           mov dword ptr [0xcb519c], eax
// 00a173e1  c3                   ret 
// library xtp-15.2.1/Source\Calendar\XTPCalendarCaptionBarControl.cpp (function ??__Extp_wm_NotificationSinkMTOnEvent@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarCaptionBarControl.cpp
