// roc 2007-08 0065bd80  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0065bd80
//
// 0065bd80  56                   push esi
// 0065bd81  8bf1                 mov esi, ecx
// 0065bd83  e8a88b0000           call 0x664930
// 0065bd88  f644240801           test byte ptr [esp + 8], 1
// 0065bd8d  742c                 je 0x65bdbb
// 0065bd8f  833d98878c0000       cmp dword ptr [0x8c8798], 0
// 0065bd96  740f                 je 0x65bda7
// 0065bd98  56                   push esi
// 0065bd99  e862e1ffff           call 0x659f00
// 0065bd9e  83c404               add esp, 4
// 0065bda1  8bc6                 mov eax, esi
// 0065bda3  5e                   pop esi
// 0065bda4  c20400               ret 4
// 0065bda7  6890878c00           push 0x8c8790
// 0065bdac  ff15e8d27700         call dword ptr [0x77d2e8]
// 0065bdb2  56                   push esi
// 0065bdb3  e8aa3efdff           call 0x62fc62
// 0065bdb8  83c404               add esp, 4
// 0065bdbb  8bc6                 mov eax, esi
// 0065bdbd  5e                   pop esi
// 0065bdbe  c20400               ret 4
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportControl.cpp (function ??_G?$CXTPHeapObjectT@VCXTPReportRows@@VCXTPReportAllocatorDefault@@@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportControl.cpp
