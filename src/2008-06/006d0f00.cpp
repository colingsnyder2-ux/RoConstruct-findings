// from server: 100% by auto
// roc 2008-06 006d0f00  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006d0f00
//
// 006d0f00  56                   push esi
// 006d0f01  8bf1                 mov esi, ecx
// 006d0f03  e828950000           call 0x6da430
// 006d0f08  f644240801           test byte ptr [esp + 8], 1
// 006d0f0d  742c                 je 0x6d0f3b
// 006d0f0f  833d34e1970000       cmp dword ptr [0x97e134], 0
// 006d0f16  740f                 je 0x6d0f27
// 006d0f18  56                   push esi
// 006d0f19  e842e2ffff           call 0x6cf160
// 006d0f1e  83c404               add esp, 4
// 006d0f21  8bc6                 mov eax, esi
// 006d0f23  5e                   pop esi
// 006d0f24  c20400               ret 4
// 006d0f27  682ce19700           push 0x97e12c
// 006d0f2c  ff15ac218000         call dword ptr [0x8021ac]
// 006d0f32  56                   push esi
// 006d0f33  e842f7fcff           call 0x6a067a
// 006d0f38  83c404               add esp, 4
// 006d0f3b  8bc6                 mov eax, esi
// 006d0f3d  5e                   pop esi
// 006d0f3e  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ??_G?$CXTPHeapObjectT@VCXTPReportRows@@VCXTPReportAllocatorDefault@@@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
