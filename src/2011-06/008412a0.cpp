// roc 2011-06 008412a0  unit: CXTPReportRecordItemDateTime  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008412a0
//
// 008412a0  56                   push esi
// 008412a1  57                   push edi
// 008412a2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 008412a6  57                   push edi
// 008412a7  8bf1                 mov esi, ecx
// 008412a9  e802f4ffff           call 0x8406b0
// 008412ae  83c67c               add esi, 0x7c
// 008412b1  56                   push esi
// 008412b2  680819a700           push 0xa71908
// 008412b7  57                   push edi
// 008412b8  e8b3ed0100           call 0x860070
// 008412bd  83c40c               add esp, 0xc
// 008412c0  5f                   pop edi
// 008412c1  5e                   pop esi
// 008412c2  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportRecordItemText.cpp (function ?DoPropExchange@CXTPReportRecordItemDateTime@@UAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRecordItemText.cpp
