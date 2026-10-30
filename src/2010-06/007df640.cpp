// roc 2010-06 007df640  unit: CXTPReportRecordItemNumber  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007df640
//
// 007df640  56                   push esi
// 007df641  57                   push edi
// 007df642  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 007df646  57                   push edi
// 007df647  8bf1                 mov esi, ecx
// 007df649  e8820affff           call 0x7d00d0
// 007df64e  83ee80               sub esi, -0x80
// 007df651  56                   push esi
// 007df652  684ce4a000           push 0xa0e44c
// 007df657  57                   push edi
// 007df658  e803550200           call 0x804b60
// 007df65d  83c40c               add esp, 0xc
// 007df660  5f                   pop edi
// 007df661  5e                   pop esi
// 007df662  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportRecordItemText.cpp (function ?DoPropExchange@CXTPReportRecordItemNumber@@UAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRecordItemText.cpp
