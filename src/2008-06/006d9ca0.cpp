// roc 2008-06 006d9ca0  unit: CXTPReportRecordItemVariant  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006d9ca0
//
// 006d9ca0  56                   push esi
// 006d9ca1  8bf1                 mov esi, ecx
// 006d9ca3  8d467c               lea eax, [esi + 0x7c]
// 006d9ca6  50                   push eax
// 006d9ca7  ff151c298000         call dword ptr [0x80291c]
// 006d9cad  8bce                 mov ecx, esi
// 006d9caf  e8accffeff           call 0x6c6c60
// 006d9cb4  f644240801           test byte ptr [esp + 8], 1
// 006d9cb9  742c                 je 0x6d9ce7
// 006d9cbb  833d14e1970000       cmp dword ptr [0x97e114], 0
// 006d9cc2  740f                 je 0x6d9cd3
// 006d9cc4  56                   push esi
// 006d9cc5  e8b66dd4ff           call 0x420a80
// 006d9cca  83c404               add esp, 4
// 006d9ccd  8bc6                 mov eax, esi
// 006d9ccf  5e                   pop esi
// 006d9cd0  c20400               ret 4
// 006d9cd3  680ce19700           push 0x97e10c
// 006d9cd8  ff15ac218000         call dword ptr [0x8021ac]
// 006d9cde  56                   push esi
// 006d9cdf  e89669fcff           call 0x6a067a
// 006d9ce4  83c404               add esp, 4
// 006d9ce7  8bc6                 mov eax, esi
// 006d9ce9  5e                   pop esi
// 006d9cea  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportRecordItemText.cpp (function ??_GCXTPReportRecordItemVariant@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRecordItemText.cpp
