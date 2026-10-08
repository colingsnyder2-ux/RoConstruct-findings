// roc 2010-06 007df4c0  unit: CXTPReportRecordItemText  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007df4c0
//
// 007df4c0  56                   push esi
// 007df4c1  57                   push edi
// 007df4c2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 007df4c6  57                   push edi
// 007df4c7  8bf1                 mov esi, ecx
// 007df4c9  e8020cffff           call 0x7d00d0
// 007df4ce  68fe08a000           push 0xa008fe
// 007df4d3  83c67c               add esi, 0x7c
// 007df4d6  56                   push esi
// 007df4d7  68d8dda300           push 0xa3ddd8
// 007df4dc  57                   push edi
// 007df4dd  e84e560200           call 0x804b30
// 007df4e2  83c410               add esp, 0x10
// 007df4e5  5f                   pop edi
// 007df4e6  5e                   pop esi
// 007df4e7  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportRecordItemText.cpp (function ?DoPropExchange@CXTPReportRecordItemText@@UAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRecordItemText.cpp
