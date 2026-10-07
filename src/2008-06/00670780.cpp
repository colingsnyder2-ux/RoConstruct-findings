// roc 2008-06 00670780  unit: Ogre::VRbxFont::?$SharedPtr  size: 126 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00670780
//
// 00670780  55                   push ebp
// 00670781  8bec                 mov ebp, esp
// 00670783  6aff                 push -1
// 00670785  6891c87d00           push 0x7dc891
// 0067078a  64a100000000         mov eax, dword ptr fs:[0]
// 00670790  50                   push eax
// 00670791  64892500000000       mov dword ptr fs:[0], esp
// 00670798  83ec0c               sub esp, 0xc
// 0067079b  53                   push ebx
// 0067079c  56                   push esi
// 0067079d  57                   push edi
// 0067079e  8965f0               mov dword ptr [ebp - 0x10], esp
// 006707a1  6a38                 push 0x38
// 006707a3  e878010300           call 0x6a0920
// 006707a8  8bf0                 mov esi, eax
// 006707aa  83c404               add esp, 4
// 006707ad  8975ec               mov dword ptr [ebp - 0x14], esi
// 006707b0  c745fc00000000       mov dword ptr [ebp - 4], 0
// 006707b7  8975e8               mov dword ptr [ebp - 0x18], esi
// 006707ba  c645fc01             mov byte ptr [ebp - 4], 1
// 006707be  85f6                 test esi, esi
// 006707c0  7427                 je 0x6707e9
// 006707c2  8b4508               mov eax, dword ptr [ebp + 8]
// 006707c5  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 006707c8  8b5510               mov edx, dword ptr [ebp + 0x10]
// 006707cb  8906                 mov dword ptr [esi], eax
// 006707cd  8b4514               mov eax, dword ptr [ebp + 0x14]
// 006707d0  894e04               mov dword ptr [esi + 4], ecx
// 006707d3  50                   push eax
// 006707d4  8d4e0c               lea ecx, [esi + 0xc]
// 006707d7  895608               mov dword ptr [esi + 8], edx
// 006707da  e801f5ffff           call 0x66fce0
// 006707df  8a4d18               mov cl, byte ptr [ebp + 0x18]
// 006707e2  884e34               mov byte ptr [esi + 0x34], cl
// 006707e5  c6463500             mov byte ptr [esi + 0x35], 0
// 006707e9  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 006707ec  5f                   pop edi
// 006707ed  8bc6                 mov eax, esi
// 006707ef  5e                   pop esi
// 006707f0  64890d00000000       mov dword ptr fs:[0], ecx
// 006707f7  5b                   pop ebx
// 006707f8  8be5                 mov esp, ebp
// 006707fa  5d                   pop ebp
// 006707fb  c21400               ret 0x14
// library boost-1.34.1/libs\signals\src\named_slot_map.cpp (function ?_Buynode@?$_Tree@V?$_Tmap_traits@Vstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@V?$function2@_NVstored_group@detail@signals@boost@@V1234@V?$allocator@Vfunction_base@boost@@@std@@@4@V?$allocator@U?$pair@$$CBVstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@@std@@@6@$0A@@std@@@std@@IAEPAU_Node@?$_Tree_nod@V?$_Tmap_traits@Vstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@V?$function2@_NVstored_group@detail@signals@boost@@V1234@V?$allocator@Vfunction_base@boost@@@std@@@4@V?$allocator@U?$pair@$$CBVstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@@std@@@6@$0A@@std@@@2@PAU342@00ABU?$pair@$$CBVstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@@2@D@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/named_slot_map.cpp
