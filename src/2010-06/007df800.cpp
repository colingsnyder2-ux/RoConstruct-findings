// roc 2010-06 007df800  unit: CXTPReportRecordItemPreview  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007df800
//
// 007df800  56                   push esi
// 007df801  57                   push edi
// 007df802  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 007df806  57                   push edi
// 007df807  8bf1                 mov esi, ecx
// 007df809  e8c208ffff           call 0x7d00d0
// 007df80e  83c67c               add esi, 0x7c
// 007df811  56                   push esi
// 007df812  6890a1a500           push 0xa5a190
// 007df817  57                   push edi
// 007df818  e8e3520200           call 0x804b00
// 007df81d  83c40c               add esp, 0xc
// 007df820  5f                   pop edi
// 007df821  5e                   pop esi
// 007df822  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportRecordItemText.cpp (function ?DoPropExchange@CXTPReportRecordItemPreview@@UAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRecordItemText.cpp
