// roc 2009-12 00828350  unit: CXTPReportColumn  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00828350
//
// 00828350  8b4138               mov eax, dword ptr [ecx + 0x38]
// 00828353  85c0                 test eax, eax
// 00828355  7406                 je 0x82835d
// 00828357  83794000             cmp dword ptr [ecx + 0x40], 0
// 0082835b  7503                 jne 0x828360
// 0082835d  8b413c               mov eax, dword ptr [ecx + 0x3c]
// 00828360  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportHeader.cpp (function ?GetHotTrackingColumn@CXTPReportHeader@@IBEPAVCXTPReportColumn@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportHeader.cpp
