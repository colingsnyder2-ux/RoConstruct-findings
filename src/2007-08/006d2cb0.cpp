// roc 2007-08 006d2cb0  unit: CXTPReportHyperlink  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d2cb0
//
// 006d2cb0  56                   push esi
// 006d2cb1  8bf1                 mov esi, ecx
// 006d2cb3  e8b8f9ffff           call 0x6d2670
// 006d2cb8  f644240801           test byte ptr [esp + 8], 1
// 006d2cbd  742c                 je 0x6d2ceb
// 006d2cbf  833d78878c0000       cmp dword ptr [0x8c8778], 0
// 006d2cc6  740f                 je 0x6d2cd7
// 006d2cc8  56                   push esi
// 006d2cc9  e8e2add4ff           call 0x41dab0
// 006d2cce  83c404               add esp, 4
// 006d2cd1  8bc6                 mov eax, esi
// 006d2cd3  5e                   pop esi
// 006d2cd4  c20400               ret 4
// 006d2cd7  6870878c00           push 0x8c8770
// 006d2cdc  ff15e8d27700         call dword ptr [0x77d2e8]
// 006d2ce2  56                   push esi
// 006d2ce3  e87acff5ff           call 0x62fc62
// 006d2ce8  83c404               add esp, 4
// 006d2ceb  8bc6                 mov eax, esi
// 006d2ced  5e                   pop esi
// 006d2cee  c20400               ret 4
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportControl.cpp (function ??_G?$CXTPHeapObjectT@VCXTPReportRows@@VCXTPReportAllocatorDefault@@@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportControl.cpp
