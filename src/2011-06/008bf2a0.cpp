// roc 2011-06 008bf2a0  unit: CXTPDockingPaneWindowSelect  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008bf2a0
//
// 008bf2a0  c701245aad00         mov dword ptr [ecx], 0xad5a24
// 008bf2a6  83c108               add ecx, 8
// 008bf2a9  e972eaffff           jmp 0x8bdd20
// library xtp-15.2.1/Source\Calendar\XTPCalendarMAPIDataProvider.cpp (function ??1CXTPMAPIBinary@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarMAPIDataProvider.cpp
