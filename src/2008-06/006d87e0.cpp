// roc 2008-06 006d87e0  unit: CXTPReportRecordItemNumber  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006d87e0
//
// 006d87e0  56                   push esi
// 006d87e1  57                   push edi
// 006d87e2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006d87e6  57                   push edi
// 006d87e7  8bf1                 mov esi, ecx
// 006d87e9  e8c203ffff           call 0x6c8bb0
// 006d87ee  83ee80               sub esi, -0x80
// 006d87f1  56                   push esi
// 006d87f2  6878848100           push 0x818478
// 006d87f7  57                   push edi
// 006d87f8  e8334c0200           call 0x6fd430
// 006d87fd  83c40c               add esp, 0xc
// 006d8800  5f                   pop edi
// 006d8801  5e                   pop esi
// 006d8802  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportRecordItemText.cpp (function ?DoPropExchange@CXTPReportRecordItemNumber@@UAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRecordItemText.cpp
