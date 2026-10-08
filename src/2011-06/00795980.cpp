// from server: 100% by auto
// roc 2011-06 00795980  unit: RBX::VHttp::?$sp_counted_impl_p  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00795980
//
// 00795980  53                   push ebx
// 00795981  56                   push esi
// 00795982  8bf1                 mov esi, ecx
// 00795984  8b4604               mov eax, dword ptr [esi + 4]
// 00795987  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0079598b  57                   push edi
// 0079598c  8b38                 mov edi, dword ptr [eax]
// 0079598e  8b5704               mov edx, dword ptr [edi + 4]
// 00795991  51                   push ecx
// 00795992  52                   push edx
// 00795993  57                   push edi
// 00795994  8bce                 mov ecx, esi
// 00795996  e8b5f8ffff           call 0x795250
// 0079599b  6a01                 push 1
// 0079599d  8bce                 mov ecx, esi
// 0079599f  8bd8                 mov ebx, eax
// 007959a1  e8daf5ffff           call 0x794f80
// 007959a6  895f04               mov dword ptr [edi + 4], ebx
// 007959a9  8b4304               mov eax, dword ptr [ebx + 4]
// 007959ac  5f                   pop edi
// 007959ad  5e                   pop esi
// 007959ae  8918                 mov dword ptr [eax], ebx
// 007959b0  5b                   pop ebx
// 007959b1  c20400               ret 4
// library boost-1.34.1/libs\signals\src\named_slot_map.cpp (function ?push_front@?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@QAEXABUconnection_slot_pair@detail@signals@boost@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/named_slot_map.cpp
