// roc 2011-06 0082fc40  unit: CXTPReportView  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0082fc40
//
// 0082fc40  8bc1                 mov eax, ecx
// 0082fc42  8b4858               mov ecx, dword ptr [eax + 0x58]
// 0082fc45  8b4924               mov ecx, dword ptr [ecx + 0x24]
// 0082fc48  50                   push eax
// 0082fc49  e832de0400           call 0x87da80
// 0082fc4e  33d2                 xor edx, edx
// 0082fc50  83f8ff               cmp eax, -1
// 0082fc53  0f95c2               setne dl
// 0082fc56  8bc2                 mov eax, edx
// 0082fc58  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportColumn.cpp (function ?IsSorted@CXTPReportColumn@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportColumn.cpp
