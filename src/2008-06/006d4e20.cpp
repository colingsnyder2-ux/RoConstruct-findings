// roc 2008-06 006d4e20  unit: CXTPReportColumn  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006d4e20
//
// 006d4e20  8b4138               mov eax, dword ptr [ecx + 0x38]
// 006d4e23  85c0                 test eax, eax
// 006d4e25  7406                 je 0x6d4e2d
// 006d4e27  83794000             cmp dword ptr [ecx + 0x40], 0
// 006d4e2b  7503                 jne 0x6d4e30
// 006d4e2d  8b413c               mov eax, dword ptr [ecx + 0x3c]
// 006d4e30  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportHeader.cpp (function ?GetHotTrackingColumn@CXTPReportHeader@@IBEPAVCXTPReportColumn@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportHeader.cpp
