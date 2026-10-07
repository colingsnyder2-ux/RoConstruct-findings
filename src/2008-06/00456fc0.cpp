// roc 2008-06 00456fc0  unit: CRobloxReportView::CStatsItemRecord::CNameItem  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00456fc0
//
// 00456fc0  56                   push esi
// 00456fc1  8bf1                 mov esi, ecx
// 00456fc3  e828f7ffff           call 0x4566f0
// 00456fc8  f644240801           test byte ptr [esp + 8], 1
// 00456fcd  742c                 je 0x456ffb
// 00456fcf  833d14e1970000       cmp dword ptr [0x97e114], 0
// 00456fd6  740f                 je 0x456fe7
// 00456fd8  56                   push esi
// 00456fd9  e8a29afcff           call 0x420a80
// 00456fde  83c404               add esp, 4
// 00456fe1  8bc6                 mov eax, esi
// 00456fe3  5e                   pop esi
// 00456fe4  c20400               ret 4
// 00456fe7  680ce19700           push 0x97e10c
// 00456fec  ff15ac218000         call dword ptr [0x8021ac]
// 00456ff2  56                   push esi
// 00456ff3  e882962400           call 0x6a067a
// 00456ff8  83c404               add esp, 4
// 00456ffb  8bc6                 mov eax, esi
// 00456ffd  5e                   pop esi
// 00456ffe  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ??_G?$CXTPHeapObjectT@VCXTPReportRows@@VCXTPReportAllocatorDefault@@@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
