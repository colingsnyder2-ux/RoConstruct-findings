// roc 2011-06 00841080  unit: CXTPReportRecordItemText  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00841080
//
// 00841080  56                   push esi
// 00841081  57                   push edi
// 00841082  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00841086  57                   push edi
// 00841087  8bf1                 mov esi, ecx
// 00841089  e822f6ffff           call 0x8406b0
// 0084108e  68cabea500           push 0xa5beca
// 00841093  83c67c               add esi, 0x7c
// 00841096  56                   push esi
// 00841097  68b4fea900           push 0xa9feb4
// 0084109c  57                   push edi
// 0084109d  e86eef0100           call 0x860010
// 008410a2  83c410               add esp, 0x10
// 008410a5  5f                   pop edi
// 008410a6  5e                   pop esi
// 008410a7  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportRecordItemText.cpp (function ?DoPropExchange@CXTPReportRecordItemText@@UAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRecordItemText.cpp
