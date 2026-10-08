// roc 2010-06 007d0570  unit: CXTPReportControl  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007d0570
//
// 007d0570  ff415c               inc dword ptr [ecx + 0x5c]
// 007d0573  c7415800000000       mov dword ptr [ecx + 0x58], 0
// 007d057a  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?BeginUpdate@CXTPReportControl@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
