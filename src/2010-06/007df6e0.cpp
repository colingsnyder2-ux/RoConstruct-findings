// roc 2010-06 007df6e0  unit: CXTPReportRecordItemDateTime  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007df6e0
//
// 007df6e0  56                   push esi
// 007df6e1  57                   push edi
// 007df6e2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 007df6e6  57                   push edi
// 007df6e7  8bf1                 mov esi, ecx
// 007df6e9  e8e209ffff           call 0x7d00d0
// 007df6ee  83c67c               add esi, 0x7c
// 007df6f1  56                   push esi
// 007df6f2  684ce4a000           push 0xa0e44c
// 007df6f7  57                   push edi
// 007df6f8  e893540200           call 0x804b90
// 007df6fd  83c40c               add esp, 0xc
// 007df700  5f                   pop edi
// 007df701  5e                   pop esi
// 007df702  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportRecordItemText.cpp (function ?DoPropExchange@CXTPReportRecordItemDateTime@@UAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRecordItemText.cpp
