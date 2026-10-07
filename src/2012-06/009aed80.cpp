// roc 2012-06 009aed80  unit: CXTPReportControl  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009aed80
//
// 009aed80  c7015404c100         mov dword ptr [ecx], 0xc10454
// 009aed86  8b4904               mov ecx, dword ptr [ecx + 4]
// 009aed89  85c9                 test ecx, ecx
// 009aed8b  7405                 je 0x9aed92
// 009aed8d  e9f838fdff           jmp 0x98268a
// 009aed92  c3                   ret 
// library xtp-15.2.1/Source\Calendar\XTPCalendarCaptionBarControl.cpp (function ??1?$CXTPSmartPtrInternalT@VCXTPCalendarCaptionBarThemePart@@@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarCaptionBarControl.cpp
