// roc 2007-08 006626c0  unit: CXTPReportRecordItemPreview  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006626c0
//
// 006626c0  56                   push esi
// 006626c1  57                   push edi
// 006626c2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006626c6  57                   push edi
// 006626c7  8bf1                 mov esi, ecx
// 006626c9  e8822fffff           call 0x655650
// 006626ce  83c67c               add esi, 0x7c
// 006626d1  56                   push esi
// 006626d2  6898937c00           push 0x7c9398
// 006626d7  57                   push edi
// 006626d8  e8c3300200           call 0x6857a0
// 006626dd  83c40c               add esp, 0xc
// 006626e0  5f                   pop edi
// 006626e1  5e                   pop esi
// 006626e2  c20400               ret 4
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportRecordItemText.cpp (function ?DoPropExchange@CXTPReportRecordItemPreview@@UAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportRecordItemText.cpp
