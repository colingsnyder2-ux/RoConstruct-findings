// roc 2009-12 008a4190  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a4190
//
// 008a4190  8b4960               mov ecx, dword ptr [ecx + 0x60]
// 008a4193  85c9                 test ecx, ecx
// 008a4195  740f                 je 0x8a41a6
// 008a4197  e8848af8ff           call 0x82cc20
// 008a419c  85c0                 test eax, eax
// 008a419e  7e06                 jle 0x8a41a6
// 008a41a0  b801000000           mov eax, 1
// 008a41a5  c3                   ret 
// 008a41a6  33c0                 xor eax, eax
// 008a41a8  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportRow.cpp (function ?HasChildren@CXTPReportRow@@UBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRow.cpp
