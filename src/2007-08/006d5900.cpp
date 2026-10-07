// roc 2007-08 006d5900  unit: CXTPReportRow  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d5900
//
// 006d5900  56                   push esi
// 006d5901  8bf1                 mov esi, ecx
// 006d5903  e828e6ffff           call 0x6d3f30
// 006d5908  f644240801           test byte ptr [esp + 8], 1
// 006d590d  742c                 je 0x6d593b
// 006d590f  833d88878c0000       cmp dword ptr [0x8c8788], 0
// 006d5916  740f                 je 0x6d5927
// 006d5918  56                   push esi
// 006d5919  e86210f8ff           call 0x656980
// 006d591e  83c404               add esp, 4
// 006d5921  8bc6                 mov eax, esi
// 006d5923  5e                   pop esi
// 006d5924  c20400               ret 4
// 006d5927  6880878c00           push 0x8c8780
// 006d592c  ff15e8d27700         call dword ptr [0x77d2e8]
// 006d5932  56                   push esi
// 006d5933  e82aa3f5ff           call 0x62fc62
// 006d5938  83c404               add esp, 4
// 006d593b  8bc6                 mov eax, esi
// 006d593d  5e                   pop esi
// 006d593e  c20400               ret 4
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportControl.cpp (function ??_G?$CXTPHeapObjectT@VCXTPReportRows@@VCXTPReportAllocatorDefault@@@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportControl.cpp
