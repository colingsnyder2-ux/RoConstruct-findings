// from server: 100% by auto
// roc 2007-08 00651f70  unit: CXTPReportViewPrintOptions  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00651f70
//
// 00651f70  8b4904               mov ecx, dword ptr [ecx + 4]
// 00651f73  83ec08               sub esp, 8
// 00651f76  8d0424               lea eax, [esp]
// 00651f79  50                   push eax
// 00651f7a  51                   push ecx
// 00651f7b  ff15ecd07700         call dword ptr [0x77d0ec]
// 00651f81  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00651f85  8b1424               mov edx, dword ptr [esp]
// 00651f88  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00651f8c  8910                 mov dword ptr [eax], edx
// 00651f8e  894804               mov dword ptr [eax + 4], ecx
// 00651f91  83c408               add esp, 8
// 00651f94  c20400               ret 4
// library xtp-11.2.2-vc8/Source\Calendar\XTPCalendarControlView.cpp (function ?GetBitmapDimension@CBitmap@@QBE?AVCSize@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Calendar/XTPCalendarControlView.cpp
