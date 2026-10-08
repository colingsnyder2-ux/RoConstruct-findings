// roc 2007-03 004cd400  unit: seg_004c0000  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004cd400
//
// 004cd400  56                   push esi
// 004cd401  8bf1                 mov esi, ecx
// 004cd403  833e00               cmp dword ptr [esi], 0
// 004cd406  57                   push edi
// 004cd407  8b3d44e97700         mov edi, dword ptr [0x77e944]
// 004cd40d  7502                 jne 0x4cd411
// 004cd40f  ffd7                 call edi
// 004cd411  8b4604               mov eax, dword ptr [esi + 4]
// 004cd414  80783500             cmp byte ptr [eax + 0x35], 0
// 004cd418  7405                 je 0x4cd41f
// 004cd41a  ffd7                 call edi
// 004cd41c  5f                   pop edi
// 004cd41d  5e                   pop esi
// 004cd41e  c3                   ret 
// 004cd41f  8b4808               mov ecx, dword ptr [eax + 8]
// 004cd422  80793500             cmp byte ptr [ecx + 0x35], 0
// 004cd426  7518                 jne 0x4cd440
// 004cd428  8b01                 mov eax, dword ptr [ecx]
// 004cd42a  80783500             cmp byte ptr [eax + 0x35], 0
// 004cd42e  750a                 jne 0x4cd43a
// 004cd430  8bc8                 mov ecx, eax
// 004cd432  8b01                 mov eax, dword ptr [ecx]
// 004cd434  80783500             cmp byte ptr [eax + 0x35], 0
// 004cd438  74f6                 je 0x4cd430
// 004cd43a  5f                   pop edi
// 004cd43b  894e04               mov dword ptr [esi + 4], ecx
// 004cd43e  5e                   pop esi
// 004cd43f  c3                   ret 
// 004cd440  8b4004               mov eax, dword ptr [eax + 4]
// 004cd443  80783500             cmp byte ptr [eax + 0x35], 0
// 004cd447  751d                 jne 0x4cd466
// 004cd449  8da42400000000       lea esp, [esp]
// 004cd450  8b4e04               mov ecx, dword ptr [esi + 4]
// 004cd453  3b4808               cmp ecx, dword ptr [eax + 8]
// 004cd456  750e                 jne 0x4cd466
// 004cd458  894604               mov dword ptr [esi + 4], eax
// 004cd45b  8bd0                 mov edx, eax
// 004cd45d  8b4204               mov eax, dword ptr [edx + 4]
// 004cd460  80783500             cmp byte ptr [eax + 0x35], 0
// 004cd464  74ea                 je 0x4cd450
// 004cd466  5f                   pop edi
// 004cd467  894604               mov dword ptr [esi + 4], eax
// 004cd46a  5e                   pop esi
// 004cd46b  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ?_Inc@const_iterator@?$_Tree@V?$_Tmap_traits@Vstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@V?$function2@_NVstored_group@detail@signals@boost@@V1234@V?$allocator@Vfunction_base@boost@@@std@@@4@V?$allocator@U?$pair@$$CBVstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@@std@@@6@$0A@@std@@@std@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
