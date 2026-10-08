// roc 2011-06 008413f0  unit: CXTPReportRecordItemPreview  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008413f0
//
// 008413f0  56                   push esi
// 008413f1  57                   push edi
// 008413f2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 008413f6  57                   push edi
// 008413f7  8bf1                 mov esi, ecx
// 008413f9  e8b2f2ffff           call 0x8406b0
// 008413fe  83c67c               add esi, 0x7c
// 00841401  56                   push esi
// 00841402  68d85dac00           push 0xac5dd8
// 00841407  57                   push edi
// 00841408  e8d3eb0100           call 0x85ffe0
// 0084140d  83c40c               add esp, 0xc
// 00841410  5f                   pop edi
// 00841411  5e                   pop esi
// 00841412  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportRecordItemText.cpp (function ?DoPropExchange@CXTPReportRecordItemPreview@@UAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRecordItemText.cpp
