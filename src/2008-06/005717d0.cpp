// from server: 100% by auto
// roc 2008-06 005717d0  unit: RBX::Reflection::ClassDescriptor  size: 126 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005717d0
//
// 005717d0  55                   push ebp
// 005717d1  8bec                 mov ebp, esp
// 005717d3  6aff                 push -1
// 005717d5  6881027d00           push 0x7d0281
// 005717da  64a100000000         mov eax, dword ptr fs:[0]
// 005717e0  50                   push eax
// 005717e1  64892500000000       mov dword ptr fs:[0], esp
// 005717e8  83ec0c               sub esp, 0xc
// 005717eb  53                   push ebx
// 005717ec  56                   push esi
// 005717ed  57                   push edi
// 005717ee  8965f0               mov dword ptr [ebp - 0x10], esp
// 005717f1  6a38                 push 0x38
// 005717f3  e828f11200           call 0x6a0920
// 005717f8  8bf0                 mov esi, eax
// 005717fa  83c404               add esp, 4
// 005717fd  8975ec               mov dword ptr [ebp - 0x14], esi
// 00571800  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00571807  8975e8               mov dword ptr [ebp - 0x18], esi
// 0057180a  c645fc01             mov byte ptr [ebp - 4], 1
// 0057180e  85f6                 test esi, esi
// 00571810  7427                 je 0x571839
// 00571812  8b4508               mov eax, dword ptr [ebp + 8]
// 00571815  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 00571818  8b5510               mov edx, dword ptr [ebp + 0x10]
// 0057181b  8906                 mov dword ptr [esi], eax
// 0057181d  8b4514               mov eax, dword ptr [ebp + 0x14]
// 00571820  894e04               mov dword ptr [esi + 4], ecx
// 00571823  50                   push eax
// 00571824  8d4e0c               lea ecx, [esi + 0xc]
// 00571827  895608               mov dword ptr [esi + 8], edx
// 0057182a  e8c1feffff           call 0x5716f0
// 0057182f  8a4d18               mov cl, byte ptr [ebp + 0x18]
// 00571832  884e34               mov byte ptr [esi + 0x34], cl
// 00571835  c6463500             mov byte ptr [esi + 0x35], 0
// 00571839  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0057183c  5f                   pop edi
// 0057183d  8bc6                 mov eax, esi
// 0057183f  5e                   pop esi
// 00571840  64890d00000000       mov dword ptr fs:[0], ecx
// 00571847  5b                   pop ebx
// 00571848  8be5                 mov esp, ebp
// 0057184a  5d                   pop ebp
// 0057184b  c21400               ret 0x14
// library boost-1.34.1/libs\signals\src\named_slot_map.cpp (function ?_Buynode@?$_Tree@V?$_Tmap_traits@Vstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@V?$function2@_NVstored_group@detail@signals@boost@@V1234@V?$allocator@Vfunction_base@boost@@@std@@@4@V?$allocator@U?$pair@$$CBVstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@@std@@@6@$0A@@std@@@std@@IAEPAU_Node@?$_Tree_nod@V?$_Tmap_traits@Vstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@V?$function2@_NVstored_group@detail@signals@boost@@V1234@V?$allocator@Vfunction_base@boost@@@std@@@4@V?$allocator@U?$pair@$$CBVstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@@std@@@6@$0A@@std@@@2@PAU342@00ABU?$pair@$$CBVstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@@2@D@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/named_slot_map.cpp
