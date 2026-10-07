// roc 2008-06 007efb20  unit: seg_007e0000  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007efb20
//
// 007efb20  68f4c28100           push 0x81c2f4
// 007efb25  ff15082d8000         call dword ptr [0x802d08]
// 007efb2b  a3d0df9600           mov dword ptr [0x96dfd0], eax
// 007efb30  c3                   ret 
// library xtp-11.2.2/Source\Calendar\XTPCalendarControl.cpp (function ??__Extp_wm_UserAction@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Calendar/XTPCalendarControl.cpp
