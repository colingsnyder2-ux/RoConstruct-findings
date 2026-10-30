// from server: 100% by auto
// roc 2007-08 00662280  unit: CXTPReportRecord  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00662280
//
// 00662280  56                   push esi
// 00662281  8bf1                 mov esi, ecx
// 00662283  e828fcffff           call 0x661eb0
// 00662288  f644240801           test byte ptr [esp + 8], 1
// 0066228d  742c                 je 0x6622bb
// 0066228f  833d78878c0000       cmp dword ptr [0x8c8778], 0
// 00662296  740f                 je 0x6622a7
// 00662298  56                   push esi
// 00662299  e812b8dbff           call 0x41dab0
// 0066229e  83c404               add esp, 4
// 006622a1  8bc6                 mov eax, esi
// 006622a3  5e                   pop esi
// 006622a4  c20400               ret 4
// 006622a7  6870878c00           push 0x8c8770
// 006622ac  ff15e8d27700         call dword ptr [0x77d2e8]
// 006622b2  56                   push esi
// 006622b3  e8aad9fcff           call 0x62fc62
// 006622b8  83c404               add esp, 4
// 006622bb  8bc6                 mov eax, esi
// 006622bd  5e                   pop esi
// 006622be  c20400               ret 4
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportControl.cpp (function ??_G?$CXTPHeapObjectT@VCXTPReportRows@@VCXTPReportAllocatorDefault@@@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportControl.cpp
