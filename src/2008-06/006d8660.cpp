// from server: 100% by auto
// roc 2008-06 006d8660  unit: CXTPReportRecordItemText  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006d8660
//
// 006d8660  56                   push esi
// 006d8661  57                   push edi
// 006d8662  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006d8666  57                   push edi
// 006d8667  8bf1                 mov esi, ecx
// 006d8669  e84205ffff           call 0x6c8bb0
// 006d866e  6816b78000           push 0x80b716
// 006d8673  83c67c               add esi, 0x7c
// 006d8676  56                   push esi
// 006d8677  681cdb8300           push 0x83db1c
// 006d867c  57                   push edi
// 006d867d  e87e4d0200           call 0x6fd400
// 006d8682  83c410               add esp, 0x10
// 006d8685  5f                   pop edi
// 006d8686  5e                   pop esi
// 006d8687  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportRecordItemText.cpp (function ?DoPropExchange@CXTPReportRecordItemText@@UAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRecordItemText.cpp
