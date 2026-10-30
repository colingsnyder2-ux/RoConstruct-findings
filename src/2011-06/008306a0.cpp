// roc 2011-06 008306a0  unit: CXTPReportControl  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008306a0
//
// 008306a0  ff415c               inc dword ptr [ecx + 0x5c]
// 008306a3  c7415800000000       mov dword ptr [ecx + 0x58], 0
// 008306aa  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?BeginUpdate@CXTPReportControl@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
