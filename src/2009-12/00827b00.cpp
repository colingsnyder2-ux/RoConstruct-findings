// roc 2009-12 00827b00  unit: CXTPReportControl  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00827b00
//
// 00827b00  8bc1                 mov eax, ecx
// 00827b02  8b4858               mov ecx, dword ptr [eax + 0x58]
// 00827b05  8b4924               mov ecx, dword ptr [ecx + 0x24]
// 00827b08  50                   push eax
// 00827b09  e8d25a0400           call 0x86d5e0
// 00827b0e  33d2                 xor edx, edx
// 00827b10  83f8ff               cmp eax, -1
// 00827b13  0f95c2               setne dl
// 00827b16  8bc2                 mov eax, edx
// 00827b18  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportColumn.cpp (function ?IsSorted@CXTPReportColumn@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportColumn.cpp
