// roc 2007-08 006ddcd0  unit: CXTPDockingPaneWindowSelect  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006ddcd0
//
// 006ddcd0  c70104967d00         mov dword ptr [ecx], 0x7d9604
// 006ddcd6  83c108               add ecx, 8
// 006ddcd9  e942eaffff           jmp 0x6dc720
// library xtp-11.2.2-vc8/Source\Calendar\XTPCalendarMAPIDataProvider.cpp (function ??1CXTPMAPIBinary@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Calendar/XTPCalendarMAPIDataProvider.cpp
