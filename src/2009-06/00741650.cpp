// roc 2009-06 00741650  unit: CXTPReportControl  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00741650
//
// 00741650  ff415c               inc dword ptr [ecx + 0x5c]
// 00741653  c7415800000000       mov dword ptr [ecx + 0x58], 0
// 0074165a  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?BeginUpdate@CXTPReportControl@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
