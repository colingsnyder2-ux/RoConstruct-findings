// from server: 100% by auto
// roc 2008-06 0074f160  unit: CXTPReportHyperlink  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0074f160
//
// 0074f160  56                   push esi
// 0074f161  8bf1                 mov esi, ecx
// 0074f163  e8c8f9ffff           call 0x74eb30
// 0074f168  f644240801           test byte ptr [esp + 8], 1
// 0074f16d  742c                 je 0x74f19b
// 0074f16f  833d14e1970000       cmp dword ptr [0x97e114], 0
// 0074f176  740f                 je 0x74f187
// 0074f178  56                   push esi
// 0074f179  e80219cdff           call 0x420a80
// 0074f17e  83c404               add esp, 4
// 0074f181  8bc6                 mov eax, esi
// 0074f183  5e                   pop esi
// 0074f184  c20400               ret 4
// 0074f187  680ce19700           push 0x97e10c
// 0074f18c  ff15ac218000         call dword ptr [0x8021ac]
// 0074f192  56                   push esi
// 0074f193  e8e214f5ff           call 0x6a067a
// 0074f198  83c404               add esp, 4
// 0074f19b  8bc6                 mov eax, esi
// 0074f19d  5e                   pop esi
// 0074f19e  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ??_G?$CXTPHeapObjectT@VCXTPReportRows@@VCXTPReportAllocatorDefault@@@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
