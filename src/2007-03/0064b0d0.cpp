// roc 2007-03 0064b0d0  unit: seg_00640000  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0064b0d0
//
// 0064b0d0  8b4138               mov eax, dword ptr [ecx + 0x38]
// 0064b0d3  85c0                 test eax, eax
// 0064b0d5  7406                 je 0x64b0dd
// 0064b0d7  83794000             cmp dword ptr [ecx + 0x40], 0
// 0064b0db  7503                 jne 0x64b0e0
// 0064b0dd  8b413c               mov eax, dword ptr [ecx + 0x3c]
// 0064b0e0  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportHeader.cpp (function ?GetHotTrackingColumn@CXTPReportHeader@@IBEPAVCXTPReportColumn@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportHeader.cpp
