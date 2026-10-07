// roc 2011-06 00a17430  unit: seg_00a10000  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a17430
//
// 00a17430  684c58a700           push 0xa7584c
// 00a17435  ff15c01ba400         call dword ptr [0xa41bc0]
// 00a1743b  a3a851cb00           mov dword ptr [0xcb51a8], eax
// 00a17440  c3                   ret 
// library xtp-15.2.1/Source\Calendar\XTPCalendarCaptionBarControl.cpp (function ??__Extp_wm_SwitchView@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarCaptionBarControl.cpp
