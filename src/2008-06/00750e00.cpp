// roc 2008-06 00750e00  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00750e00
//
// 00750e00  51                   push ecx
// 00750e01  8b4924               mov ecx, dword ptr [ecx + 0x24]
// 00750e04  e837b8f7ff           call 0x6cc640
// 00750e09  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportRow.cpp (function ?EnsureVisible@CXTPReportRow@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRow.cpp
