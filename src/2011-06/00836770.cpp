// roc 2011-06 00836770  unit: CXTPReportControl  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00836770
//
// 00836770  c701744dac00         mov dword ptr [ecx], 0xac4d74
// 00836776  8b4904               mov ecx, dword ptr [ecx + 4]
// 00836779  85c9                 test ecx, ecx
// 0083677b  7405                 je 0x836782
// 0083677d  e9583efdff           jmp 0x80a5da
// 00836782  c3                   ret 
// library xtp-15.2.1/Source\Calendar\XTPCalendarCaptionBarControl.cpp (function ??1?$CXTPSmartPtrInternalT@VCXTPCalendarCaptionBarThemePart@@@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarCaptionBarControl.cpp
