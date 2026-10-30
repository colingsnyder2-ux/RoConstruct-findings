// from server: 100% by auto
// roc 2012-06 009b8da0  unit: CInstanceRecord  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009b8da0
//
// 009b8da0  8b4940               mov ecx, dword ptr [ecx + 0x40]
// 009b8da3  85c9                 test ecx, ecx
// 009b8da5  740f                 je 0x9b8db6
// 009b8da7  e8c41e0000           call 0x9bac70
// 009b8dac  85c0                 test eax, eax
// 009b8dae  7e06                 jle 0x9b8db6
// 009b8db0  b801000000           mov eax, 1
// 009b8db5  c3                   ret 
// 009b8db6  33c0                 xor eax, eax
// 009b8db8  c3                   ret 
// library xtp-15.2.1/Source\ReportControl\XTPReportRecord.cpp (function ?HasChildren@CXTPReportRecord@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/ReportControl/XTPReportRecord.cpp
