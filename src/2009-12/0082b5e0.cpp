// roc 2009-12 0082b5e0  unit: CXTPReportRecordItemNumber  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0082b5e0
//
// 0082b5e0  56                   push esi
// 0082b5e1  57                   push edi
// 0082b5e2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0082b5e6  57                   push edi
// 0082b5e7  8bf1                 mov esi, ecx
// 0082b5e9  e8720affff           call 0x81c060
// 0082b5ee  83ee80               sub esi, -0x80
// 0082b5f1  56                   push esi
// 0082b5f2  684cd59a00           push 0x9ad54c
// 0082b5f7  57                   push edi
// 0082b5f8  e8f3540200           call 0x850af0
// 0082b5fd  83c40c               add esp, 0xc
// 0082b600  5f                   pop edi
// 0082b601  5e                   pop esi
// 0082b602  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportRecordItemText.cpp (function ?DoPropExchange@CXTPReportRecordItemNumber@@UAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRecordItemText.cpp
