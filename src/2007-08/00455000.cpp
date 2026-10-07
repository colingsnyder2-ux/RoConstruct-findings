// roc 2007-08 00455000  unit: CRobloxReportView::CStatsItemRecord  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00455000
//
// 00455000  56                   push esi
// 00455001  8bf1                 mov esi, ecx
// 00455003  e888feffff           call 0x454e90
// 00455008  f644240801           test byte ptr [esp + 8], 1
// 0045500d  742c                 je 0x45503b
// 0045500f  833d78878c0000       cmp dword ptr [0x8c8778], 0
// 00455016  740f                 je 0x455027
// 00455018  56                   push esi
// 00455019  e8928afcff           call 0x41dab0
// 0045501e  83c404               add esp, 4
// 00455021  8bc6                 mov eax, esi
// 00455023  5e                   pop esi
// 00455024  c20400               ret 4
// 00455027  6870878c00           push 0x8c8770
// 0045502c  ff15e8d27700         call dword ptr [0x77d2e8]
// 00455032  56                   push esi
// 00455033  e82aac1d00           call 0x62fc62
// 00455038  83c404               add esp, 4
// 0045503b  8bc6                 mov eax, esi
// 0045503d  5e                   pop esi
// 0045503e  c20400               ret 4
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportControl.cpp (function ??_G?$CXTPHeapObjectT@VCXTPReportRows@@VCXTPReportAllocatorDefault@@@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportControl.cpp
