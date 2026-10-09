// roc 2009-12 0082a8c0  unit: CXTPReportHeader  size: 125 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0082a8c0
//
// 0082a8c0  56                   push esi
// 0082a8c1  8b742408             mov esi, dword ptr [esp + 8]
// 0082a8c5  837e6800             cmp dword ptr [esi + 0x68], 0
// 0082a8c9  57                   push edi
// 0082a8ca  8bf9                 mov edi, ecx
// 0082a8cc  746a                 je 0x82a938
// 0082a8ce  83bf8000000000       cmp dword ptr [edi + 0x80], 0
// 0082a8d5  7461                 je 0x82a938
// 0082a8d7  83bf8c00000000       cmp dword ptr [edi + 0x8c], 0
// 0082a8de  7416                 je 0x82a8f6
// 0082a8e0  56                   push esi
// 0082a8e1  e8aaf1ffff           call 0x829a90
// 0082a8e6  85c0                 test eax, eax
// 0082a8e8  754e                 jne 0x82a938
// 0082a8ea  56                   push esi
// 0082a8eb  8bcf                 mov ecx, edi
// 0082a8ed  e83ef1ffff           call 0x829a30
// 0082a8f2  85c0                 test eax, eax
// 0082a8f4  7542                 jne 0x82a938
// 0082a8f6  53                   push ebx
// 0082a8f7  55                   push ebp
// 0082a8f8  56                   push esi
// 0082a8f9  8bcf                 mov ecx, edi
// 0082a8fb  e8f0ebffff           call 0x8294f0
// 0082a900  8bce                 mov ecx, esi
// 0082a902  8bd8                 mov ebx, eax
// 0082a904  e847d6ffff           call 0x827f50
// 0082a909  8bce                 mov ecx, esi
// 0082a90b  8be8                 mov ebp, eax
// 0082a90d  e86ed6ffff           call 0x827f80
// 0082a912  3bc3                 cmp eax, ebx
// 0082a914  7d09                 jge 0x82a91f
// 0082a916  8bce                 mov ecx, esi
// 0082a918  e863d6ffff           call 0x827f80
// 0082a91d  eb02                 jmp 0x82a921
// 0082a91f  8bc3                 mov eax, ebx
// 0082a921  3bc5                 cmp eax, ebp
// 0082a923  5d                   pop ebp
// 0082a924  5b                   pop ebx
// 0082a925  7e11                 jle 0x82a938
// 0082a927  50                   push eax
// 0082a928  56                   push esi
// 0082a929  8bcf                 mov ecx, edi
// 0082a92b  e850f5ffff           call 0x829e80
// 0082a930  8b4f24               mov ecx, dword ptr [edi + 0x24]
// 0082a933  e8484bffff           call 0x81f480
// 0082a938  5f                   pop edi
// 0082a939  5e                   pop esi
// 0082a93a  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportHeader.cpp (function ?BestFit@CXTPReportHeader@@QAEXPAVCXTPReportColumn@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportHeader.cpp
