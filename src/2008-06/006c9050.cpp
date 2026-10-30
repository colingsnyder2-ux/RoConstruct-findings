// from server: 100% by auto
// roc 2008-06 006c9050  unit: CXTPReportControl  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c9050
//
// 006c9050  ff415c               inc dword ptr [ecx + 0x5c]
// 006c9053  c7415800000000       mov dword ptr [ecx + 0x58], 0
// 006c905a  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?BeginUpdate@CXTPReportControl@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
