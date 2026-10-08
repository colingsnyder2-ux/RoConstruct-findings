// from server: 100% by auto
// roc 2007-08 0042f180  unit: CMainFrame  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0042f180
//
// 0042f180  8b09                 mov ecx, dword ptr [ecx]
// 0042f182  85c9                 test ecx, ecx
// 0042f184  7405                 je 0x42f18b
// 0042f186  e959102000           jmp 0x6301e4
// 0042f18b  c3                   ret 
// library xtp-11.2.2-vc8/Source\Calendar\XTPCalendarCustomProperties.cpp (function ??1CXTPPropExchangeSection@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Calendar/XTPCalendarCustomProperties.cpp
