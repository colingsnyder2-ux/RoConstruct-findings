// roc 2007-03 0064e480  unit: seg_00640000  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0064e480
//
// 0064e480  56                   push esi
// 0064e481  57                   push edi
// 0064e482  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0064e486  57                   push edi
// 0064e487  8bf1                 mov esi, ecx
// 0064e489  e83239ffff           call 0x641dc0
// 0064e48e  83c67c               add esi, 0x7c
// 0064e491  56                   push esi
// 0064e492  681c657c00           push 0x7c651c
// 0064e497  57                   push edi
// 0064e498  e803890100           call 0x666da0
// 0064e49d  83c40c               add esp, 0xc
// 0064e4a0  5f                   pop edi
// 0064e4a1  5e                   pop esi
// 0064e4a2  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportRecordItemText.cpp (function ?DoPropExchange@CXTPReportRecordItemPreview@@UAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRecordItemText.cpp
