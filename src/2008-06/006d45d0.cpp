// roc 2008-06 006d45d0  unit: CXTPReportControl  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006d45d0
//
// 006d45d0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 006d45d3  33d2                 xor edx, edx
// 006d45d5  394840               cmp dword ptr [eax + 0x40], ecx
// 006d45d8  0f94c2               sete dl
// 006d45db  8bc2                 mov eax, edx
// 006d45dd  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportColumn.cpp (function ?IsTreeColumn@CXTPReportColumn@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportColumn.cpp
