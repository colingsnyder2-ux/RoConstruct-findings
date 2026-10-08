// roc 2011-06 008b31d0  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008b31d0
//
// 008b31d0  8b4960               mov ecx, dword ptr [ecx + 0x60]
// 008b31d3  85c9                 test ecx, ecx
// 008b31d5  740f                 je 0x8b31e6
// 008b31d7  e804fff8ff           call 0x8430e0
// 008b31dc  85c0                 test eax, eax
// 008b31de  7e06                 jle 0x8b31e6
// 008b31e0  b801000000           mov eax, 1
// 008b31e5  c3                   ret 
// 008b31e6  33c0                 xor eax, eax
// 008b31e8  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportRow.cpp (function ?HasChildren@CXTPReportRow@@UBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRow.cpp
