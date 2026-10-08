// roc 2011-06 0083bc50  unit: CXTPReportControl  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0083bc50
//
// 0083bc50  8b4138               mov eax, dword ptr [ecx + 0x38]
// 0083bc53  85c0                 test eax, eax
// 0083bc55  7406                 je 0x83bc5d
// 0083bc57  83794000             cmp dword ptr [ecx + 0x40], 0
// 0083bc5b  7503                 jne 0x83bc60
// 0083bc5d  8b413c               mov eax, dword ptr [ecx + 0x3c]
// 0083bc60  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportHeader.cpp (function ?GetHotTrackingColumn@CXTPReportHeader@@IBEPAVCXTPReportColumn@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportHeader.cpp
