// roc 2009-12 0082b680  unit: CXTPReportRecordItemDateTime  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0082b680
//
// 0082b680  56                   push esi
// 0082b681  57                   push edi
// 0082b682  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0082b686  57                   push edi
// 0082b687  8bf1                 mov esi, ecx
// 0082b689  e8d209ffff           call 0x81c060
// 0082b68e  83c67c               add esi, 0x7c
// 0082b691  56                   push esi
// 0082b692  684cd59a00           push 0x9ad54c
// 0082b697  57                   push edi
// 0082b698  e883540200           call 0x850b20
// 0082b69d  83c40c               add esp, 0xc
// 0082b6a0  5f                   pop edi
// 0082b6a1  5e                   pop esi
// 0082b6a2  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportRecordItemText.cpp (function ?DoPropExchange@CXTPReportRecordItemDateTime@@UAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRecordItemText.cpp
