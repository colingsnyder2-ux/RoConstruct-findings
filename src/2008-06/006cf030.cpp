// from server: 100% by auto
// roc 2008-06 006cf030  unit: CXTPReportControl  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006cf030
//
// 006cf030  c7019c3b8500         mov dword ptr [ecx], 0x853b9c
// 006cf036  8b4904               mov ecx, dword ptr [ecx + 4]
// 006cf039  85c9                 test ecx, ecx
// 006cf03b  7405                 je 0x6cf042
// 006cf03d  e9a21bfdff           jmp 0x6a0be4
// 006cf042  c3                   ret 
// library xtp-11.2.2/Source\Calendar\XTPCalendarControl.cpp (function ??1?$CXTPSmartPtrInternalT@VCXTPCalendarRecurrencePattern@@@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Calendar/XTPCalendarControl.cpp
