// from server: 100% by auto
// roc 2012-06 009b7060  unit: CInstanceRecord::CNameItem  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009b7060
//
// 009b7060  85c9                 test ecx, ecx
// 009b7062  7503                 jne 0x9b7067
// 009b7064  33c0                 xor eax, eax
// 009b7066  c3                   ret 
// 009b7067  8b4164               mov eax, dword ptr [ecx + 0x64]
// 009b706a  c3                   ret 
// library xtp-15.2.1/Source\ReportControl\XTPReportRecordItem.cpp (function ?IsFocusable@CXTPReportRecordItem@@UBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/ReportControl/XTPReportRecordItem.cpp
