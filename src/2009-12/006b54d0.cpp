// roc 2009-12 006b54d0  unit: RBX::Soundscape::VSoundId::?$TypedPropertyDescriptor  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006b54d0
//
// 006b54d0  53                   push ebx
// 006b54d1  56                   push esi
// 006b54d2  57                   push edi
// 006b54d3  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 006b54d7  807f3500             cmp byte ptr [edi + 0x35], 0
// 006b54db  8bd9                 mov ebx, ecx
// 006b54dd  8bf7                 mov esi, edi
// 006b54df  7526                 jne 0x6b5507
// 006b54e1  8b4608               mov eax, dword ptr [esi + 8]
// 006b54e4  50                   push eax
// 006b54e5  8bcb                 mov ecx, ebx
// 006b54e7  e8e4ffffff           call 0x6b54d0
// 006b54ec  8b36                 mov esi, dword ptr [esi]
// 006b54ee  8d4f0c               lea ecx, [edi + 0xc]
// 006b54f1  e8eaeaffff           call 0x6b3fe0
// 006b54f6  57                   push edi
// 006b54f7  e85ee31300           call 0x7f385a
// 006b54fc  83c404               add esp, 4
// 006b54ff  807e3500             cmp byte ptr [esi + 0x35], 0
// 006b5503  8bfe                 mov edi, esi
// 006b5505  74da                 je 0x6b54e1
// 006b5507  5f                   pop edi
// 006b5508  5e                   pop esi
// 006b5509  5b                   pop ebx
// 006b550a  c20400               ret 4
// library boost-1.34.1/libs\signals\src\named_slot_map.cpp (function ?_Erase@?$_Tree@V?$_Tmap_traits@Vstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@V?$function2@_NVstored_group@detail@signals@boost@@V1234@V?$allocator@Vfunction_base@boost@@@std@@@4@V?$allocator@U?$pair@$$CBVstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@@std@@@6@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@Vstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@V?$function2@_NVstored_group@detail@signals@boost@@V1234@V?$allocator@Vfunction_base@boost@@@std@@@4@V?$allocator@U?$pair@$$CBVstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@@std@@@6@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/named_slot_map.cpp
