// roc 2009-06 0074d590  unit: CXTPReportColumn  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0074d590
//
// 0074d590  8b4138               mov eax, dword ptr [ecx + 0x38]
// 0074d593  85c0                 test eax, eax
// 0074d595  7406                 je 0x74d59d
// 0074d597  83794000             cmp dword ptr [ecx + 0x40], 0
// 0074d59b  7503                 jne 0x74d5a0
// 0074d59d  8b413c               mov eax, dword ptr [ecx + 0x3c]
// 0074d5a0  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportHeader.cpp (function ?GetHotTrackingColumn@CXTPReportHeader@@IBEPAVCXTPReportColumn@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportHeader.cpp
