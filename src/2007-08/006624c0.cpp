// from server: 100% by auto
// roc 2007-08 006624c0  unit: CXTPReportRecordItemNumber  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006624c0
//
// 006624c0  56                   push esi
// 006624c1  57                   push edi
// 006624c2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006624c6  57                   push edi
// 006624c7  8bf1                 mov esi, ecx
// 006624c9  e88231ffff           call 0x655650
// 006624ce  81c680000000         add esi, 0x80
// 006624d4  56                   push esi
// 006624d5  68c41e7900           push 0x791ec4
// 006624da  57                   push edi
// 006624db  e800330200           call 0x6857e0
// 006624e0  83c40c               add esp, 0xc
// 006624e3  5f                   pop edi
// 006624e4  5e                   pop esi
// 006624e5  c20400               ret 4
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportRecordItemText.cpp (function ?DoPropExchange@CXTPReportRecordItemNumber@@UAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportRecordItemText.cpp
