// roc 2011-06 0082df50  unit: CXTPReportViewPrintOptions  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0082df50
//
// 0082df50  8b4904               mov ecx, dword ptr [ecx + 4]
// 0082df53  83ec08               sub esp, 8
// 0082df56  8d0424               lea eax, [esp]
// 0082df59  50                   push eax
// 0082df5a  51                   push ecx
// 0082df5b  ff15d400a400         call dword ptr [0xa400d4]
// 0082df61  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0082df65  8b1424               mov edx, dword ptr [esp]
// 0082df68  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0082df6c  8910                 mov dword ptr [eax], edx
// 0082df6e  894804               mov dword ptr [eax + 4], ecx
// 0082df71  83c408               add esp, 8
// 0082df74  c20400               ret 4
// library xtp-15.2.1/Source\Calendar\XTPCalendarControlView.cpp (function ?GetBitmapDimension@CBitmap@@QBE?AVCSize@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarControlView.cpp
