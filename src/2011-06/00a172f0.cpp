// roc 2011-06 00a172f0  unit: seg_00a10000  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a172f0
//
// 00a172f0  a1e095c100           mov eax, dword ptr [0xc195e0]
// 00a172f5  50                   push eax
// 00a172f6  ff15c01ba400         call dword ptr [0xa41bc0]
// 00a172fc  a3cc41cb00           mov dword ptr [0xcb41cc], eax
// 00a17301  c3                   ret 
// library xtp-15.2.1/Source\Calendar\XTPCalendarCaptionBarControl.cpp (function ??__Extp_wm_NotificationSinkMTOnEvent@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarCaptionBarControl.cpp
