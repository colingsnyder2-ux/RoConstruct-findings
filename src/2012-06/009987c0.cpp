// roc 2012-06 009987c0  unit: CXTPImageManagerResource::CBitmapDC  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009987c0
//
// 009987c0  8b442408             mov eax, dword ptr [esp + 8]
// 009987c4  8b542404             mov edx, dword ptr [esp + 4]
// 009987c8  50                   push eax
// 009987c9  8b4104               mov eax, dword ptr [ecx + 4]
// 009987cc  52                   push edx
// 009987cd  50                   push eax
// 009987ce  ff15dc20b200         call dword ptr [0xb220dc]
// 009987d4  c20800               ret 8
// library xtp-15.2.1/Source\Calendar\XTPCalendarCaptionBarControl.cpp (function ?Polygon@CDC@@QAEHPBUtagPOINT@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarCaptionBarControl.cpp
