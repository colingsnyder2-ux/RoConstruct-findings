// from server: 100% by auto
// roc 2008-06 0074f400  unit: CXTPReportHyperlinks  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0074f400
//
// 0074f400  56                   push esi
// 0074f401  8bf1                 mov esi, ecx
// 0074f403  e8a8fdffff           call 0x74f1b0
// 0074f408  f644240801           test byte ptr [esp + 8], 1
// 0074f40d  742c                 je 0x74f43b
// 0074f40f  833d14e1970000       cmp dword ptr [0x97e114], 0
// 0074f416  740f                 je 0x74f427
// 0074f418  56                   push esi
// 0074f419  e86216cdff           call 0x420a80
// 0074f41e  83c404               add esp, 4
// 0074f421  8bc6                 mov eax, esi
// 0074f423  5e                   pop esi
// 0074f424  c20400               ret 4
// 0074f427  680ce19700           push 0x97e10c
// 0074f42c  ff15ac218000         call dword ptr [0x8021ac]
// 0074f432  56                   push esi
// 0074f433  e84212f5ff           call 0x6a067a
// 0074f438  83c404               add esp, 4
// 0074f43b  8bc6                 mov eax, esi
// 0074f43d  5e                   pop esi
// 0074f43e  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ??_G?$CXTPHeapObjectT@VCXTPReportRows@@VCXTPReportAllocatorDefault@@@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
