// roc 2007-08 006d2f50  unit: CXTPReportHyperlinks  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d2f50
//
// 006d2f50  56                   push esi
// 006d2f51  8bf1                 mov esi, ecx
// 006d2f53  e8a8fdffff           call 0x6d2d00
// 006d2f58  f644240801           test byte ptr [esp + 8], 1
// 006d2f5d  742c                 je 0x6d2f8b
// 006d2f5f  833d78878c0000       cmp dword ptr [0x8c8778], 0
// 006d2f66  740f                 je 0x6d2f77
// 006d2f68  56                   push esi
// 006d2f69  e842abd4ff           call 0x41dab0
// 006d2f6e  83c404               add esp, 4
// 006d2f71  8bc6                 mov eax, esi
// 006d2f73  5e                   pop esi
// 006d2f74  c20400               ret 4
// 006d2f77  6870878c00           push 0x8c8770
// 006d2f7c  ff15e8d27700         call dword ptr [0x77d2e8]
// 006d2f82  56                   push esi
// 006d2f83  e8daccf5ff           call 0x62fc62
// 006d2f88  83c404               add esp, 4
// 006d2f8b  8bc6                 mov eax, esi
// 006d2f8d  5e                   pop esi
// 006d2f8e  c20400               ret 4
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportControl.cpp (function ??_G?$CXTPHeapObjectT@VCXTPReportRows@@VCXTPReportAllocatorDefault@@@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportControl.cpp
