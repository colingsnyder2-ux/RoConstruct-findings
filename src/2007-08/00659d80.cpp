// roc 2007-08 00659d80  unit: CXTPReportControl  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00659d80
//
// 00659d80  c70164857c00         mov dword ptr [ecx], 0x7c8564
// 00659d86  8b4904               mov ecx, dword ptr [ecx + 4]
// 00659d89  85c9                 test ecx, ecx
// 00659d8b  7405                 je 0x659d92
// 00659d8d  e95264fdff           jmp 0x6301e4
// 00659d92  c3                   ret 
// library xtp-11.2.2-vc8/Source\Calendar\XTPCalendarControl.cpp (function ??1?$CXTPSmartPtrInternalT@VCXTPCalendarRecurrencePattern@@@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Calendar/XTPCalendarControl.cpp
