// roc 2007-03 0064e020  unit: seg_00640000  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0064e020
//
// 0064e020  56                   push esi
// 0064e021  57                   push edi
// 0064e022  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0064e026  57                   push edi
// 0064e027  8bf1                 mov esi, ecx
// 0064e029  e8923dffff           call 0x641dc0
// 0064e02e  68ac497800           push 0x7849ac
// 0064e033  83c67c               add esi, 0x7c
// 0064e036  56                   push esi
// 0064e037  687cdd7b00           push 0x7bdd7c
// 0064e03c  57                   push edi
// 0064e03d  e87e8d0100           call 0x666dc0
// 0064e042  83c410               add esp, 0x10
// 0064e045  5f                   pop edi
// 0064e046  5e                   pop esi
// 0064e047  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportRecordItemText.cpp (function ?DoPropExchange@CXTPReportRecordItemText@@UAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRecordItemText.cpp
