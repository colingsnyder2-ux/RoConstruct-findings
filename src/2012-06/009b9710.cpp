// roc 2012-06 009b9710  unit: CXTPReportRecordItemDateTime  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009b9710
//
// 009b9710  56                   push esi
// 009b9711  57                   push edi
// 009b9712  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 009b9716  57                   push edi
// 009b9717  8bf1                 mov esi, ecx
// 009b9719  e802f4ffff           call 0x9b8b20
// 009b971e  83c67c               add esi, 0x7c
// 009b9721  56                   push esi
// 009b9722  6888d7b500           push 0xb5d788
// 009b9727  57                   push edi
// 009b9728  e843ed0100           call 0x9d8470
// 009b972d  83c40c               add esp, 0xc
// 009b9730  5f                   pop edi
// 009b9731  5e                   pop esi
// 009b9732  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportRecordItemText.cpp (function ?DoPropExchange@CXTPReportRecordItemDateTime@@UAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRecordItemText.cpp
