// roc 2012-06 009b9810  unit: CXTPReportRecordItemPreview  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009b9810
//
// 009b9810  56                   push esi
// 009b9811  57                   push edi
// 009b9812  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 009b9816  57                   push edi
// 009b9817  8bf1                 mov esi, ecx
// 009b9819  e802f3ffff           call 0x9b8b20
// 009b981e  83c67c               add esi, 0x7c
// 009b9821  56                   push esi
// 009b9822  68c014c100           push 0xc114c0
// 009b9827  57                   push edi
// 009b9828  e8b3eb0100           call 0x9d83e0
// 009b982d  83c40c               add esp, 0xc
// 009b9830  5f                   pop edi
// 009b9831  5e                   pop esi
// 009b9832  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportRecordItemText.cpp (function ?DoPropExchange@CXTPReportRecordItemPreview@@UAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRecordItemText.cpp
