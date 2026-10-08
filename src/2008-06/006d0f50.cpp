// from server: 100% by auto
// roc 2008-06 006d0f50  unit: VCXTPReportRecords::?$CXTPHeapObjectT  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006d0f50
//
// 006d0f50  56                   push esi
// 006d0f51  8bf1                 mov esi, ecx
// 006d0f53  e8986c0000           call 0x6d7bf0
// 006d0f58  f644240801           test byte ptr [esp + 8], 1
// 006d0f5d  742c                 je 0x6d0f8b
// 006d0f5f  833d34e1970000       cmp dword ptr [0x97e134], 0
// 006d0f66  740f                 je 0x6d0f77
// 006d0f68  56                   push esi
// 006d0f69  e8f2e1ffff           call 0x6cf160
// 006d0f6e  83c404               add esp, 4
// 006d0f71  8bc6                 mov eax, esi
// 006d0f73  5e                   pop esi
// 006d0f74  c20400               ret 4
// 006d0f77  682ce19700           push 0x97e12c
// 006d0f7c  ff15ac218000         call dword ptr [0x8021ac]
// 006d0f82  56                   push esi
// 006d0f83  e8f2f6fcff           call 0x6a067a
// 006d0f88  83c404               add esp, 4
// 006d0f8b  8bc6                 mov eax, esi
// 006d0f8d  5e                   pop esi
// 006d0f8e  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ??_G?$CXTPHeapObjectT@VCXTPReportRows@@VCXTPReportAllocatorDefault@@@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
