// from server: 100% by auto
// roc 2008-06 006d9b30  unit: CInstanceRecord::CNameItem  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006d9b30
//
// 006d9b30  56                   push esi
// 006d9b31  8bf1                 mov esi, ecx
// 006d9b33  e828d1feff           call 0x6c6c60
// 006d9b38  f644240801           test byte ptr [esp + 8], 1
// 006d9b3d  742c                 je 0x6d9b6b
// 006d9b3f  833d14e1970000       cmp dword ptr [0x97e114], 0
// 006d9b46  740f                 je 0x6d9b57
// 006d9b48  56                   push esi
// 006d9b49  e8326fd4ff           call 0x420a80
// 006d9b4e  83c404               add esp, 4
// 006d9b51  8bc6                 mov eax, esi
// 006d9b53  5e                   pop esi
// 006d9b54  c20400               ret 4
// 006d9b57  680ce19700           push 0x97e10c
// 006d9b5c  ff15ac218000         call dword ptr [0x8021ac]
// 006d9b62  56                   push esi
// 006d9b63  e8126bfcff           call 0x6a067a
// 006d9b68  83c404               add esp, 4
// 006d9b6b  8bc6                 mov eax, esi
// 006d9b6d  5e                   pop esi
// 006d9b6e  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ??_G?$CXTPHeapObjectT@VCXTPReportRows@@VCXTPReportAllocatorDefault@@@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
