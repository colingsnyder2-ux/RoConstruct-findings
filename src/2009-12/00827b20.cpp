// roc 2009-12 00827b20  unit: CXTPReportControl  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00827b20
//
// 00827b20  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00827b23  33d2                 xor edx, edx
// 00827b25  394840               cmp dword ptr [eax + 0x40], ecx
// 00827b28  0f94c2               sete dl
// 00827b2b  8bc2                 mov eax, edx
// 00827b2d  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportColumn.cpp (function ?IsTreeColumn@CXTPReportColumn@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportColumn.cpp
