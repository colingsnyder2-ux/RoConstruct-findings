// roc 2012-06 009a8240  unit: CXTPReportView  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009a8240
//
// 009a8240  8bc1                 mov eax, ecx
// 009a8242  8b4858               mov ecx, dword ptr [eax + 0x58]
// 009a8245  8b4924               mov ecx, dword ptr [ecx + 0x24]
// 009a8248  50                   push eax
// 009a8249  e8e2dd0400           call 0x9f6030
// 009a824e  33d2                 xor edx, edx
// 009a8250  83f8ff               cmp eax, -1
// 009a8253  0f95c2               setne dl
// 009a8256  8bc2                 mov eax, edx
// 009a8258  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportColumn.cpp (function ?IsSorted@CXTPReportColumn@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportColumn.cpp
