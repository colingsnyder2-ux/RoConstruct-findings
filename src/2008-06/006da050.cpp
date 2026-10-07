// roc 2008-06 006da050  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006da050
//
// 006da050  83793400             cmp dword ptr [ecx + 0x34], 0
// 006da054  7404                 je 0x6da05a
// 006da056  8b4138               mov eax, dword ptr [ecx + 0x38]
// 006da059  c3                   ret 
// 006da05a  8b4128               mov eax, dword ptr [ecx + 0x28]
// 006da05d  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportRecords.cpp (function ?GetCount@CXTPReportRecords@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRecords.cpp
