// roc 2008-06 006c7de0  unit: PAVCXTPReportInplaceButton::?$CArray  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c7de0
//
// 006c7de0  56                   push esi
// 006c7de1  8bf1                 mov esi, ecx
// 006c7de3  e8c2410f00           call 0x7bbfaa
// 006c7de8  8d4e20               lea ecx, [esi + 0x20]
// 006c7deb  c706dc348500         mov dword ptr [esi], 0x8534dc
// 006c7df1  e8fafeffff           call 0x6c7cf0
// 006c7df6  8bc6                 mov eax, esi
// 006c7df8  5e                   pop esi
// 006c7df9  c3                   ret 
// library xtp-11.2.2/Source\Calendar\XTPCalendarDayView.cpp (function ??0?$CXTPCalendarPtrCollectionT@VCXTPCalendarDayViewDay@@@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Calendar/XTPCalendarDayView.cpp
