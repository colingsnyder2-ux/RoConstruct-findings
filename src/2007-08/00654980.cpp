// from server: 100% by auto
// roc 2007-08 00654980  unit: PAVCXTPReportInplaceButton::?$CArray  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00654980
//
// 00654980  56                   push esi
// 00654981  8bf1                 mov esi, ecx
// 00654983  e8b2390e00           call 0x73833a
// 00654988  8d4e20               lea ecx, [esi + 0x20]
// 0065498b  c706cc7f7c00         mov dword ptr [esi], 0x7c7fcc
// 00654991  e8fafeffff           call 0x654890
// 00654996  8bc6                 mov eax, esi
// 00654998  5e                   pop esi
// 00654999  c3                   ret 
// library xtp-11.2.2-vc8/Source\Calendar\XTPCalendarDayView.cpp (function ??0?$CXTPCalendarPtrCollectionT@VCXTPCalendarDayViewDay@@@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Calendar/XTPCalendarDayView.cpp
