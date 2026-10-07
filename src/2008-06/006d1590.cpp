// roc 2008-06 006d1590  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006d1590
//
// 006d1590  56                   push esi
// 006d1591  8bf1                 mov esi, ecx
// 006d1593  e808f40700           call 0x7509a0
// 006d1598  f644240801           test byte ptr [esp + 8], 1
// 006d159d  742c                 je 0x6d15cb
// 006d159f  833d34e1970000       cmp dword ptr [0x97e134], 0
// 006d15a6  740f                 je 0x6d15b7
// 006d15a8  56                   push esi
// 006d15a9  e8b2dbffff           call 0x6cf160
// 006d15ae  83c404               add esp, 4
// 006d15b1  8bc6                 mov eax, esi
// 006d15b3  5e                   pop esi
// 006d15b4  c20400               ret 4
// 006d15b7  682ce19700           push 0x97e12c
// 006d15bc  ff15ac218000         call dword ptr [0x8021ac]
// 006d15c2  56                   push esi
// 006d15c3  e8b2f0fcff           call 0x6a067a
// 006d15c8  83c404               add esp, 4
// 006d15cb  8bc6                 mov eax, esi
// 006d15cd  5e                   pop esi
// 006d15ce  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ??_G?$CXTPHeapObjectT@VCXTPReportRows@@VCXTPReportAllocatorDefault@@@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
