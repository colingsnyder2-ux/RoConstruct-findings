// roc 2011-06 00a17450  unit: seg_00a10000  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a17450
//
// 00a17450  683458a700           push 0xa75834
// 00a17455  ff15c01ba400         call dword ptr [0xa41bc0]
// 00a1745b  a39451cb00           mov dword ptr [0xcb5194], eax
// 00a17460  c3                   ret 
// library xtp-15.2.1/Source\Calendar\XTPCalendarCaptionBarControl.cpp (function ??__Extp_wm_UserAction@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarCaptionBarControl.cpp
