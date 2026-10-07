// roc 2008-06 0074f0e0  unit: CXTPReportHyperlinks  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0074f0e0
//
// 0074f0e0  56                   push esi
// 0074f0e1  8bf1                 mov esi, ecx
// 0074f0e3  e8c2ce0600           call 0x7bbfaa
// 0074f0e8  8d4e20               lea ecx, [esi + 0x20]
// 0074f0eb  c706ac438600         mov dword ptr [esi], 0x8643ac
// 0074f0f1  e88afeffff           call 0x74ef80
// 0074f0f6  8bc6                 mov eax, esi
// 0074f0f8  5e                   pop esi
// 0074f0f9  c3                   ret 
// library xtp-11.2.2/Source\Calendar\XTPCalendarDayView.cpp (function ??0?$CXTPCalendarPtrCollectionT@VCXTPCalendarDayViewDay@@@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Calendar/XTPCalendarDayView.cpp
