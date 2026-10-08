// from server: 100% by auto
// roc 2008-06 0056b140  unit: RBX::VInstance::?$NonFactoryProduct  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0056b140
//
// 0056b140  6aff                 push -1
// 0056b142  6828fa7c00           push 0x7cfa28
// 0056b147  64a100000000         mov eax, dword ptr fs:[0]
// 0056b14d  50                   push eax
// 0056b14e  64892500000000       mov dword ptr fs:[0], esp
// 0056b155  83ec0c               sub esp, 0xc
// 0056b158  56                   push esi
// 0056b159  8bf1                 mov esi, ecx
// 0056b15b  89742404             mov dword ptr [esp + 4], esi
// 0056b15f  8b4640               mov eax, dword ptr [esi + 0x40]
// 0056b162  8b0e                 mov ecx, dword ptr [esi]
// 0056b164  8b10                 mov edx, dword ptr [eax]
// 0056b166  50                   push eax
// 0056b167  51                   push ecx
// 0056b168  52                   push edx
// 0056b169  51                   push ecx
// 0056b16a  8d442418             lea eax, [esp + 0x18]
// 0056b16e  50                   push eax
// 0056b16f  8bce                 mov ecx, esi
// 0056b171  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 0056b179  e8e2feffff           call 0x56b060
// 0056b17e  8b4640               mov eax, dword ptr [esi + 0x40]
// 0056b181  50                   push eax
// 0056b182  e8f3541300           call 0x6a067a
// 0056b187  83c404               add esp, 4
// 0056b18a  8bce                 mov ecx, esi
// 0056b18c  c7464000000000       mov dword ptr [esi + 0x40], 0
// 0056b193  c7464400000000       mov dword ptr [esi + 0x44], 0
// 0056b19a  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 0056b1a2  e8e9f5ffff           call 0x56a790
// 0056b1a7  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0056b1ab  5e                   pop esi
// 0056b1ac  64890d00000000       mov dword ptr fs:[0], ecx
// 0056b1b3  83c418               add esp, 0x18
// 0056b1b6  c3                   ret 
// library boost-1.34.1/libs\signals\src\named_slot_map.cpp (function ??1?$_Tree@V?$_Tmap_traits@Vstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@V?$function2@_NVstored_group@detail@signals@boost@@V1234@V?$allocator@Vfunction_base@boost@@@std@@@4@V?$allocator@U?$pair@$$CBVstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@@std@@@6@$0A@@std@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/named_slot_map.cpp
