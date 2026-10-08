// roc 2012-06 009b9670  unit: CXTPReportRecordItemNumber  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009b9670
//
// 009b9670  56                   push esi
// 009b9671  57                   push edi
// 009b9672  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 009b9676  57                   push edi
// 009b9677  8bf1                 mov esi, ecx
// 009b9679  e8a2f4ffff           call 0x9b8b20
// 009b967e  83ee80               sub esi, -0x80
// 009b9681  56                   push esi
// 009b9682  6888d7b500           push 0xb5d788
// 009b9687  57                   push edi
// 009b9688  e8b3ed0100           call 0x9d8440
// 009b968d  83c40c               add esp, 0xc
// 009b9690  5f                   pop edi
// 009b9691  5e                   pop esi
// 009b9692  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportRecordItemText.cpp (function ?DoPropExchange@CXTPReportRecordItemNumber@@UAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRecordItemText.cpp
