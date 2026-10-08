// from server: 100% by auto
// roc 2008-06 00752a30  unit: CXTPReportRow  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00752a30
//
// 00752a30  56                   push esi
// 00752a31  8bf1                 mov esi, ecx
// 00752a33  e868dfffff           call 0x7509a0
// 00752a38  f644240801           test byte ptr [esp + 8], 1
// 00752a3d  742c                 je 0x752a6b
// 00752a3f  833d24e1970000       cmp dword ptr [0x97e124], 0
// 00752a46  740f                 je 0x752a57
// 00752a48  56                   push esi
// 00752a49  e8628af7ff           call 0x6cb4b0
// 00752a4e  83c404               add esp, 4
// 00752a51  8bc6                 mov eax, esi
// 00752a53  5e                   pop esi
// 00752a54  c20400               ret 4
// 00752a57  681ce19700           push 0x97e11c
// 00752a5c  ff15ac218000         call dword ptr [0x8021ac]
// 00752a62  56                   push esi
// 00752a63  e812dcf4ff           call 0x6a067a
// 00752a68  83c404               add esp, 4
// 00752a6b  8bc6                 mov eax, esi
// 00752a6d  5e                   pop esi
// 00752a6e  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ??_G?$CXTPHeapObjectT@VCXTPReportRows@@VCXTPReportAllocatorDefault@@@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
