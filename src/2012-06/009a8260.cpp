// roc 2012-06 009a8260  unit: CXTPReportView  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009a8260
//
// 009a8260  8b4158               mov eax, dword ptr [ecx + 0x58]
// 009a8263  33d2                 xor edx, edx
// 009a8265  394840               cmp dword ptr [eax + 0x40], ecx
// 009a8268  0f94c2               sete dl
// 009a826b  8bc2                 mov eax, edx
// 009a826d  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportColumn.cpp (function ?IsTreeColumn@CXTPReportColumn@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportColumn.cpp
