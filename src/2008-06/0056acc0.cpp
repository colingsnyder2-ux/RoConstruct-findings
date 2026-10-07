// roc 2008-06 0056acc0  unit: RBX::VInstance::?$NonFactoryProduct  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0056acc0
//
// 0056acc0  6aff                 push -1
// 0056acc2  6858027d00           push 0x7d0258
// 0056acc7  64a100000000         mov eax, dword ptr fs:[0]
// 0056accd  50                   push eax
// 0056acce  64892500000000       mov dword ptr fs:[0], esp
// 0056acd5  51                   push ecx
// 0056acd6  56                   push esi
// 0056acd7  8bf1                 mov esi, ecx
// 0056acd9  89742404             mov dword ptr [esp + 4], esi
// 0056acdd  8d4e0c               lea ecx, [esi + 0xc]
// 0056ace0  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0056ace8  e873ffffff           call 0x56ac60
// 0056aced  8b7608               mov esi, dword ptr [esi + 8]
// 0056acf0  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0056acf8  85f6                 test esi, esi
// 0056acfa  742a                 je 0x56ad26
// 0056acfc  8d4604               lea eax, [esi + 4]
// 0056acff  83c9ff               or ecx, 0xffffffff
// 0056ad02  f00fc108             lock xadd dword ptr [eax], ecx
// 0056ad06  751e                 jne 0x56ad26
// 0056ad08  8b16                 mov edx, dword ptr [esi]
// 0056ad0a  8b4204               mov eax, dword ptr [edx + 4]
// 0056ad0d  8bce                 mov ecx, esi
// 0056ad0f  ffd0                 call eax
// 0056ad11  8d4e08               lea ecx, [esi + 8]
// 0056ad14  83caff               or edx, 0xffffffff
// 0056ad17  f00fc111             lock xadd dword ptr [ecx], edx
// 0056ad1b  7509                 jne 0x56ad26
// 0056ad1d  8b06                 mov eax, dword ptr [esi]
// 0056ad1f  8b5008               mov edx, dword ptr [eax + 8]
// 0056ad22  8bce                 mov ecx, esi
// 0056ad24  ffd2                 call edx
// 0056ad26  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0056ad2a  5e                   pop esi
// 0056ad2b  64890d00000000       mov dword ptr fs:[0], ecx
// 0056ad32  83c410               add esp, 0x10
// 0056ad35  c3                   ret 
// library boost-1.34.1/libs\signals\src\named_slot_map.cpp (function ??1?$pair@$$CBVstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/named_slot_map.cpp
