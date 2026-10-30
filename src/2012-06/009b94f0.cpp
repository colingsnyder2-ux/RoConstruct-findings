// roc 2012-06 009b94f0  unit: CXTPReportRecordItemText  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009b94f0
//
// 009b94f0  56                   push esi
// 009b94f1  57                   push edi
// 009b94f2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 009b94f6  57                   push edi
// 009b94f7  8bf1                 mov esi, ecx
// 009b94f9  e822f6ffff           call 0x9b8b20
// 009b94fe  68e83bb400           push 0xb43be8
// 009b9503  83c67c               add esi, 0x7c
// 009b9506  56                   push esi
// 009b9507  68cc8bba00           push 0xba8bcc
// 009b950c  57                   push edi
// 009b950d  e8feee0100           call 0x9d8410
// 009b9512  83c410               add esp, 0x10
// 009b9515  5f                   pop edi
// 009b9516  5e                   pop esi
// 009b9517  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportRecordItemText.cpp (function ?DoPropExchange@CXTPReportRecordItemText@@UAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRecordItemText.cpp
