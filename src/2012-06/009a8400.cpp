// roc 2012-06 009a8400  unit: CXTPReportColumn  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009a8400
//
// 009a8400  56                   push esi
// 009a8401  8bf1                 mov esi, ecx
// 009a8403  e8c8ffffff           call 0x9a83d0
// 009a8408  56                   push esi
// 009a8409  8bc8                 mov ecx, eax
// 009a840b  e800410000           call 0x9ac510
// 009a8410  5e                   pop esi
// 009a8411  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportColumn.cpp (function ?EnsureVisible@CXTPReportColumn@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportColumn.cpp
