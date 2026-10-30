// from server: 100% by auto
// roc 2008-06 006c4ff0  unit: CXTPReportViewPrintOptions  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c4ff0
//
// 006c4ff0  8b4904               mov ecx, dword ptr [ecx + 4]
// 006c4ff3  83ec08               sub esp, 8
// 006c4ff6  8d0424               lea eax, [esp]
// 006c4ff9  50                   push eax
// 006c4ffa  51                   push ecx
// 006c4ffb  ff155c218000         call dword ptr [0x80215c]
// 006c5001  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006c5005  8b1424               mov edx, dword ptr [esp]
// 006c5008  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006c500c  8910                 mov dword ptr [eax], edx
// 006c500e  894804               mov dword ptr [eax + 4], ecx
// 006c5011  83c408               add esp, 8
// 006c5014  c20400               ret 4
// library xtp-11.2.2/Source\Calendar\XTPCalendarControlView.cpp (function ?GetBitmapDimension@CBitmap@@QBE?AVCSize@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Calendar/XTPCalendarControlView.cpp
