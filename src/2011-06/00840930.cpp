// roc 2011-06 00840930  unit: CInstanceRecord  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00840930
//
// 00840930  8b4940               mov ecx, dword ptr [ecx + 0x40]
// 00840933  85c9                 test ecx, ecx
// 00840935  740f                 je 0x840946
// 00840937  e8a4270000           call 0x8430e0
// 0084093c  85c0                 test eax, eax
// 0084093e  7e06                 jle 0x840946
// 00840940  b801000000           mov eax, 1
// 00840945  c3                   ret 
// 00840946  33c0                 xor eax, eax
// 00840948  c3                   ret 
// library xtp-15.2.1/Source\ReportControl\XTPReportRecord.cpp (function ?HasChildren@CXTPReportRecord@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/ReportControl/XTPReportRecord.cpp
