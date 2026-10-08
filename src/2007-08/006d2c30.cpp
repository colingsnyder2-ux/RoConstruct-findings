// from server: 100% by auto
// roc 2007-08 006d2c30  unit: CXTPReportHyperlinks  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d2c30
//
// 006d2c30  56                   push esi
// 006d2c31  8bf1                 mov esi, ecx
// 006d2c33  e802570600           call 0x73833a
// 006d2c38  8d4e20               lea ecx, [esi + 0x20]
// 006d2c3b  c70614817d00         mov dword ptr [esi], 0x7d8114
// 006d2c41  e83afeffff           call 0x6d2a80
// 006d2c46  8bc6                 mov eax, esi
// 006d2c48  5e                   pop esi
// 006d2c49  c3                   ret 
// library xtp-11.2.2-vc8/Source\Calendar\XTPCalendarDayView.cpp (function ??0?$CXTPCalendarPtrCollectionT@VCXTPCalendarDayViewDay@@@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Calendar/XTPCalendarDayView.cpp
