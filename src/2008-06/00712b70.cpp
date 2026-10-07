// roc 2008-06 00712b70  unit: CXTPPropertyGridItem  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00712b70
//
// 00712b70  56                   push esi
// 00712b71  8bf1                 mov esi, ecx
// 00712b73  e832940a00           call 0x7bbfaa
// 00712b78  8d4e20               lea ecx, [esi + 0x20]
// 00712b7b  c7061cd58500         mov dword ptr [esi], 0x85d51c
// 00712b81  e8fafaffff           call 0x712680
// 00712b86  8bc6                 mov eax, esi
// 00712b88  5e                   pop esi
// 00712b89  c3                   ret 
// library xtp-11.2.2/Source\Calendar\XTPCalendarDayView.cpp (function ??0?$CXTPCalendarPtrCollectionT@VCXTPCalendarDayViewDay@@@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Calendar/XTPCalendarDayView.cpp
