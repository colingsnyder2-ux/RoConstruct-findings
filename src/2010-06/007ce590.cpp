// roc 2010-06 007ce590  unit: CInstanceRecord::CNameItem  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007ce590
//
// 007ce590  85c9                 test ecx, ecx
// 007ce592  7503                 jne 0x7ce597
// 007ce594  33c0                 xor eax, eax
// 007ce596  c3                   ret 
// 007ce597  8b4164               mov eax, dword ptr [ecx + 0x64]
// 007ce59a  c3                   ret 
// library xtp-15.2.1/Source\ReportControl\XTPReportRecordItem.cpp (function ?IsFocusable@CXTPReportRecordItem@@UBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/ReportControl/XTPReportRecordItem.cpp
