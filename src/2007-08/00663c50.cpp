// roc 2007-08 00663c50  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00663c50
//
// 00663c50  83793400             cmp dword ptr [ecx + 0x34], 0
// 00663c54  7404                 je 0x663c5a
// 00663c56  8b4138               mov eax, dword ptr [ecx + 0x38]
// 00663c59  c3                   ret 
// 00663c5a  8b4128               mov eax, dword ptr [ecx + 0x28]
// 00663c5d  c3                   ret 
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportRecords.cpp (function ?GetCount@CXTPReportRecords@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportRecords.cpp
