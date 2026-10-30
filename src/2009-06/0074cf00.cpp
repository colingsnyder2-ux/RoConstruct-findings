// roc 2009-06 0074cf00  unit: CXTPReportColumn  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0074cf00
//
// 0074cf00  56                   push esi
// 0074cf01  8bf1                 mov esi, ecx
// 0074cf03  e8c8ffffff           call 0x74ced0
// 0074cf08  56                   push esi
// 0074cf09  8bc8                 mov ecx, eax
// 0074cf0b  e80080ffff           call 0x744f10
// 0074cf10  5e                   pop esi
// 0074cf11  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportColumn.cpp (function ?EnsureVisible@CXTPReportColumn@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportColumn.cpp
