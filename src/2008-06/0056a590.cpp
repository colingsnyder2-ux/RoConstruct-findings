// from server: 100% by auto
// roc 2008-06 0056a590  unit: RBX::VInstance::?$NonFactoryProduct  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0056a590
//
// 0056a590  8b542404             mov edx, dword ptr [esp + 4]
// 0056a594  8b02                 mov eax, dword ptr [edx]
// 0056a596  56                   push esi
// 0056a597  8b7008               mov esi, dword ptr [eax + 8]
// 0056a59a  8932                 mov dword ptr [edx], esi
// 0056a59c  8b7008               mov esi, dword ptr [eax + 8]
// 0056a59f  807e3500             cmp byte ptr [esi + 0x35], 0
// 0056a5a3  7503                 jne 0x56a5a8
// 0056a5a5  895604               mov dword ptr [esi + 4], edx
// 0056a5a8  8b7204               mov esi, dword ptr [edx + 4]
// 0056a5ab  897004               mov dword ptr [eax + 4], esi
// 0056a5ae  8b4940               mov ecx, dword ptr [ecx + 0x40]
// 0056a5b1  5e                   pop esi
// 0056a5b2  3b5104               cmp edx, dword ptr [ecx + 4]
// 0056a5b5  750c                 jne 0x56a5c3
// 0056a5b7  894104               mov dword ptr [ecx + 4], eax
// 0056a5ba  895008               mov dword ptr [eax + 8], edx
// 0056a5bd  894204               mov dword ptr [edx + 4], eax
// 0056a5c0  c20400               ret 4
// 0056a5c3  8b4a04               mov ecx, dword ptr [edx + 4]
// 0056a5c6  3b5108               cmp edx, dword ptr [ecx + 8]
// 0056a5c9  750c                 jne 0x56a5d7
// 0056a5cb  894108               mov dword ptr [ecx + 8], eax
// 0056a5ce  895008               mov dword ptr [eax + 8], edx
// 0056a5d1  894204               mov dword ptr [edx + 4], eax
// 0056a5d4  c20400               ret 4
// 0056a5d7  8901                 mov dword ptr [ecx], eax
// 0056a5d9  895008               mov dword ptr [eax + 8], edx
// 0056a5dc  894204               mov dword ptr [edx + 4], eax
// 0056a5df  c20400               ret 4
// library boost-1.34.1/libs\signals\src\named_slot_map.cpp (function ?_Rrotate@?$_Tree@V?$_Tmap_traits@Vstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@V?$function2@_NVstored_group@detail@signals@boost@@V1234@V?$allocator@Vfunction_base@boost@@@std@@@4@V?$allocator@U?$pair@$$CBVstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@@std@@@6@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@Vstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@V?$function2@_NVstored_group@detail@signals@boost@@V1234@V?$allocator@Vfunction_base@boost@@@std@@@4@V?$allocator@U?$pair@$$CBVstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@@std@@@6@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/named_slot_map.cpp
