// roc 2010-06 007dbd10  unit: CXTPReportColumn  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007dbd10
//
// 007dbd10  8b4958               mov ecx, dword ptr [ecx + 0x58]
// 007dbd13  e828440400           call 0x820140
// 007dbd18  8b4024               mov eax, dword ptr [eax + 0x24]
// 007dbd1b  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportColumn.cpp (function ?GetControl@CXTPReportColumn@@QBEPAVCXTPReportControl@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportColumn.cpp
