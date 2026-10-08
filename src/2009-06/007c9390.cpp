// roc 2009-06 007c9390  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007c9390
//
// 007c9390  8b4960               mov ecx, dword ptr [ecx + 0x60]
// 007c9393  85c9                 test ecx, ecx
// 007c9395  740f                 je 0x7c93a6
// 007c9397  e8148bf8ff           call 0x751eb0
// 007c939c  85c0                 test eax, eax
// 007c939e  7e06                 jle 0x7c93a6
// 007c93a0  b801000000           mov eax, 1
// 007c93a5  c3                   ret 
// 007c93a6  33c0                 xor eax, eax
// 007c93a8  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportRow.cpp (function ?HasChildren@CXTPReportRow@@UBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRow.cpp
