// roc 2007-08 0065bdd0  unit: VCXTPReportRecords::?$CXTPHeapObjectT  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0065bdd0
//
// 0065bdd0  56                   push esi
// 0065bdd1  8bf1                 mov esi, ecx
// 0065bdd3  e8285e0000           call 0x661c00
// 0065bdd8  f644240801           test byte ptr [esp + 8], 1
// 0065bddd  742c                 je 0x65be0b
// 0065bddf  833d98878c0000       cmp dword ptr [0x8c8798], 0
// 0065bde6  740f                 je 0x65bdf7
// 0065bde8  56                   push esi
// 0065bde9  e812e1ffff           call 0x659f00
// 0065bdee  83c404               add esp, 4
// 0065bdf1  8bc6                 mov eax, esi
// 0065bdf3  5e                   pop esi
// 0065bdf4  c20400               ret 4
// 0065bdf7  6890878c00           push 0x8c8790
// 0065bdfc  ff15e8d27700         call dword ptr [0x77d2e8]
// 0065be02  56                   push esi
// 0065be03  e85a3efdff           call 0x62fc62
// 0065be08  83c404               add esp, 4
// 0065be0b  8bc6                 mov eax, esi
// 0065be0d  5e                   pop esi
// 0065be0e  c20400               ret 4
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportControl.cpp (function ??_G?$CXTPHeapObjectT@VCXTPReportRows@@VCXTPReportAllocatorDefault@@@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportControl.cpp
