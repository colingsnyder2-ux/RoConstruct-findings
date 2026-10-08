// from server: 100% by auto
// roc 2009-06 004c7650  unit: RBX::VInstance::?$NonFactoryProduct  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004c7650
//
// 004c7650  56                   push esi
// 004c7651  57                   push edi
// 004c7652  8bf9                 mov edi, ecx
// 004c7654  8b4714               mov eax, dword ptr [edi + 0x14]
// 004c7657  8b30                 mov esi, dword ptr [eax]
// 004c7659  8900                 mov dword ptr [eax], eax
// 004c765b  8b4714               mov eax, dword ptr [edi + 0x14]
// 004c765e  894004               mov dword ptr [eax + 4], eax
// 004c7661  c7471800000000       mov dword ptr [edi + 0x18], 0
// 004c7668  3b7714               cmp esi, dword ptr [edi + 0x14]
// 004c766b  741e                 je 0x4c768b
// 004c766d  53                   push ebx
// 004c766e  8bff                 mov edi, edi
// 004c7670  8b1e                 mov ebx, dword ptr [esi]
// 004c7672  8d4e08               lea ecx, [esi + 8]
// 004c7675  e8e6cfffff           call 0x4c4660
// 004c767a  56                   push esi
// 004c767b  e8b2132500           call 0x718a32
// 004c7680  83c404               add esp, 4
// 004c7683  8bf3                 mov esi, ebx
// 004c7685  3b5f14               cmp ebx, dword ptr [edi + 0x14]
// 004c7688  75e6                 jne 0x4c7670
// 004c768a  5b                   pop ebx
// 004c768b  5f                   pop edi
// 004c768c  5e                   pop esi
// 004c768d  c3                   ret 
// library boost-1.34.1/libs\signals\src\trackable.cpp (function ?clear@?$list@Vconnection@signals@boost@@V?$allocator@Vconnection@signals@boost@@@std@@@std@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/trackable.cpp
