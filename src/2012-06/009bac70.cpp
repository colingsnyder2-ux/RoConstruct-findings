// roc 2012-06 009bac70  unit: VCXTPReportRecords::?$CXTPHeapObjectT  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009bac70
//
// 009bac70  83793400             cmp dword ptr [ecx + 0x34], 0
// 009bac74  7404                 je 0x9bac7a
// 009bac76  8b4138               mov eax, dword ptr [ecx + 0x38]
// 009bac79  c3                   ret 
// 009bac7a  8b4128               mov eax, dword ptr [ecx + 0x28]
// 009bac7d  c3                   ret 
// library xtp-15.2.1/Source\ReportControl\XTPReportRecords.cpp (function ?GetCount@CXTPReportRecords@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/ReportControl/XTPReportRecords.cpp
