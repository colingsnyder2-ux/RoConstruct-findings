// roc 2009-06 0074cd40  unit: CXTPReportControl  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0074cd40
//
// 0074cd40  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0074cd43  33d2                 xor edx, edx
// 0074cd45  394840               cmp dword ptr [eax + 0x40], ecx
// 0074cd48  0f94c2               sete dl
// 0074cd4b  8bc2                 mov eax, edx
// 0074cd4d  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportColumn.cpp (function ?IsTreeColumn@CXTPReportColumn@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportColumn.cpp
