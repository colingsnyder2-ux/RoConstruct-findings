// roc 2011-06 0082fe10  unit: CXTPReportColumn  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0082fe10
//
// 0082fe10  56                   push esi
// 0082fe11  8bf1                 mov esi, ecx
// 0082fe13  e8c8ffffff           call 0x82fde0
// 0082fe18  56                   push esi
// 0082fe19  8bc8                 mov ecx, eax
// 0082fe1b  e8f0400000           call 0x833f10
// 0082fe20  5e                   pop esi
// 0082fe21  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportColumn.cpp (function ?EnsureVisible@CXTPReportColumn@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportColumn.cpp
