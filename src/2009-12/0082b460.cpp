// roc 2009-12 0082b460  unit: CXTPReportRecordItemText  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0082b460
//
// 0082b460  56                   push esi
// 0082b461  57                   push edi
// 0082b462  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0082b466  57                   push edi
// 0082b467  8bf1                 mov esi, ecx
// 0082b469  e8f20bffff           call 0x81c060
// 0082b46e  6856fd9900           push 0x99fd56
// 0082b473  83c67c               add esi, 0x7c
// 0082b476  56                   push esi
// 0082b477  6860e49d00           push 0x9de460
// 0082b47c  57                   push edi
// 0082b47d  e83e560200           call 0x850ac0
// 0082b482  83c410               add esp, 0x10
// 0082b485  5f                   pop edi
// 0082b486  5e                   pop esi
// 0082b487  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportRecordItemText.cpp (function ?DoPropExchange@CXTPReportRecordItemText@@UAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRecordItemText.cpp
