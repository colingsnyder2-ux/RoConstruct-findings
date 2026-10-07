// roc 2007-08 0065ed30  unit: CXTPReportColumn  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0065ed30
//
// 0065ed30  8b4138               mov eax, dword ptr [ecx + 0x38]
// 0065ed33  85c0                 test eax, eax
// 0065ed35  7406                 je 0x65ed3d
// 0065ed37  83794000             cmp dword ptr [ecx + 0x40], 0
// 0065ed3b  7503                 jne 0x65ed40
// 0065ed3d  8b413c               mov eax, dword ptr [ecx + 0x3c]
// 0065ed40  c3                   ret 
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportHeader.cpp (function ?GetHotTrackingColumn@CXTPReportHeader@@IBEPAVCXTPReportColumn@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportHeader.cpp
