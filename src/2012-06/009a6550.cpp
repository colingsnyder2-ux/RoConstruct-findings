// roc 2012-06 009a6550  unit: CXTPReportViewPrintOptions  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009a6550
//
// 009a6550  8b4904               mov ecx, dword ptr [ecx + 4]
// 009a6553  83ec08               sub esp, 8
// 009a6556  8d0424               lea eax, [esp]
// 009a6559  50                   push eax
// 009a655a  51                   push ecx
// 009a655b  ff15f020b200         call dword ptr [0xb220f0]
// 009a6561  8b44240c             mov eax, dword ptr [esp + 0xc]
// 009a6565  8b1424               mov edx, dword ptr [esp]
// 009a6568  8b4c2404             mov ecx, dword ptr [esp + 4]
// 009a656c  8910                 mov dword ptr [eax], edx
// 009a656e  894804               mov dword ptr [eax + 4], ecx
// 009a6571  83c408               add esp, 8
// 009a6574  c20400               ret 4
// library xtp-15.2.1/Source\Calendar\XTPCalendarControlView.cpp (function ?GetBitmapDimension@CBitmap@@QBE?AVCSize@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarControlView.cpp
