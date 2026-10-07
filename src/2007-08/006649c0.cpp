// roc 2007-08 006649c0  unit: CXTPReportRows  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006649c0
//
// 006649c0  56                   push esi
// 006649c1  8bf1                 mov esi, ecx
// 006649c3  e868ffffff           call 0x664930
// 006649c8  f644240801           test byte ptr [esp + 8], 1
// 006649cd  742c                 je 0x6649fb
// 006649cf  833d78878c0000       cmp dword ptr [0x8c8778], 0
// 006649d6  740f                 je 0x6649e7
// 006649d8  56                   push esi
// 006649d9  e8d290dbff           call 0x41dab0
// 006649de  83c404               add esp, 4
// 006649e1  8bc6                 mov eax, esi
// 006649e3  5e                   pop esi
// 006649e4  c20400               ret 4
// 006649e7  6870878c00           push 0x8c8770
// 006649ec  ff15e8d27700         call dword ptr [0x77d2e8]
// 006649f2  56                   push esi
// 006649f3  e86ab2fcff           call 0x62fc62
// 006649f8  83c404               add esp, 4
// 006649fb  8bc6                 mov eax, esi
// 006649fd  5e                   pop esi
// 006649fe  c20400               ret 4
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportControl.cpp (function ??_G?$CXTPHeapObjectT@VCXTPReportRows@@VCXTPReportAllocatorDefault@@@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportControl.cpp
