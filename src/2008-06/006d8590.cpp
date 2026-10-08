// from server: 100% by auto
// roc 2008-06 006d8590  unit: CXTPReportRecord  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006d8590
//
// 006d8590  56                   push esi
// 006d8591  8bf1                 mov esi, ecx
// 006d8593  e868fbffff           call 0x6d8100
// 006d8598  f644240801           test byte ptr [esp + 8], 1
// 006d859d  742c                 je 0x6d85cb
// 006d859f  833d14e1970000       cmp dword ptr [0x97e114], 0
// 006d85a6  740f                 je 0x6d85b7
// 006d85a8  56                   push esi
// 006d85a9  e8d284d4ff           call 0x420a80
// 006d85ae  83c404               add esp, 4
// 006d85b1  8bc6                 mov eax, esi
// 006d85b3  5e                   pop esi
// 006d85b4  c20400               ret 4
// 006d85b7  680ce19700           push 0x97e10c
// 006d85bc  ff15ac218000         call dword ptr [0x8021ac]
// 006d85c2  56                   push esi
// 006d85c3  e8b280fcff           call 0x6a067a
// 006d85c8  83c404               add esp, 4
// 006d85cb  8bc6                 mov eax, esi
// 006d85cd  5e                   pop esi
// 006d85ce  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ??_G?$CXTPHeapObjectT@VCXTPReportRows@@VCXTPReportAllocatorDefault@@@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
