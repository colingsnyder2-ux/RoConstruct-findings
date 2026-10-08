// roc 2010-06 007dbb90  unit: CXTPReportControl  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007dbb90
//
// 007dbb90  8b4158               mov eax, dword ptr [ecx + 0x58]
// 007dbb93  33d2                 xor edx, edx
// 007dbb95  394840               cmp dword ptr [eax + 0x40], ecx
// 007dbb98  0f94c2               sete dl
// 007dbb9b  8bc2                 mov eax, edx
// 007dbb9d  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportColumn.cpp (function ?IsTreeColumn@CXTPReportColumn@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportColumn.cpp
