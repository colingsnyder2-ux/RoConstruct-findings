// from server: 100% by auto
// roc 2008-06 006db770  unit: CXTPReportRows  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006db770
//
// 006db770  56                   push esi
// 006db771  8bf1                 mov esi, ecx
// 006db773  e8b8ecffff           call 0x6da430
// 006db778  f644240801           test byte ptr [esp + 8], 1
// 006db77d  742c                 je 0x6db7ab
// 006db77f  833d14e1970000       cmp dword ptr [0x97e114], 0
// 006db786  740f                 je 0x6db797
// 006db788  56                   push esi
// 006db789  e8f252d4ff           call 0x420a80
// 006db78e  83c404               add esp, 4
// 006db791  8bc6                 mov eax, esi
// 006db793  5e                   pop esi
// 006db794  c20400               ret 4
// 006db797  680ce19700           push 0x97e10c
// 006db79c  ff15ac218000         call dword ptr [0x8021ac]
// 006db7a2  56                   push esi
// 006db7a3  e8d24efcff           call 0x6a067a
// 006db7a8  83c404               add esp, 4
// 006db7ab  8bc6                 mov eax, esi
// 006db7ad  5e                   pop esi
// 006db7ae  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ??_G?$CXTPHeapObjectT@VCXTPReportRows@@VCXTPReportAllocatorDefault@@@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
