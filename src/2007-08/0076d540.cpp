// roc 2007-08 0076d540  unit: seg_00760000  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076d540
//
// 0076d540  689c5a7900           push 0x795a9c
// 0076d545  ff1570ed7700         call dword ptr [0x77ed70]
// 0076d54b  a3c4c08b00           mov dword ptr [0x8bc0c4], eax
// 0076d550  c3                   ret 
// library xtp-11.2.2-vc8/Source\Calendar\XTPCalendarControl.cpp (function ??__Extp_wm_SwitchView@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Calendar/XTPCalendarControl.cpp
