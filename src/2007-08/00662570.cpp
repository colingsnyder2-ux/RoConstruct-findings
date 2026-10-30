// from server: 100% by auto
// roc 2007-08 00662570  unit: CXTPReportRecordItemDateTime  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00662570
//
// 00662570  56                   push esi
// 00662571  57                   push edi
// 00662572  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00662576  57                   push edi
// 00662577  8bf1                 mov esi, ecx
// 00662579  e8d230ffff           call 0x655650
// 0066257e  83c67c               add esi, 0x7c
// 00662581  56                   push esi
// 00662582  68c41e7900           push 0x791ec4
// 00662587  57                   push edi
// 00662588  e873320200           call 0x685800
// 0066258d  83c40c               add esp, 0xc
// 00662590  5f                   pop edi
// 00662591  5e                   pop esi
// 00662592  c20400               ret 4
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportRecordItemText.cpp (function ?DoPropExchange@CXTPReportRecordItemDateTime@@UAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportRecordItemText.cpp
