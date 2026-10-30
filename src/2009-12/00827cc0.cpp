// roc 2009-12 00827cc0  unit: CXTPReportColumn  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00827cc0
//
// 00827cc0  56                   push esi
// 00827cc1  8bf1                 mov esi, ecx
// 00827cc3  e8c8ffffff           call 0x827c90
// 00827cc8  56                   push esi
// 00827cc9  8bc8                 mov ecx, eax
// 00827ccb  e85080ffff           call 0x81fd20
// 00827cd0  5e                   pop esi
// 00827cd1  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportColumn.cpp (function ?EnsureVisible@CXTPReportColumn@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportColumn.cpp
