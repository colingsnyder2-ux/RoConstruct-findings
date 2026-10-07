// roc 2007-08 0076d4e0  unit: seg_00760000  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076d4e0
//
// 0076d4e0  a1a8a98800           mov eax, dword ptr [0x88a9a8]
// 0076d4e5  50                   push eax
// 0076d4e6  ff1570ed7700         call dword ptr [0x77ed70]
// 0076d4ec  a3c0c08b00           mov dword ptr [0x8bc0c0], eax
// 0076d4f1  c3                   ret 
// library xtp-11.2.2-vc8/Source\Calendar\XTPCalendarControl.cpp (function ??__Extp_wm_NotificationSinkMTOnEvent@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Calendar/XTPCalendarControl.cpp
