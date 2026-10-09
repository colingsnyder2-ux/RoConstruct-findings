// roc 2007-03 0064e340  unit: seg_00640000  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0064e340
//
// 0064e340  56                   push esi
// 0064e341  57                   push edi
// 0064e342  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0064e346  57                   push edi
// 0064e347  8bf1                 mov esi, ecx
// 0064e349  e8723affff           call 0x641dc0
// 0064e34e  83c67c               add esi, 0x7c
// 0064e351  56                   push esi
// 0064e352  68600c7900           push 0x790c60
// 0064e357  57                   push edi
// 0064e358  e8a38a0100           call 0x666e00
// 0064e35d  83c40c               add esp, 0xc
// 0064e360  5f                   pop edi
// 0064e361  5e                   pop esi
// 0064e362  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportRecordItemText.cpp (function ?DoPropExchange@CXTPReportRecordItemDateTime@@UAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRecordItemText.cpp
