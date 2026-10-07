// roc 2012-06 00849460  unit: RBX::LibraryService::VLibraryStateObject::?$sp_counted_impl_p  size: 126 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00849460
//
// 00849460  55                   push ebp
// 00849461  8bec                 mov ebp, esp
// 00849463  6aff                 push -1
// 00849465  68b1d7ac00           push 0xacd7b1
// 0084946a  64a100000000         mov eax, dword ptr fs:[0]
// 00849470  50                   push eax
// 00849471  64892500000000       mov dword ptr fs:[0], esp
// 00849478  83ec0c               sub esp, 0xc
// 0084947b  53                   push ebx
// 0084947c  56                   push esi
// 0084947d  57                   push edi
// 0084947e  8965f0               mov dword ptr [ebp - 0x10], esp
// 00849481  6a38                 push 0x38
// 00849483  e8928c1300           call 0x98211a
// 00849488  8bf0                 mov esi, eax
// 0084948a  83c404               add esp, 4
// 0084948d  8975ec               mov dword ptr [ebp - 0x14], esi
// 00849490  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00849497  8975e8               mov dword ptr [ebp - 0x18], esi
// 0084949a  c645fc01             mov byte ptr [ebp - 4], 1
// 0084949e  85f6                 test esi, esi
// 008494a0  7427                 je 0x8494c9
// 008494a2  8b4508               mov eax, dword ptr [ebp + 8]
// 008494a5  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 008494a8  8b5510               mov edx, dword ptr [ebp + 0x10]
// 008494ab  8906                 mov dword ptr [esi], eax
// 008494ad  8b4514               mov eax, dword ptr [ebp + 0x14]
// 008494b0  894e04               mov dword ptr [esi + 4], ecx
// 008494b3  50                   push eax
// 008494b4  8d4e0c               lea ecx, [esi + 0xc]
// 008494b7  895608               mov dword ptr [esi + 8], edx
// 008494ba  e811f9ffff           call 0x848dd0
// 008494bf  8a4d18               mov cl, byte ptr [ebp + 0x18]
// 008494c2  884e34               mov byte ptr [esi + 0x34], cl
// 008494c5  c6463500             mov byte ptr [esi + 0x35], 0
// 008494c9  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 008494cc  5f                   pop edi
// 008494cd  8bc6                 mov eax, esi
// 008494cf  5e                   pop esi
// 008494d0  64890d00000000       mov dword ptr fs:[0], ecx
// 008494d7  5b                   pop ebx
// 008494d8  8be5                 mov esp, ebp
// 008494da  5d                   pop ebp
// 008494db  c21400               ret 0x14
// library boost-1.34.1/libs\signals\src\named_slot_map.cpp (function ?_Buynode@?$_Tree@V?$_Tmap_traits@Vstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@V?$function2@_NVstored_group@detail@signals@boost@@V1234@V?$allocator@Vfunction_base@boost@@@std@@@4@V?$allocator@U?$pair@$$CBVstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@@std@@@6@$0A@@std@@@std@@IAEPAU_Node@?$_Tree_nod@V?$_Tmap_traits@Vstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@V?$function2@_NVstored_group@detail@signals@boost@@V1234@V?$allocator@Vfunction_base@boost@@@std@@@4@V?$allocator@U?$pair@$$CBVstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@@std@@@6@$0A@@std@@@2@PAU342@00ABU?$pair@$$CBVstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@@2@D@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/named_slot_map.cpp
