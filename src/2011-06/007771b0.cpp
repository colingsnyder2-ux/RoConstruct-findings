// from server: 100% by auto
// roc 2011-06 007771b0  unit: RBX::LibraryService::VLibraryStateObject::?$sp_counted_impl_p  size: 126 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007771b0
//
// 007771b0  55                   push ebp
// 007771b1  8bec                 mov ebp, esp
// 007771b3  6aff                 push -1
// 007771b5  6831b39f00           push 0x9fb331
// 007771ba  64a100000000         mov eax, dword ptr fs:[0]
// 007771c0  50                   push eax
// 007771c1  64892500000000       mov dword ptr fs:[0], esp
// 007771c8  83ec0c               sub esp, 0xc
// 007771cb  53                   push ebx
// 007771cc  56                   push esi
// 007771cd  57                   push edi
// 007771ce  8965f0               mov dword ptr [ebp - 0x10], esp
// 007771d1  6a38                 push 0x38
// 007771d3  e8862e0900           call 0x80a05e
// 007771d8  8bf0                 mov esi, eax
// 007771da  83c404               add esp, 4
// 007771dd  8975ec               mov dword ptr [ebp - 0x14], esi
// 007771e0  c745fc00000000       mov dword ptr [ebp - 4], 0
// 007771e7  8975e8               mov dword ptr [ebp - 0x18], esi
// 007771ea  c645fc01             mov byte ptr [ebp - 4], 1
// 007771ee  85f6                 test esi, esi
// 007771f0  7427                 je 0x777219
// 007771f2  8b4508               mov eax, dword ptr [ebp + 8]
// 007771f5  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 007771f8  8b5510               mov edx, dword ptr [ebp + 0x10]
// 007771fb  8906                 mov dword ptr [esi], eax
// 007771fd  8b4514               mov eax, dword ptr [ebp + 0x14]
// 00777200  894e04               mov dword ptr [esi + 4], ecx
// 00777203  50                   push eax
// 00777204  8d4e0c               lea ecx, [esi + 0xc]
// 00777207  895608               mov dword ptr [esi + 8], edx
// 0077720a  e891f9ffff           call 0x776ba0
// 0077720f  8a4d18               mov cl, byte ptr [ebp + 0x18]
// 00777212  884e34               mov byte ptr [esi + 0x34], cl
// 00777215  c6463500             mov byte ptr [esi + 0x35], 0
// 00777219  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0077721c  5f                   pop edi
// 0077721d  8bc6                 mov eax, esi
// 0077721f  5e                   pop esi
// 00777220  64890d00000000       mov dword ptr fs:[0], ecx
// 00777227  5b                   pop ebx
// 00777228  8be5                 mov esp, ebp
// 0077722a  5d                   pop ebp
// 0077722b  c21400               ret 0x14
// library boost-1.34.1/libs\signals\src\named_slot_map.cpp (function ?_Buynode@?$_Tree@V?$_Tmap_traits@Vstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@V?$function2@_NVstored_group@detail@signals@boost@@V1234@V?$allocator@Vfunction_base@boost@@@std@@@4@V?$allocator@U?$pair@$$CBVstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@@std@@@6@$0A@@std@@@std@@IAEPAU_Node@?$_Tree_nod@V?$_Tmap_traits@Vstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@V?$function2@_NVstored_group@detail@signals@boost@@V1234@V?$allocator@Vfunction_base@boost@@@std@@@4@V?$allocator@U?$pair@$$CBVstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@@std@@@6@$0A@@std@@@2@PAU342@00ABU?$pair@$$CBVstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@@2@D@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/named_slot_map.cpp
