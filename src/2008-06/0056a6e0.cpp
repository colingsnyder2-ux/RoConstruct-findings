// roc 2008-06 0056a6e0  unit: RBX::VInstance::?$NonFactoryProduct  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0056a6e0
//
// 0056a6e0  8b542404             mov edx, dword ptr [esp + 4]
// 0056a6e4  8b4208               mov eax, dword ptr [edx + 8]
// 0056a6e7  56                   push esi
// 0056a6e8  8b30                 mov esi, dword ptr [eax]
// 0056a6ea  897208               mov dword ptr [edx + 8], esi
// 0056a6ed  8b30                 mov esi, dword ptr [eax]
// 0056a6ef  807e3500             cmp byte ptr [esi + 0x35], 0
// 0056a6f3  7503                 jne 0x56a6f8
// 0056a6f5  895604               mov dword ptr [esi + 4], edx
// 0056a6f8  8b7204               mov esi, dword ptr [edx + 4]
// 0056a6fb  897004               mov dword ptr [eax + 4], esi
// 0056a6fe  8b4940               mov ecx, dword ptr [ecx + 0x40]
// 0056a701  5e                   pop esi
// 0056a702  3b5104               cmp edx, dword ptr [ecx + 4]
// 0056a705  750b                 jne 0x56a712
// 0056a707  894104               mov dword ptr [ecx + 4], eax
// 0056a70a  8910                 mov dword ptr [eax], edx
// 0056a70c  894204               mov dword ptr [edx + 4], eax
// 0056a70f  c20400               ret 4
// 0056a712  8b4a04               mov ecx, dword ptr [edx + 4]
// 0056a715  3b11                 cmp edx, dword ptr [ecx]
// 0056a717  750a                 jne 0x56a723
// 0056a719  8901                 mov dword ptr [ecx], eax
// 0056a71b  8910                 mov dword ptr [eax], edx
// 0056a71d  894204               mov dword ptr [edx + 4], eax
// 0056a720  c20400               ret 4
// 0056a723  894108               mov dword ptr [ecx + 8], eax
// 0056a726  8910                 mov dword ptr [eax], edx
// 0056a728  894204               mov dword ptr [edx + 4], eax
// 0056a72b  c20400               ret 4
// library boost-1.34.1/libs\signals\src\named_slot_map.cpp (function ?_Lrotate@?$_Tree@V?$_Tmap_traits@Vstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@V?$function2@_NVstored_group@detail@signals@boost@@V1234@V?$allocator@Vfunction_base@boost@@@std@@@4@V?$allocator@U?$pair@$$CBVstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@@std@@@6@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@Vstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@V?$function2@_NVstored_group@detail@signals@boost@@V1234@V?$allocator@Vfunction_base@boost@@@std@@@4@V?$allocator@U?$pair@$$CBVstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@@std@@@6@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/named_slot_map.cpp
