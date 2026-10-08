// roc 2009-06 0074cd20  unit: CXTPReportControl  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0074cd20
//
// 0074cd20  8bc1                 mov eax, ecx
// 0074cd22  8b4858               mov ecx, dword ptr [eax + 0x58]
// 0074cd25  8b4924               mov ecx, dword ptr [ecx + 0x24]
// 0074cd28  50                   push eax
// 0074cd29  e892580400           call 0x7925c0
// 0074cd2e  33d2                 xor edx, edx
// 0074cd30  83f8ff               cmp eax, -1
// 0074cd33  0f95c2               setne dl
// 0074cd36  8bc2                 mov eax, edx
// 0074cd38  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportColumn.cpp (function ?IsSorted@CXTPReportColumn@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportColumn.cpp
