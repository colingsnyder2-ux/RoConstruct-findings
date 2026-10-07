// roc 2012-06 00a377a0  unit: CXTPDockingPaneWindowSelect  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a377a0
//
// 00a377a0  c701bc10c200         mov dword ptr [ecx], 0xc210bc
// 00a377a6  83c108               add ecx, 8
// 00a377a9  e972eaffff           jmp 0xa36220
// library xtp-15.2.1/Source\Calendar\XTPCalendarMAPIDataProvider.cpp (function ??1CXTPMAPIBinary@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarMAPIDataProvider.cpp
