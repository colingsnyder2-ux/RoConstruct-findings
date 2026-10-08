// roc 2012-06 00a2b640  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a2b640
//
// 00a2b640  8b4960               mov ecx, dword ptr [ecx + 0x60]
// 00a2b643  85c9                 test ecx, ecx
// 00a2b645  740f                 je 0xa2b656
// 00a2b647  e824f6f8ff           call 0x9bac70
// 00a2b64c  85c0                 test eax, eax
// 00a2b64e  7e06                 jle 0xa2b656
// 00a2b650  b801000000           mov eax, 1
// 00a2b655  c3                   ret 
// 00a2b656  33c0                 xor eax, eax
// 00a2b658  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportRow.cpp (function ?HasChildren@CXTPReportRow@@UBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRow.cpp
