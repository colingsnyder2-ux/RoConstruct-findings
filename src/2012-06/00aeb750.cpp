// roc 2012-06 00aeb750  unit: seg_00ae0000  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00aeb750
//
// 00aeb750  a19020d700           mov eax, dword ptr [0xd72090]
// 00aeb755  50                   push eax
// 00aeb756  ff15743bb200         call dword ptr [0xb23b74]
// 00aeb75c  a3bcade100           mov dword ptr [0xe1adbc], eax
// 00aeb761  c3                   ret 
// library xtp-15.2.1/Source\Calendar\XTPCalendarCaptionBarControl.cpp (function ??__Extp_wm_NotificationSinkMTOnEvent@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarCaptionBarControl.cpp
