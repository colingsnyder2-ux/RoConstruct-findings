// roc 2008-06 006d45b0  unit: CXTPReportControl  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006d45b0
//
// 006d45b0  8bc1                 mov eax, ecx
// 006d45b2  8b4858               mov ecx, dword ptr [eax + 0x58]
// 006d45b5  8b4924               mov ecx, dword ptr [ecx + 0x24]
// 006d45b8  50                   push eax
// 006d45b9  e862b50700           call 0x74fb20
// 006d45be  33d2                 xor edx, edx
// 006d45c0  83f8ff               cmp eax, -1
// 006d45c3  0f95c2               setne dl
// 006d45c6  8bc2                 mov eax, edx
// 006d45c8  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportColumn.cpp (function ?IsSorted@CXTPReportColumn@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportColumn.cpp
