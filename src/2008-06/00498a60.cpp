// roc 2008-06 00498a60  unit: RBX::Network::VPlayers::?$SignalDesc  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00498a60
//
// 00498a60  56                   push esi
// 00498a61  57                   push edi
// 00498a62  8bf9                 mov edi, ecx
// 00498a64  8b4714               mov eax, dword ptr [edi + 0x14]
// 00498a67  8b30                 mov esi, dword ptr [eax]
// 00498a69  8900                 mov dword ptr [eax], eax
// 00498a6b  8b4714               mov eax, dword ptr [edi + 0x14]
// 00498a6e  894004               mov dword ptr [eax + 4], eax
// 00498a71  c7471800000000       mov dword ptr [edi + 0x18], 0
// 00498a78  3b7714               cmp esi, dword ptr [edi + 0x14]
// 00498a7b  741e                 je 0x498a9b
// 00498a7d  53                   push ebx
// 00498a7e  8bff                 mov edi, edi
// 00498a80  8b1e                 mov ebx, dword ptr [esi]
// 00498a82  8d4e08               lea ecx, [esi + 8]
// 00498a85  e836d9ffff           call 0x4963c0
// 00498a8a  56                   push esi
// 00498a8b  e8ea7b2000           call 0x6a067a
// 00498a90  83c404               add esp, 4
// 00498a93  8bf3                 mov esi, ebx
// 00498a95  3b5f14               cmp ebx, dword ptr [edi + 0x14]
// 00498a98  75e6                 jne 0x498a80
// 00498a9a  5b                   pop ebx
// 00498a9b  5f                   pop edi
// 00498a9c  5e                   pop esi
// 00498a9d  c3                   ret 
// library boost-1.34.1/libs\signals\src\trackable.cpp (function ?clear@?$list@Vconnection@signals@boost@@V?$allocator@Vconnection@signals@boost@@@std@@@std@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/trackable.cpp
