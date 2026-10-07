// roc 2012-06 009987e0  unit: CXTPImageManagerResource::CBitmapDC  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009987e0
//
// 009987e0  8b442404             mov eax, dword ptr [esp + 4]
// 009987e4  8b4904               mov ecx, dword ptr [ecx + 4]
// 009987e7  50                   push eax
// 009987e8  51                   push ecx
// 009987e9  ff15e020b200         call dword ptr [0xb220e0]
// 009987ef  c20400               ret 4
// library xtp-15.2.1/Source\Calendar\XTPCalendarCaptionBarControl.cpp (function ?DrawFocusRect@CDC@@QAEXPBUtagRECT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarCaptionBarControl.cpp
