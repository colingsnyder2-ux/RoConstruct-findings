// roc 2008-06 006c7030  unit: CInstanceRecord::CNameItem  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c7030
//
// 006c7030  85c9                 test ecx, ecx
// 006c7032  7503                 jne 0x6c7037
// 006c7034  33c0                 xor eax, eax
// 006c7036  c3                   ret 
// 006c7037  8b4164               mov eax, dword ptr [ecx + 0x64]
// 006c703a  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportRecordItem.cpp (function ?IsFocusable@CXTPReportRecordItem@@UBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRecordItem.cpp
