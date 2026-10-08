// from server: 100% by auto
// roc 2009-06 006fd4b0  unit: Ogre::VRbxFont::?$SharedPtr  size: 126 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006fd4b0
//
// 006fd4b0  55                   push ebp
// 006fd4b1  8bec                 mov ebp, esp
// 006fd4b3  6aff                 push -1
// 006fd4b5  68412a8700           push 0x872a41
// 006fd4ba  64a100000000         mov eax, dword ptr fs:[0]
// 006fd4c0  50                   push eax
// 006fd4c1  64892500000000       mov dword ptr fs:[0], esp
// 006fd4c8  83ec0c               sub esp, 0xc
// 006fd4cb  53                   push ebx
// 006fd4cc  56                   push esi
// 006fd4cd  57                   push edi
// 006fd4ce  8965f0               mov dword ptr [ebp - 0x10], esp
// 006fd4d1  6a38                 push 0x38
// 006fd4d3  e860b50100           call 0x718a38
// 006fd4d8  8bf0                 mov esi, eax
// 006fd4da  83c404               add esp, 4
// 006fd4dd  8975ec               mov dword ptr [ebp - 0x14], esi
// 006fd4e0  c745fc00000000       mov dword ptr [ebp - 4], 0
// 006fd4e7  8975e8               mov dword ptr [ebp - 0x18], esi
// 006fd4ea  c645fc01             mov byte ptr [ebp - 4], 1
// 006fd4ee  85f6                 test esi, esi
// 006fd4f0  7427                 je 0x6fd519
// 006fd4f2  8b4508               mov eax, dword ptr [ebp + 8]
// 006fd4f5  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 006fd4f8  8b5510               mov edx, dword ptr [ebp + 0x10]
// 006fd4fb  8906                 mov dword ptr [esi], eax
// 006fd4fd  8b4514               mov eax, dword ptr [ebp + 0x14]
// 006fd500  894e04               mov dword ptr [esi + 4], ecx
// 006fd503  50                   push eax
// 006fd504  8d4e0c               lea ecx, [esi + 0xc]
// 006fd507  895608               mov dword ptr [esi + 8], edx
// 006fd50a  e8f1f3ffff           call 0x6fc900
// 006fd50f  8a4d18               mov cl, byte ptr [ebp + 0x18]
// 006fd512  884e34               mov byte ptr [esi + 0x34], cl
// 006fd515  c6463500             mov byte ptr [esi + 0x35], 0
// 006fd519  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 006fd51c  5f                   pop edi
// 006fd51d  8bc6                 mov eax, esi
// 006fd51f  5e                   pop esi
// 006fd520  64890d00000000       mov dword ptr fs:[0], ecx
// 006fd527  5b                   pop ebx
// 006fd528  8be5                 mov esp, ebp
// 006fd52a  5d                   pop ebp
// 006fd52b  c21400               ret 0x14
// library boost-1.34.1/libs\signals\src\named_slot_map.cpp (function ?_Buynode@?$_Tree@V?$_Tmap_traits@Vstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@V?$function2@_NVstored_group@detail@signals@boost@@V1234@V?$allocator@Vfunction_base@boost@@@std@@@4@V?$allocator@U?$pair@$$CBVstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@@std@@@6@$0A@@std@@@std@@IAEPAU_Node@?$_Tree_nod@V?$_Tmap_traits@Vstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@V?$function2@_NVstored_group@detail@signals@boost@@V1234@V?$allocator@Vfunction_base@boost@@@std@@@4@V?$allocator@U?$pair@$$CBVstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@@std@@@6@$0A@@std@@@2@PAU342@00ABU?$pair@$$CBVstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@@2@D@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/named_slot_map.cpp
