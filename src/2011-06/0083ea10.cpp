// from server: 100% by auto
// roc 2011-06 0083ea10  unit: CInstanceRecord::CNameItem  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0083ea10
//
// 0083ea10  85c9                 test ecx, ecx
// 0083ea12  7503                 jne 0x83ea17
// 0083ea14  33c0                 xor eax, eax
// 0083ea16  c3                   ret 
// 0083ea17  8b4164               mov eax, dword ptr [ecx + 0x64]
// 0083ea1a  c3                   ret 
// library xtp-15.2.1/Source\ReportControl\XTPReportRecordItem.cpp (function ?IsFocusable@CXTPReportRecordItem@@UBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/ReportControl/XTPReportRecordItem.cpp
