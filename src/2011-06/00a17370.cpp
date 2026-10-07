// roc 2011-06 00a17370  unit: seg_00a10000  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a17370
//
// 00a17370  683458a700           push 0xa75834
// 00a17375  ff15c01ba400         call dword ptr [0xa41bc0]
// 00a1737b  a3c841cb00           mov dword ptr [0xcb41c8], eax
// 00a17380  c3                   ret 
// library xtp-15.2.1/Source\Calendar\XTPCalendarCaptionBarControl.cpp (function ??__Extp_wm_UserAction@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarCaptionBarControl.cpp
