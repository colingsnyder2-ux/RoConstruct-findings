// roc 2011-06 0082fc60  unit: CXTPReportView  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0082fc60
//
// 0082fc60  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0082fc63  33d2                 xor edx, edx
// 0082fc65  394840               cmp dword ptr [eax + 0x40], ecx
// 0082fc68  0f94c2               sete dl
// 0082fc6b  8bc2                 mov eax, edx
// 0082fc6d  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportColumn.cpp (function ?IsTreeColumn@CXTPReportColumn@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportColumn.cpp
