// roc 2008-06 0056a790  unit: RBX::VInstance::?$NonFactoryProduct  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0056a790
//
// 0056a790  6aff                 push -1
// 0056a792  68e8727d00           push 0x7d72e8
// 0056a797  64a100000000         mov eax, dword ptr fs:[0]
// 0056a79d  50                   push eax
// 0056a79e  64892500000000       mov dword ptr fs:[0], esp
// 0056a7a5  51                   push ecx
// 0056a7a6  56                   push esi
// 0056a7a7  8bf1                 mov esi, ecx
// 0056a7a9  89742404             mov dword ptr [esp + 4], esi
// 0056a7ad  8b4608               mov eax, dword ptr [esi + 8]
// 0056a7b0  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0056a7b8  85c0                 test eax, eax
// 0056a7ba  7419                 je 0x56a7d5
// 0056a7bc  8b00                 mov eax, dword ptr [eax]
// 0056a7be  8d4e10               lea ecx, [esi + 0x10]
// 0056a7c1  85c0                 test eax, eax
// 0056a7c3  7409                 je 0x56a7ce
// 0056a7c5  6a01                 push 1
// 0056a7c7  51                   push ecx
// 0056a7c8  51                   push ecx
// 0056a7c9  ffd0                 call eax
// 0056a7cb  83c40c               add esp, 0xc
// 0056a7ce  c7460800000000       mov dword ptr [esi + 8], 0
// 0056a7d5  8b06                 mov eax, dword ptr [esi]
// 0056a7d7  50                   push eax
// 0056a7d8  e89d5e1300           call 0x6a067a
// 0056a7dd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0056a7e1  83c404               add esp, 4
// 0056a7e4  5e                   pop esi
// 0056a7e5  64890d00000000       mov dword ptr fs:[0], ecx
// 0056a7ec  83c410               add esp, 0x10
// 0056a7ef  c3                   ret 
// library boost-1.34.1/libs\signals\src\named_slot_map.cpp (function ??1?$_Tmap_traits@Vstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@V?$function2@_NVstored_group@detail@signals@boost@@V1234@V?$allocator@Vfunction_base@boost@@@std@@@4@V?$allocator@U?$pair@$$CBVstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@@std@@@6@$0A@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/named_slot_map.cpp
