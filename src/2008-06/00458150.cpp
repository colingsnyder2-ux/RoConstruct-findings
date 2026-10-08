// from server: 100% by auto
// roc 2008-06 00458150  unit: CRobloxReportView::CStatsItemRecord  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00458150
//
// 00458150  56                   push esi
// 00458151  8bf1                 mov esi, ecx
// 00458153  e898feffff           call 0x457ff0
// 00458158  f644240801           test byte ptr [esp + 8], 1
// 0045815d  742c                 je 0x45818b
// 0045815f  833d14e1970000       cmp dword ptr [0x97e114], 0
// 00458166  740f                 je 0x458177
// 00458168  56                   push esi
// 00458169  e81289fcff           call 0x420a80
// 0045816e  83c404               add esp, 4
// 00458171  8bc6                 mov eax, esi
// 00458173  5e                   pop esi
// 00458174  c20400               ret 4
// 00458177  680ce19700           push 0x97e10c
// 0045817c  ff15ac218000         call dword ptr [0x8021ac]
// 00458182  56                   push esi
// 00458183  e8f2842400           call 0x6a067a
// 00458188  83c404               add esp, 4
// 0045818b  8bc6                 mov eax, esi
// 0045818d  5e                   pop esi
// 0045818e  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ??_G?$CXTPHeapObjectT@VCXTPReportRows@@VCXTPReportAllocatorDefault@@@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
