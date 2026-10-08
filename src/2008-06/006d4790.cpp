// from server: 100% by auto
// roc 2008-06 006d4790  unit: CXTPReportColumn  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006d4790
//
// 006d4790  56                   push esi
// 006d4791  8bf1                 mov esi, ecx
// 006d4793  e8b8ffffff           call 0x6d4750
// 006d4798  56                   push esi
// 006d4799  8bc8                 mov ecx, eax
// 006d479b  e83080ffff           call 0x6cc7d0
// 006d47a0  5e                   pop esi
// 006d47a1  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportColumn.cpp (function ?EnsureVisible@CXTPReportColumn@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportColumn.cpp
