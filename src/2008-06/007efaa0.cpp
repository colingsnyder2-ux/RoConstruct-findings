// from server: 100% by auto
// roc 2008-06 007efaa0  unit: seg_007e0000  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007efaa0
//
// 007efaa0  a1e8339300           mov eax, dword ptr [0x9333e8]
// 007efaa5  50                   push eax
// 007efaa6  ff15082d8000         call dword ptr [0x802d08]
// 007efaac  a3d4df9600           mov dword ptr [0x96dfd4], eax
// 007efab1  c3                   ret 
// library xtp-11.2.2/Source\Calendar\XTPCalendarControl.cpp (function ??__Extp_wm_NotificationSinkMTOnEvent@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Calendar/XTPCalendarControl.cpp
