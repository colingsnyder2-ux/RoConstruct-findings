// roc 2007-08 0076d560  unit: seg_00760000  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076d560
//
// 0076d560  68845a7900           push 0x795a84
// 0076d565  ff1570ed7700         call dword ptr [0x77ed70]
// 0076d56b  a3bcc08b00           mov dword ptr [0x8bc0bc], eax
// 0076d570  c3                   ret 
// library xtp-11.2.2-vc8/Source\Calendar\XTPCalendarControl.cpp (function ??__Extp_wm_UserAction@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Calendar/XTPCalendarControl.cpp
