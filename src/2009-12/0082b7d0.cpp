// roc 2009-12 0082b7d0  unit: CXTPReportRecordItemPreview  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0082b7d0
//
// 0082b7d0  56                   push esi
// 0082b7d1  57                   push edi
// 0082b7d2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0082b7d6  57                   push edi
// 0082b7d7  8bf1                 mov esi, ecx
// 0082b7d9  e88208ffff           call 0x81c060
// 0082b7de  83c67c               add esi, 0x7c
// 0082b7e1  56                   push esi
// 0082b7e2  68a85e9f00           push 0x9f5ea8
// 0082b7e7  57                   push edi
// 0082b7e8  e8a3520200           call 0x850a90
// 0082b7ed  83c40c               add esp, 0xc
// 0082b7f0  5f                   pop edi
// 0082b7f1  5e                   pop esi
// 0082b7f2  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportRecordItemText.cpp (function ?DoPropExchange@CXTPReportRecordItemPreview@@UAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRecordItemText.cpp
