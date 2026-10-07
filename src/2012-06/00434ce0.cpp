// roc 2012-06 00434ce0  unit: MainLogManager  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00434ce0
//
// 00434ce0  8b09                 mov ecx, dword ptr [ecx]
// 00434ce2  85c9                 test ecx, ecx
// 00434ce4  7405                 je 0x434ceb
// 00434ce6  e99fd95400           jmp 0x98268a
// 00434ceb  c3                   ret 
// library xtp-15.2.1/Source\Calendar\XTPCalendarCustomProperties.cpp (function ??1CXTPPropExchangeSection@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarCustomProperties.cpp
