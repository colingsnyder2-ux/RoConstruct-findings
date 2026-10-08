// roc 2012-06 009b4260  unit: CXTPReportControl  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009b4260
//
// 009b4260  8b4138               mov eax, dword ptr [ecx + 0x38]
// 009b4263  85c0                 test eax, eax
// 009b4265  7406                 je 0x9b426d
// 009b4267  83794000             cmp dword ptr [ecx + 0x40], 0
// 009b426b  7503                 jne 0x9b4270
// 009b426d  8b413c               mov eax, dword ptr [ecx + 0x3c]
// 009b4270  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportHeader.cpp (function ?GetHotTrackingColumn@CXTPReportHeader@@IBEPAVCXTPReportColumn@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportHeader.cpp
