// roc 2011-06 0082fde0  unit: CXTPReportColumn  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0082fde0
//
// 0082fde0  8b4958               mov ecx, dword ptr [ecx + 0x58]
// 0082fde3  e868da0400           call 0x87d850
// 0082fde8  8b4024               mov eax, dword ptr [eax + 0x24]
// 0082fdeb  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportColumn.cpp (function ?GetControl@CXTPReportColumn@@QBEPAVCXTPReportControl@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportColumn.cpp
