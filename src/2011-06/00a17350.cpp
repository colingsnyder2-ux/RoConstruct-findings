// roc 2011-06 00a17350  unit: seg_00a10000  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a17350
//
// 00a17350  684c58a700           push 0xa7584c
// 00a17355  ff15c01ba400         call dword ptr [0xa41bc0]
// 00a1735b  a3d041cb00           mov dword ptr [0xcb41d0], eax
// 00a17360  c3                   ret 
// library xtp-15.2.1/Source\Calendar\XTPCalendarCaptionBarControl.cpp (function ??__Extp_wm_SwitchView@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarCaptionBarControl.cpp
