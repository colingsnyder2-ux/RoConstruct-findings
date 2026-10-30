// from server: 100% by auto
// roc 2008-06 007efac0  unit: seg_007e0000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007efac0
//
// 007efac0  6a00                 push 0
// 007efac2  6a00                 push 0
// 007efac4  6a00                 push 0
// 007efac6  6a01                 push 1
// 007efac8  6a01                 push 1
// 007efaca  6a64                 push 0x64
// 007efacc  b9b8df9600           mov ecx, 0x96dfb8
// 007efad1  e81a77c7ff           call 0x4671f0
// 007efad6  c3                   ret 
// library xtp-11.2.2/Source\Calendar\XTPCalendarControl.cpp (function ??__ExtpCalendarDateTime_min@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Calendar/XTPCalendarControl.cpp
