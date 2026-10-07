// roc 2010-06 004c4f10  unit: RBX::VInstance::?$NonFactoryProduct  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004c4f10
//
// 004c4f10  56                   push esi
// 004c4f11  57                   push edi
// 004c4f12  8bf9                 mov edi, ecx
// 004c4f14  8b4714               mov eax, dword ptr [edi + 0x14]
// 004c4f17  8b30                 mov esi, dword ptr [eax]
// 004c4f19  8900                 mov dword ptr [eax], eax
// 004c4f1b  8b4714               mov eax, dword ptr [edi + 0x14]
// 004c4f1e  894004               mov dword ptr [eax + 4], eax
// 004c4f21  c7471800000000       mov dword ptr [edi + 0x18], 0
// 004c4f28  3b7714               cmp esi, dword ptr [edi + 0x14]
// 004c4f2b  741e                 je 0x4c4f4b
// 004c4f2d  53                   push ebx
// 004c4f2e  8bff                 mov edi, edi
// 004c4f30  8b1e                 mov ebx, dword ptr [esi]
// 004c4f32  8d4e08               lea ecx, [esi + 8]
// 004c4f35  e866baffff           call 0x4c09a0
// 004c4f3a  56                   push esi
// 004c4f3b  e85a2a2e00           call 0x7a799a
// 004c4f40  83c404               add esp, 4
// 004c4f43  8bf3                 mov esi, ebx
// 004c4f45  3b5f14               cmp ebx, dword ptr [edi + 0x14]
// 004c4f48  75e6                 jne 0x4c4f30
// 004c4f4a  5b                   pop ebx
// 004c4f4b  5f                   pop edi
// 004c4f4c  5e                   pop esi
// 004c4f4d  c3                   ret 
// library boost-1.34.1/libs\signals\src\trackable.cpp (function ?clear@?$list@Vconnection@signals@boost@@V?$allocator@Vconnection@signals@boost@@@std@@@std@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/trackable.cpp
