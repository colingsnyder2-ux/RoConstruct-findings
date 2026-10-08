// roc 2009-06 00750680  unit: CXTPReportRecordItemText  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00750680
//
// 00750680  56                   push esi
// 00750681  57                   push edi
// 00750682  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00750686  57                   push edi
// 00750687  8bf1                 mov esi, ecx
// 00750689  e8220bffff           call 0x7411b0
// 0075068e  6816d28a00           push 0x8ad216
// 00750693  83c67c               add esi, 0x7c
// 00750696  56                   push esi
// 00750697  68a8478e00           push 0x8e47a8
// 0075069c  57                   push edi
// 0075069d  e8be560200           call 0x775d60
// 007506a2  83c410               add esp, 0x10
// 007506a5  5f                   pop edi
// 007506a6  5e                   pop esi
// 007506a7  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportRecordItemText.cpp (function ?DoPropExchange@CXTPReportRecordItemText@@UAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRecordItemText.cpp
