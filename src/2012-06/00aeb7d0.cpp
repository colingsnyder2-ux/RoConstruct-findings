// from server: 100% by auto
// roc 2012-06 00aeb7d0  unit: seg_00ae0000  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00aeb7d0
//
// 00aeb7d0  683824b600           push 0xb62438
// 00aeb7d5  ff15743bb200         call dword ptr [0xb23b74]
// 00aeb7db  a3b8ade100           mov dword ptr [0xe1adb8], eax
// 00aeb7e0  c3                   ret 
// library xtp-15.2.1/Source\Calendar\XTPCalendarCaptionBarControl.cpp (function ??__Extp_wm_UserAction@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarCaptionBarControl.cpp
