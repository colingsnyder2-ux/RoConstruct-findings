// roc 2007-08 00653cd0  unit: CInstanceRecord::CNameItem  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00653cd0
//
// 00653cd0  85c9                 test ecx, ecx
// 00653cd2  7503                 jne 0x653cd7
// 00653cd4  33c0                 xor eax, eax
// 00653cd6  c3                   ret 
// 00653cd7  8b4164               mov eax, dword ptr [ecx + 0x64]
// 00653cda  c3                   ret 
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportRecordItem.cpp (function ?IsFocusable@CXTPReportRecordItem@@UBEHXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportRecordItem.cpp
