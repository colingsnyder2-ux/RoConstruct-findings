// from server: 100% by auto
// roc 2008-06 00571080  unit: RBX::Reflection::ClassDescriptor  size: 150 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00571080
//
// 00571080  8b4140               mov eax, dword ptr [ecx + 0x40]
// 00571083  53                   push ebx
// 00571084  55                   push ebp
// 00571085  56                   push esi
// 00571086  8b7004               mov esi, dword ptr [eax + 4]
// 00571089  807e3500             cmp byte ptr [esi + 0x35], 0
// 0057108d  57                   push edi
// 0057108e  8be8                 mov ebp, eax
// 00571090  757d                 jne 0x57110f
// 00571092  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00571096  8d5908               lea ebx, [ecx + 8]
// 00571099  8da42400000000       lea esp, [esp]
// 005710a0  8b0f                 mov ecx, dword ptr [edi]
// 005710a2  83ec0c               sub esp, 0xc
// 005710a5  8bc4                 mov eax, esp
// 005710a7  8908                 mov dword ptr [eax], ecx
// 005710a9  8b5704               mov edx, dword ptr [edi + 4]
// 005710ac  895004               mov dword ptr [eax + 4], edx
// 005710af  8b4f08               mov ecx, dword ptr [edi + 8]
// 005710b2  89642420             mov dword ptr [esp + 0x20], esp
// 005710b6  894808               mov dword ptr [eax + 8], ecx
// 005710b9  85c9                 test ecx, ecx
// 005710bb  740c                 je 0x5710c9
// 005710bd  83c104               add ecx, 4
// 005710c0  b801000000           mov eax, 1
// 005710c5  f00fc101             lock xadd dword ptr [ecx], eax
// 005710c9  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 005710cc  83ec0c               sub esp, 0xc
// 005710cf  8bc4                 mov eax, esp
// 005710d1  8908                 mov dword ptr [eax], ecx
// 005710d3  8b5610               mov edx, dword ptr [esi + 0x10]
// 005710d6  895004               mov dword ptr [eax + 4], edx
// 005710d9  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 005710dc  8964242c             mov dword ptr [esp + 0x2c], esp
// 005710e0  894808               mov dword ptr [eax + 8], ecx
// 005710e3  85c9                 test ecx, ecx
// 005710e5  740c                 je 0x5710f3
// 005710e7  83c104               add ecx, 4
// 005710ea  b801000000           mov eax, 1
// 005710ef  f00fc101             lock xadd dword ptr [ecx], eax
// 005710f3  8bcb                 mov ecx, ebx
// 005710f5  e8a6fdffff           call 0x570ea0
// 005710fa  84c0                 test al, al
// 005710fc  7405                 je 0x571103
// 005710fe  8b7608               mov esi, dword ptr [esi + 8]
// 00571101  eb04                 jmp 0x571107
// 00571103  8bee                 mov ebp, esi
// 00571105  8b36                 mov esi, dword ptr [esi]
// 00571107  807e3500             cmp byte ptr [esi + 0x35], 0
// 0057110b  7493                 je 0x5710a0
// 0057110d  8bc5                 mov eax, ebp
// 0057110f  5f                   pop edi
// 00571110  5e                   pop esi
// 00571111  5d                   pop ebp
// 00571112  5b                   pop ebx
// 00571113  c20400               ret 4
// library boost-1.34.1/libs\signals\src\named_slot_map.cpp (function ?_Lbound@?$_Tree@V?$_Tmap_traits@Vstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@V?$function2@_NVstored_group@detail@signals@boost@@V1234@V?$allocator@Vfunction_base@boost@@@std@@@4@V?$allocator@U?$pair@$$CBVstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@@std@@@6@$0A@@std@@@std@@IBEPAU_Node@?$_Tree_nod@V?$_Tmap_traits@Vstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@V?$function2@_NVstored_group@detail@signals@boost@@V1234@V?$allocator@Vfunction_base@boost@@@std@@@4@V?$allocator@U?$pair@$$CBVstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@@std@@@6@$0A@@std@@@2@ABVstored_group@detail@signals@boost@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/named_slot_map.cpp
