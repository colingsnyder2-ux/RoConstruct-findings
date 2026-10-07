// roc 2012-06 008b8b20  unit: seg_008b0000  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008b8b20
//
// 008b8b20  53                   push ebx
// 008b8b21  56                   push esi
// 008b8b22  8bf1                 mov esi, ecx
// 008b8b24  8b4604               mov eax, dword ptr [esi + 4]
// 008b8b27  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008b8b2b  57                   push edi
// 008b8b2c  8b38                 mov edi, dword ptr [eax]
// 008b8b2e  8b5704               mov edx, dword ptr [edi + 4]
// 008b8b31  51                   push ecx
// 008b8b32  52                   push edx
// 008b8b33  57                   push edi
// 008b8b34  8bce                 mov ecx, esi
// 008b8b36  e855f9ffff           call 0x8b8490
// 008b8b3b  6a01                 push 1
// 008b8b3d  8bce                 mov ecx, esi
// 008b8b3f  8bd8                 mov ebx, eax
// 008b8b41  e85a65efff           call 0x7af0a0
// 008b8b46  895f04               mov dword ptr [edi + 4], ebx
// 008b8b49  8b4304               mov eax, dword ptr [ebx + 4]
// 008b8b4c  5f                   pop edi
// 008b8b4d  5e                   pop esi
// 008b8b4e  8918                 mov dword ptr [eax], ebx
// 008b8b50  5b                   pop ebx
// 008b8b51  c20400               ret 4
// library boost-1.34.1/libs\signals\src\named_slot_map.cpp (function ?push_front@?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@QAEXABUconnection_slot_pair@detail@signals@boost@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/named_slot_map.cpp
