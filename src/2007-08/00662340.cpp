// from server: 100% by auto
// roc 2007-08 00662340  unit: CXTPReportRecordItemText  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00662340
//
// 00662340  56                   push esi
// 00662341  57                   push edi
// 00662342  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00662346  57                   push edi
// 00662347  8bf1                 mov esi, ecx
// 00662349  e80233ffff           call 0x655650
// 0066234e  6854597800           push 0x785954
// 00662353  83c67c               add esi, 0x7c
// 00662356  56                   push esi
// 00662357  68d8007c00           push 0x7c00d8
// 0066235c  57                   push edi
// 0066235d  e85e340200           call 0x6857c0
// 00662362  83c410               add esp, 0x10
// 00662365  5f                   pop edi
// 00662366  5e                   pop esi
// 00662367  c20400               ret 4
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportRecordItemText.cpp (function ?DoPropExchange@CXTPReportRecordItemText@@UAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportRecordItemText.cpp
