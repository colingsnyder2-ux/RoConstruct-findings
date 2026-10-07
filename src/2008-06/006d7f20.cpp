// roc 2008-06 006d7f20  unit: CInstanceRecord  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006d7f20
//
// 006d7f20  8b4940               mov ecx, dword ptr [ecx + 0x40]
// 006d7f23  85c9                 test ecx, ecx
// 006d7f25  740f                 je 0x6d7f36
// 006d7f27  e824210000           call 0x6da050
// 006d7f2c  85c0                 test eax, eax
// 006d7f2e  7e06                 jle 0x6d7f36
// 006d7f30  b801000000           mov eax, 1
// 006d7f35  c3                   ret 
// 006d7f36  33c0                 xor eax, eax
// 006d7f38  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportRecord.cpp (function ?HasChildren@CXTPReportRecord@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRecord.cpp
