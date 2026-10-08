// roc 2012-06 009a8c90  unit: CXTPReportControl  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009a8c90
//
// 009a8c90  ff415c               inc dword ptr [ecx + 0x5c]
// 009a8c93  c7415800000000       mov dword ptr [ecx + 0x58], 0
// 009a8c9a  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?BeginUpdate@CXTPReportControl@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
