// roc 2010-06 007dbb70  unit: CXTPReportControl  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007dbb70
//
// 007dbb70  8bc1                 mov eax, ecx
// 007dbb72  8b4858               mov ecx, dword ptr [eax + 0x58]
// 007dbb75  8b4924               mov ecx, dword ptr [ecx + 0x24]
// 007dbb78  50                   push eax
// 007dbb79  e8f2470400           call 0x820370
// 007dbb7e  33d2                 xor edx, edx
// 007dbb80  83f8ff               cmp eax, -1
// 007dbb83  0f95c2               setne dl
// 007dbb86  8bc2                 mov eax, edx
// 007dbb88  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportColumn.cpp (function ?IsSorted@CXTPReportColumn@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportColumn.cpp
