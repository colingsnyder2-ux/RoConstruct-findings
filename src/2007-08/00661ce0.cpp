// from server: 100% by auto
// roc 2007-08 00661ce0  unit: CInstanceRecord  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00661ce0
//
// 00661ce0  8b4940               mov ecx, dword ptr [ecx + 0x40]
// 00661ce3  85c9                 test ecx, ecx
// 00661ce5  740f                 je 0x661cf6
// 00661ce7  e8641f0000           call 0x663c50
// 00661cec  85c0                 test eax, eax
// 00661cee  7e06                 jle 0x661cf6
// 00661cf0  b801000000           mov eax, 1
// 00661cf5  c3                   ret 
// 00661cf6  33c0                 xor eax, eax
// 00661cf8  c3                   ret 
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportRecord.cpp (function ?HasChildren@CXTPReportRecord@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportRecord.cpp
