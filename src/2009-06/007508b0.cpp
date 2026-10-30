// roc 2009-06 007508b0  unit: CXTPReportRecordItemDateTime  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007508b0
//
// 007508b0  56                   push esi
// 007508b1  57                   push edi
// 007508b2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 007508b6  57                   push edi
// 007508b7  8bf1                 mov esi, ecx
// 007508b9  e8f208ffff           call 0x7411b0
// 007508be  83c67c               add esi, 0x7c
// 007508c1  56                   push esi
// 007508c2  686c908b00           push 0x8b906c
// 007508c7  57                   push edi
// 007508c8  e8f3540200           call 0x775dc0
// 007508cd  83c40c               add esp, 0xc
// 007508d0  5f                   pop edi
// 007508d1  5e                   pop esi
// 007508d2  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportRecordItemText.cpp (function ?DoPropExchange@CXTPReportRecordItemDateTime@@UAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRecordItemText.cpp
