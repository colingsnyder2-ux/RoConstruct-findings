// roc 2010-06 008582d0  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008582d0
//
// 008582d0  8b4960               mov ecx, dword ptr [ecx + 0x60]
// 008582d3  85c9                 test ecx, ecx
// 008582d5  740f                 je 0x8582e6
// 008582d7  e8a494f8ff           call 0x7e1780
// 008582dc  85c0                 test eax, eax
// 008582de  7e06                 jle 0x8582e6
// 008582e0  b801000000           mov eax, 1
// 008582e5  c3                   ret 
// 008582e6  33c0                 xor eax, eax
// 008582e8  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportRow.cpp (function ?HasChildren@CXTPReportRow@@UBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRow.cpp
