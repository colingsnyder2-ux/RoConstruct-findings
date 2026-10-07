// roc 2008-06 007efb00  unit: seg_007e0000  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007efb00
//
// 007efb00  680cc38100           push 0x81c30c
// 007efb05  ff15082d8000         call dword ptr [0x802d08]
// 007efb0b  a3d8df9600           mov dword ptr [0x96dfd8], eax
// 007efb10  c3                   ret 
// library xtp-11.2.2/Source\Calendar\XTPCalendarControl.cpp (function ??__Extp_wm_SwitchView@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Calendar/XTPCalendarControl.cpp
