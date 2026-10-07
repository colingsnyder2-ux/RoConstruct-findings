// roc 2012-06 00aeb7b0  unit: seg_00ae0000  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00aeb7b0
//
// 00aeb7b0  685024b600           push 0xb62450
// 00aeb7b5  ff15743bb200         call dword ptr [0xb23b74]
// 00aeb7bb  a3c0ade100           mov dword ptr [0xe1adc0], eax
// 00aeb7c0  c3                   ret 
// library xtp-15.2.1/Source\Calendar\XTPCalendarCaptionBarControl.cpp (function ??__Extp_wm_SwitchView@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarCaptionBarControl.cpp
