// from server: 100% by auto
// roc 2011-06 008430e0  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008430e0
//
// 008430e0  83793400             cmp dword ptr [ecx + 0x34], 0
// 008430e4  7404                 je 0x8430ea
// 008430e6  8b4138               mov eax, dword ptr [ecx + 0x38]
// 008430e9  c3                   ret 
// 008430ea  8b4128               mov eax, dword ptr [ecx + 0x28]
// 008430ed  c3                   ret 
// library xtp-15.2.1/Source\ReportControl\XTPReportRecords.cpp (function ?GetCount@CXTPReportRecords@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/ReportControl/XTPReportRecords.cpp
