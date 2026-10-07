// roc 2008-06 006d7ec0  unit: CXTPReportRecords  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006d7ec0
//
// 006d7ec0  56                   push esi
// 006d7ec1  8bf1                 mov esi, ecx
// 006d7ec3  e828fdffff           call 0x6d7bf0
// 006d7ec8  f644240801           test byte ptr [esp + 8], 1
// 006d7ecd  742c                 je 0x6d7efb
// 006d7ecf  833d14e1970000       cmp dword ptr [0x97e114], 0
// 006d7ed6  740f                 je 0x6d7ee7
// 006d7ed8  56                   push esi
// 006d7ed9  e8a28bd4ff           call 0x420a80
// 006d7ede  83c404               add esp, 4
// 006d7ee1  8bc6                 mov eax, esi
// 006d7ee3  5e                   pop esi
// 006d7ee4  c20400               ret 4
// 006d7ee7  680ce19700           push 0x97e10c
// 006d7eec  ff15ac218000         call dword ptr [0x8021ac]
// 006d7ef2  56                   push esi
// 006d7ef3  e88287fcff           call 0x6a067a
// 006d7ef8  83c404               add esp, 4
// 006d7efb  8bc6                 mov eax, esi
// 006d7efd  5e                   pop esi
// 006d7efe  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ??_G?$CXTPHeapObjectT@VCXTPReportRows@@VCXTPReportAllocatorDefault@@@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
