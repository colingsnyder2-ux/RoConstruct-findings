// roc 2011-06 007d1bc0  unit: RBX::ScoreHud  size: 126 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007d1bc0
//
// 007d1bc0  55                   push ebp
// 007d1bc1  8bec                 mov ebp, esp
// 007d1bc3  6aff                 push -1
// 007d1bc5  68b101a000           push 0xa001b1
// 007d1bca  64a100000000         mov eax, dword ptr fs:[0]
// 007d1bd0  50                   push eax
// 007d1bd1  64892500000000       mov dword ptr fs:[0], esp
// 007d1bd8  83ec0c               sub esp, 0xc
// 007d1bdb  53                   push ebx
// 007d1bdc  56                   push esi
// 007d1bdd  57                   push edi
// 007d1bde  8965f0               mov dword ptr [ebp - 0x10], esp
// 007d1be1  6a38                 push 0x38
// 007d1be3  e876840300           call 0x80a05e
// 007d1be8  8bf0                 mov esi, eax
// 007d1bea  83c404               add esp, 4
// 007d1bed  8975ec               mov dword ptr [ebp - 0x14], esi
// 007d1bf0  c745fc00000000       mov dword ptr [ebp - 4], 0
// 007d1bf7  8975e8               mov dword ptr [ebp - 0x18], esi
// 007d1bfa  c645fc01             mov byte ptr [ebp - 4], 1
// 007d1bfe  85f6                 test esi, esi
// 007d1c00  7427                 je 0x7d1c29
// 007d1c02  8b4508               mov eax, dword ptr [ebp + 8]
// 007d1c05  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 007d1c08  8b5510               mov edx, dword ptr [ebp + 0x10]
// 007d1c0b  8906                 mov dword ptr [esi], eax
// 007d1c0d  8b4514               mov eax, dword ptr [ebp + 0x14]
// 007d1c10  894e04               mov dword ptr [esi + 4], ecx
// 007d1c13  50                   push eax
// 007d1c14  8d4e0c               lea ecx, [esi + 0xc]
// 007d1c17  895608               mov dword ptr [esi + 8], edx
// 007d1c1a  e851f6ffff           call 0x7d1270
// 007d1c1f  8a4d18               mov cl, byte ptr [ebp + 0x18]
// 007d1c22  884e34               mov byte ptr [esi + 0x34], cl
// 007d1c25  c6463500             mov byte ptr [esi + 0x35], 0
// 007d1c29  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 007d1c2c  5f                   pop edi
// 007d1c2d  8bc6                 mov eax, esi
// 007d1c2f  5e                   pop esi
// 007d1c30  64890d00000000       mov dword ptr fs:[0], ecx
// 007d1c37  5b                   pop ebx
// 007d1c38  8be5                 mov esp, ebp
// 007d1c3a  5d                   pop ebp
// 007d1c3b  c21400               ret 0x14
// library boost-1.34.1/libs\signals\src\named_slot_map.cpp (function ?_Buynode@?$_Tree@V?$_Tmap_traits@Vstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@V?$function2@_NVstored_group@detail@signals@boost@@V1234@V?$allocator@Vfunction_base@boost@@@std@@@4@V?$allocator@U?$pair@$$CBVstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@@std@@@6@$0A@@std@@@std@@IAEPAU_Node@?$_Tree_nod@V?$_Tmap_traits@Vstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@V?$function2@_NVstored_group@detail@signals@boost@@V1234@V?$allocator@Vfunction_base@boost@@@std@@@4@V?$allocator@U?$pair@$$CBVstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@@std@@@6@$0A@@std@@@2@PAU342@00ABU?$pair@$$CBVstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@@2@D@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/named_slot_map.cpp
