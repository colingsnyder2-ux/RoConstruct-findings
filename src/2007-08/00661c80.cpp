// roc 2007-08 00661c80  unit: CXTPReportRecords  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00661c80
//
// 00661c80  56                   push esi
// 00661c81  8bf1                 mov esi, ecx
// 00661c83  e878ffffff           call 0x661c00
// 00661c88  f644240801           test byte ptr [esp + 8], 1
// 00661c8d  742c                 je 0x661cbb
// 00661c8f  833d78878c0000       cmp dword ptr [0x8c8778], 0
// 00661c96  740f                 je 0x661ca7
// 00661c98  56                   push esi
// 00661c99  e812bedbff           call 0x41dab0
// 00661c9e  83c404               add esp, 4
// 00661ca1  8bc6                 mov eax, esi
// 00661ca3  5e                   pop esi
// 00661ca4  c20400               ret 4
// 00661ca7  6870878c00           push 0x8c8770
// 00661cac  ff15e8d27700         call dword ptr [0x77d2e8]
// 00661cb2  56                   push esi
// 00661cb3  e8aadffcff           call 0x62fc62
// 00661cb8  83c404               add esp, 4
// 00661cbb  8bc6                 mov eax, esi
// 00661cbd  5e                   pop esi
// 00661cbe  c20400               ret 4
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportControl.cpp (function ??_G?$CXTPHeapObjectT@VCXTPReportRows@@VCXTPReportAllocatorDefault@@@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportControl.cpp
