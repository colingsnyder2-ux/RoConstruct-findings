// roc 2007-03 006bdfe0  unit: seg_006b0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006bdfe0
//
// 006bdfe0  8b4960               mov ecx, dword ptr [ecx + 0x60]
// 006bdfe3  85c9                 test ecx, ecx
// 006bdfe5  740f                 je 0x6bdff6
// 006bdfe7  e8d415f9ff           call 0x64f5c0
// 006bdfec  85c0                 test eax, eax
// 006bdfee  7e06                 jle 0x6bdff6
// 006bdff0  b801000000           mov eax, 1
// 006bdff5  c3                   ret 
// 006bdff6  33c0                 xor eax, eax
// 006bdff8  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportRow.cpp (function ?HasChildren@CXTPReportRow@@UBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRow.cpp
