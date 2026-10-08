// from server: 100% by auto
// roc 2011-06 00738590  unit: RBX::VInstance::?$NonFactoryProduct  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00738590
//
// 00738590  53                   push ebx
// 00738591  56                   push esi
// 00738592  8bf1                 mov esi, ecx
// 00738594  8b4604               mov eax, dword ptr [esi + 4]
// 00738597  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0073859b  57                   push edi
// 0073859c  8b38                 mov edi, dword ptr [eax]
// 0073859e  8b5704               mov edx, dword ptr [edi + 4]
// 007385a1  51                   push ecx
// 007385a2  52                   push edx
// 007385a3  57                   push edi
// 007385a4  8bce                 mov ecx, esi
// 007385a6  e80557edff           call 0x60dcb0
// 007385ab  6a01                 push 1
// 007385ad  8bce                 mov ecx, esi
// 007385af  8bd8                 mov ebx, eax
// 007385b1  e8aa91faff           call 0x6e1760
// 007385b6  895f04               mov dword ptr [edi + 4], ebx
// 007385b9  8b4304               mov eax, dword ptr [ebx + 4]
// 007385bc  5f                   pop edi
// 007385bd  5e                   pop esi
// 007385be  8918                 mov dword ptr [eax], ebx
// 007385c0  5b                   pop ebx
// 007385c1  c20400               ret 4
// library boost-1.34.1/libs\signals\src\named_slot_map.cpp (function ?push_front@?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@QAEXABUconnection_slot_pair@detail@signals@boost@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/named_slot_map.cpp
