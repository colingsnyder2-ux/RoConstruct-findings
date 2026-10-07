// roc 2011-06 0042ffe0  unit: MainLogManager  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0042ffe0
//
// 0042ffe0  8b09                 mov ecx, dword ptr [ecx]
// 0042ffe2  85c9                 test ecx, ecx
// 0042ffe4  7405                 je 0x42ffeb
// 0042ffe6  e9efa53d00           jmp 0x80a5da
// 0042ffeb  c3                   ret 
// library xtp-15.2.1/Source\Calendar\XTPCalendarCustomProperties.cpp (function ??1CXTPPropExchangeSection@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarCustomProperties.cpp
