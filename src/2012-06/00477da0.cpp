// roc 2012-06 00477da0  unit: CRobloxControlColorSelector  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00477da0
//
// 00477da0  8b442408             mov eax, dword ptr [esp + 8]
// 00477da4  8b542404             mov edx, dword ptr [esp + 4]
// 00477da8  50                   push eax
// 00477da9  52                   push edx
// 00477daa  51                   push ecx
// 00477dab  ff15483bb200         call dword ptr [0xb23b48]
// 00477db1  c20800               ret 8
// library xtp-15.2.1/Source\Calendar\XTPCalendarCaptionBarControl.cpp (function ?PtInRect@CRect@@QBEHUtagPOINT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarCaptionBarControl.cpp
