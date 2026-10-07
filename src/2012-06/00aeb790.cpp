// roc 2012-06 00aeb790  unit: seg_00ae0000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00aeb790
//
// 00aeb790  6a00                 push 0
// 00aeb792  6a00                 push 0
// 00aeb794  6a00                 push 0
// 00aeb796  6a1f                 push 0x1f
// 00aeb798  6a0c                 push 0xc
// 00aeb79a  680f270000           push 0x270f
// 00aeb79f  b9acade100           mov ecx, 0xe1adac
// 00aeb7a4  e807ba9bff           call 0x4a71b0
// 00aeb7a9  c3                   ret 
// library xtp-15.2.1/Source\Calendar\XTPCalendarCaptionBarControl.cpp (function ??__ExtpCalendarDateTime_max@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarCaptionBarControl.cpp
