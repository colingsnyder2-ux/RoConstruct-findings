// from server: 100% by auto
// roc 2007-08 006d2680  unit: CXTPReportHyperlink  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d2680
//
// 006d2680  56                   push esi
// 006d2681  57                   push edi
// 006d2682  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006d2686  8bf1                 mov esi, ecx
// 006d2688  8d4630               lea eax, [esi + 0x30]
// 006d268b  50                   push eax
// 006d268c  68e8807d00           push 0x7d80e8
// 006d2691  57                   push edi
// 006d2692  e8a930fbff           call 0x685740
// 006d2697  83c634               add esi, 0x34
// 006d269a  56                   push esi
// 006d269b  68d8807d00           push 0x7d80d8
// 006d26a0  57                   push edi
// 006d26a1  e89a30fbff           call 0x685740
// 006d26a6  83c418               add esp, 0x18
// 006d26a9  5f                   pop edi
// 006d26aa  5e                   pop esi
// 006d26ab  c20400               ret 4
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportHyperlink.cpp (function ?DoPropExchange@CXTPReportHyperlink@@UAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportHyperlink.cpp
