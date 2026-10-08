// from server: 100% by auto
// roc 2008-06 00420f60  unit: CInstanceRecord  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00420f60
//
// 00420f60  56                   push esi
// 00420f61  8bf1                 mov esi, ecx
// 00420f63  e878ffffff           call 0x420ee0
// 00420f68  f644240801           test byte ptr [esp + 8], 1
// 00420f6d  742c                 je 0x420f9b
// 00420f6f  833d14e1970000       cmp dword ptr [0x97e114], 0
// 00420f76  740f                 je 0x420f87
// 00420f78  56                   push esi
// 00420f79  e802fbffff           call 0x420a80
// 00420f7e  83c404               add esp, 4
// 00420f81  8bc6                 mov eax, esi
// 00420f83  5e                   pop esi
// 00420f84  c20400               ret 4
// 00420f87  680ce19700           push 0x97e10c
// 00420f8c  ff15ac218000         call dword ptr [0x8021ac]
// 00420f92  56                   push esi
// 00420f93  e8e2f62700           call 0x6a067a
// 00420f98  83c404               add esp, 4
// 00420f9b  8bc6                 mov eax, esi
// 00420f9d  5e                   pop esi
// 00420f9e  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ??_G?$CXTPHeapObjectT@VCXTPReportRows@@VCXTPReportAllocatorDefault@@@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
