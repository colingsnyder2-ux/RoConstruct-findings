// roc 2007-03 007278f0  unit: seg_00720000  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007278f0
//
// 007278f0  56                   push esi
// 007278f1  8bf1                 mov esi, ecx
// 007278f3  833e00               cmp dword ptr [esi], 0
// 007278f6  57                   push edi
// 007278f7  8b3d44e97700         mov edi, dword ptr [0x77e944]
// 007278fd  7502                 jne 0x727901
// 007278ff  ffd7                 call edi
// 00727901  8b4604               mov eax, dword ptr [esi + 4]
// 00727904  80782500             cmp byte ptr [eax + 0x25], 0
// 00727908  7405                 je 0x72790f
// 0072790a  ffd7                 call edi
// 0072790c  5f                   pop edi
// 0072790d  5e                   pop esi
// 0072790e  c3                   ret 
// 0072790f  8b4808               mov ecx, dword ptr [eax + 8]
// 00727912  80792500             cmp byte ptr [ecx + 0x25], 0
// 00727916  7518                 jne 0x727930
// 00727918  8b01                 mov eax, dword ptr [ecx]
// 0072791a  80782500             cmp byte ptr [eax + 0x25], 0
// 0072791e  750a                 jne 0x72792a
// 00727920  8bc8                 mov ecx, eax
// 00727922  8b01                 mov eax, dword ptr [ecx]
// 00727924  80782500             cmp byte ptr [eax + 0x25], 0
// 00727928  74f6                 je 0x727920
// 0072792a  5f                   pop edi
// 0072792b  894e04               mov dword ptr [esi + 4], ecx
// 0072792e  5e                   pop esi
// 0072792f  c3                   ret 
// 00727930  8b4004               mov eax, dword ptr [eax + 4]
// 00727933  80782500             cmp byte ptr [eax + 0x25], 0
// 00727937  751d                 jne 0x727956
// 00727939  8da42400000000       lea esp, [esp]
// 00727940  8b4e04               mov ecx, dword ptr [esi + 4]
// 00727943  3b4808               cmp ecx, dword ptr [eax + 8]
// 00727946  750e                 jne 0x727956
// 00727948  894604               mov dword ptr [esi + 4], eax
// 0072794b  8bd0                 mov edx, eax
// 0072794d  8b4204               mov eax, dword ptr [edx + 4]
// 00727950  80782500             cmp byte ptr [eax + 0x25], 0
// 00727954  74ea                 je 0x727940
// 00727956  5f                   pop edi
// 00727957  894604               mov dword ptr [esi + 4], eax
// 0072795a  5e                   pop esi
// 0072795b  c3                   ret 
// library rbxgs/v8datamodel\Camera.cpp (function ?_Inc@const_iterator@?$_Tree@V?$_Tmap_traits@Vstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@V?$function2@_NVstored_group@detail@signals@boost@@V1234@V?$allocator@Vfunction_base@boost@@@std@@@4@V?$allocator@U?$pair@$$CBVstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@@std@@@6@$0A@@std@@@std@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
