// roc 2009-06 00750810  unit: CXTPReportRecordItemNumber  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00750810
//
// 00750810  56                   push esi
// 00750811  57                   push edi
// 00750812  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00750816  57                   push edi
// 00750817  8bf1                 mov esi, ecx
// 00750819  e89209ffff           call 0x7411b0
// 0075081e  83ee80               sub esi, -0x80
// 00750821  56                   push esi
// 00750822  686c908b00           push 0x8b906c
// 00750827  57                   push edi
// 00750828  e863550200           call 0x775d90
// 0075082d  83c40c               add esp, 0xc
// 00750830  5f                   pop edi
// 00750831  5e                   pop esi
// 00750832  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportRecordItemText.cpp (function ?DoPropExchange@CXTPReportRecordItemNumber@@UAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRecordItemText.cpp
