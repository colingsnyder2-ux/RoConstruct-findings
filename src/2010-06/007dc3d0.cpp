// roc 2010-06 007dc3d0  unit: CXTPReportColumn  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007dc3d0
//
// 007dc3d0  8b4138               mov eax, dword ptr [ecx + 0x38]
// 007dc3d3  85c0                 test eax, eax
// 007dc3d5  7406                 je 0x7dc3dd
// 007dc3d7  83794000             cmp dword ptr [ecx + 0x40], 0
// 007dc3db  7503                 jne 0x7dc3e0
// 007dc3dd  8b413c               mov eax, dword ptr [ecx + 0x3c]
// 007dc3e0  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportHeader.cpp (function ?GetHotTrackingColumn@CXTPReportHeader@@IBEPAVCXTPReportColumn@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportHeader.cpp
