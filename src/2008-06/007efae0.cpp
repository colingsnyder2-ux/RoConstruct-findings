// roc 2008-06 007efae0  unit: seg_007e0000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007efae0
//
// 007efae0  6a00                 push 0
// 007efae2  6a00                 push 0
// 007efae4  6a00                 push 0
// 007efae6  6a1f                 push 0x1f
// 007efae8  6a0c                 push 0xc
// 007efaea  680f270000           push 0x270f
// 007efaef  b9c4df9600           mov ecx, 0x96dfc4
// 007efaf4  e8f776c7ff           call 0x4671f0
// 007efaf9  c3                   ret 
// library xtp-11.2.2/Source\Calendar\XTPCalendarControl.cpp (function ??__ExtpCalendarDateTime_max@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Calendar/XTPCalendarControl.cpp
