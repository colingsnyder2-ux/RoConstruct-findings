// roc 2007-08 00453f60  unit: CRobloxReportView::CStatsItemRecord::CNameItem  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00453f60
//
// 00453f60  56                   push esi
// 00453f61  8bf1                 mov esi, ecx
// 00453f63  e818fdffff           call 0x453c80
// 00453f68  f644240801           test byte ptr [esp + 8], 1
// 00453f6d  742c                 je 0x453f9b
// 00453f6f  833d78878c0000       cmp dword ptr [0x8c8778], 0
// 00453f76  740f                 je 0x453f87
// 00453f78  56                   push esi
// 00453f79  e8329bfcff           call 0x41dab0
// 00453f7e  83c404               add esp, 4
// 00453f81  8bc6                 mov eax, esi
// 00453f83  5e                   pop esi
// 00453f84  c20400               ret 4
// 00453f87  6870878c00           push 0x8c8770
// 00453f8c  ff15e8d27700         call dword ptr [0x77d2e8]
// 00453f92  56                   push esi
// 00453f93  e8cabc1d00           call 0x62fc62
// 00453f98  83c404               add esp, 4
// 00453f9b  8bc6                 mov eax, esi
// 00453f9d  5e                   pop esi
// 00453f9e  c20400               ret 4
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportControl.cpp (function ??_G?$CXTPHeapObjectT@VCXTPReportRows@@VCXTPReportAllocatorDefault@@@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportControl.cpp
