// roc 2007-08 00699710  unit: CXTPPropertyGridItem  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00699710
//
// 00699710  56                   push esi
// 00699711  8bf1                 mov esi, ecx
// 00699713  e822ec0900           call 0x73833a
// 00699718  8d4e20               lea ecx, [esi + 0x20]
// 0069971b  c7069c167d00         mov dword ptr [esi], 0x7d169c
// 00699721  e83afbffff           call 0x699260
// 00699726  8bc6                 mov eax, esi
// 00699728  5e                   pop esi
// 00699729  c3                   ret 
// library xtp-11.2.2-vc8/Source\Calendar\XTPCalendarDayView.cpp (function ??0?$CXTPCalendarPtrCollectionT@VCXTPCalendarDayViewDay@@@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Calendar/XTPCalendarDayView.cpp
