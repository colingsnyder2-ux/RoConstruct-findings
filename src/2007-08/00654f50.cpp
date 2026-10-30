// from server: 100% by auto
// roc 2007-08 00654f50  unit: CInstanceRecord::CNameItem  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00654f50
//
// 00654f50  56                   push esi
// 00654f51  8bf1                 mov esi, ecx
// 00654f53  e848e9ffff           call 0x6538a0
// 00654f58  f644240801           test byte ptr [esp + 8], 1
// 00654f5d  742c                 je 0x654f8b
// 00654f5f  833d78878c0000       cmp dword ptr [0x8c8778], 0
// 00654f66  740f                 je 0x654f77
// 00654f68  56                   push esi
// 00654f69  e8428bdcff           call 0x41dab0
// 00654f6e  83c404               add esp, 4
// 00654f71  8bc6                 mov eax, esi
// 00654f73  5e                   pop esi
// 00654f74  c20400               ret 4
// 00654f77  6870878c00           push 0x8c8770
// 00654f7c  ff15e8d27700         call dword ptr [0x77d2e8]
// 00654f82  56                   push esi
// 00654f83  e8daacfdff           call 0x62fc62
// 00654f88  83c404               add esp, 4
// 00654f8b  8bc6                 mov eax, esi
// 00654f8d  5e                   pop esi
// 00654f8e  c20400               ret 4
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportControl.cpp (function ??_G?$CXTPHeapObjectT@VCXTPReportRows@@VCXTPReportAllocatorDefault@@@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportControl.cpp
