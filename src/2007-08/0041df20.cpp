// roc 2007-08 0041df20  unit: CInstanceRecord  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0041df20
//
// 0041df20  56                   push esi
// 0041df21  8bf1                 mov esi, ecx
// 0041df23  e868ffffff           call 0x41de90
// 0041df28  f644240801           test byte ptr [esp + 8], 1
// 0041df2d  742c                 je 0x41df5b
// 0041df2f  833d78878c0000       cmp dword ptr [0x8c8778], 0
// 0041df36  740f                 je 0x41df47
// 0041df38  56                   push esi
// 0041df39  e872fbffff           call 0x41dab0
// 0041df3e  83c404               add esp, 4
// 0041df41  8bc6                 mov eax, esi
// 0041df43  5e                   pop esi
// 0041df44  c20400               ret 4
// 0041df47  6870878c00           push 0x8c8770
// 0041df4c  ff15e8d27700         call dword ptr [0x77d2e8]
// 0041df52  56                   push esi
// 0041df53  e80a1d2100           call 0x62fc62
// 0041df58  83c404               add esp, 4
// 0041df5b  8bc6                 mov eax, esi
// 0041df5d  5e                   pop esi
// 0041df5e  c20400               ret 4
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportControl.cpp (function ??_G?$CXTPHeapObjectT@VCXTPReportRows@@VCXTPReportAllocatorDefault@@@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportControl.cpp
