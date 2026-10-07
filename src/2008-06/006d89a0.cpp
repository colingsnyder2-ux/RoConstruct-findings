// roc 2008-06 006d89a0  unit: CXTPReportRecordItemPreview  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006d89a0
//
// 006d89a0  56                   push esi
// 006d89a1  57                   push edi
// 006d89a2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006d89a6  57                   push edi
// 006d89a7  8bf1                 mov esi, ecx
// 006d89a9  e80202ffff           call 0x6c8bb0
// 006d89ae  83c67c               add esi, 0x7c
// 006d89b1  56                   push esi
// 006d89b2  68784a8500           push 0x854a78
// 006d89b7  57                   push edi
// 006d89b8  e8134a0200           call 0x6fd3d0
// 006d89bd  83c40c               add esp, 0xc
// 006d89c0  5f                   pop edi
// 006d89c1  5e                   pop esi
// 006d89c2  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportRecordItemText.cpp (function ?DoPropExchange@CXTPReportRecordItemPreview@@UAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRecordItemText.cpp
