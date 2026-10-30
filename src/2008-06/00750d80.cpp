// from server: 100% by auto
// roc 2008-06 00750d80  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00750d80
//
// 00750d80  8b4960               mov ecx, dword ptr [ecx + 0x60]
// 00750d83  85c9                 test ecx, ecx
// 00750d85  740f                 je 0x750d96
// 00750d87  e8c492f8ff           call 0x6da050
// 00750d8c  85c0                 test eax, eax
// 00750d8e  7e06                 jle 0x750d96
// 00750d90  b801000000           mov eax, 1
// 00750d95  c3                   ret 
// 00750d96  33c0                 xor eax, eax
// 00750d98  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportRow.cpp (function ?HasChildren@CXTPReportRow@@UBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRow.cpp
