// roc 2007-03 005f8100  unit: seg_005f0000  size: 132 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005f8100
//
// 005f8100  56                   push esi
// 005f8101  8bf1                 mov esi, ecx
// 005f8103  833e00               cmp dword ptr [esi], 0
// 005f8106  57                   push edi
// 005f8107  8b3d44e97700         mov edi, dword ptr [0x77e944]
// 005f810d  7502                 jne 0x5f8111
// 005f810f  ffd7                 call edi
// 005f8111  8b4604               mov eax, dword ptr [esi + 4]
// 005f8114  80782d00             cmp byte ptr [eax + 0x2d], 0
// 005f8118  7411                 je 0x5f812b
// 005f811a  8b4008               mov eax, dword ptr [eax + 8]
// 005f811d  894604               mov dword ptr [esi + 4], eax
// 005f8120  80782d00             cmp byte ptr [eax + 0x2d], 0
// 005f8124  745b                 je 0x5f8181
// 005f8126  ffd7                 call edi
// 005f8128  5f                   pop edi
// 005f8129  5e                   pop esi
// 005f812a  c3                   ret 
// 005f812b  8b08                 mov ecx, dword ptr [eax]
// 005f812d  80792d00             cmp byte ptr [ecx + 0x2d], 0
// 005f8131  751e                 jne 0x5f8151
// 005f8133  8b4108               mov eax, dword ptr [ecx + 8]
// 005f8136  80782d00             cmp byte ptr [eax + 0x2d], 0
// 005f813a  750f                 jne 0x5f814b
// 005f813c  8d642400             lea esp, [esp]
// 005f8140  8bc8                 mov ecx, eax
// 005f8142  8b4108               mov eax, dword ptr [ecx + 8]
// 005f8145  80782d00             cmp byte ptr [eax + 0x2d], 0
// 005f8149  74f5                 je 0x5f8140
// 005f814b  5f                   pop edi
// 005f814c  894e04               mov dword ptr [esi + 4], ecx
// 005f814f  5e                   pop esi
// 005f8150  c3                   ret 
// 005f8151  8b4004               mov eax, dword ptr [eax + 4]
// 005f8154  80782d00             cmp byte ptr [eax + 0x2d], 0
// 005f8158  751b                 jne 0x5f8175
// 005f815a  8d9b00000000         lea ebx, [ebx]
// 005f8160  8b4e04               mov ecx, dword ptr [esi + 4]
// 005f8163  3b08                 cmp ecx, dword ptr [eax]
// 005f8165  750e                 jne 0x5f8175
// 005f8167  894604               mov dword ptr [esi + 4], eax
// 005f816a  8bd0                 mov edx, eax
// 005f816c  8b4204               mov eax, dword ptr [edx + 4]
// 005f816f  80782d00             cmp byte ptr [eax + 0x2d], 0
// 005f8173  74eb                 je 0x5f8160
// 005f8175  8b4e04               mov ecx, dword ptr [esi + 4]
// 005f8178  80792d00             cmp byte ptr [ecx + 0x2d], 0
// 005f817c  75a8                 jne 0x5f8126
// 005f817e  894604               mov dword ptr [esi + 4], eax
// 005f8181  5f                   pop edi
// 005f8182  5e                   pop esi
// 005f8183  c3                   ret 
// library rbxgs/v8datamodel\Camera.cpp (function ?_Dec@const_iterator@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4CameraType@Camera@RBX@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4CameraType@Camera@RBX@@@std@@@2@$0A@@std@@@std@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
