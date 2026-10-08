// from server: 100% by auto
// roc 2010-06 00641110  unit: RBX::VInstance::?$NonFactoryProduct  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00641110
//
// 00641110  56                   push esi
// 00641111  57                   push edi
// 00641112  8bf9                 mov edi, ecx
// 00641114  8b4714               mov eax, dword ptr [edi + 0x14]
// 00641117  8b30                 mov esi, dword ptr [eax]
// 00641119  8900                 mov dword ptr [eax], eax
// 0064111b  8b4714               mov eax, dword ptr [edi + 0x14]
// 0064111e  894004               mov dword ptr [eax + 4], eax
// 00641121  c7471800000000       mov dword ptr [edi + 0x18], 0
// 00641128  3b7714               cmp esi, dword ptr [edi + 0x14]
// 0064112b  741e                 je 0x64114b
// 0064112d  53                   push ebx
// 0064112e  8bff                 mov edi, edi
// 00641130  8b1e                 mov ebx, dword ptr [esi]
// 00641132  8d4e08               lea ecx, [esi + 8]
// 00641135  e8560afeff           call 0x621b90
// 0064113a  56                   push esi
// 0064113b  e85a681600           call 0x7a799a
// 00641140  83c404               add esp, 4
// 00641143  8bf3                 mov esi, ebx
// 00641145  3b5f14               cmp ebx, dword ptr [edi + 0x14]
// 00641148  75e6                 jne 0x641130
// 0064114a  5b                   pop ebx
// 0064114b  5f                   pop edi
// 0064114c  5e                   pop esi
// 0064114d  c3                   ret 
// library boost-1.34.1/libs\signals\src\trackable.cpp (function ?clear@?$list@Vconnection@signals@boost@@V?$allocator@Vconnection@signals@boost@@@std@@@std@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/trackable.cpp
