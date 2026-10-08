// roc 2007-03 0052d670  unit: seg_00520000  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0052d670
//
// 0052d670  56                   push esi
// 0052d671  8bf1                 mov esi, ecx
// 0052d673  833e00               cmp dword ptr [esi], 0
// 0052d676  57                   push edi
// 0052d677  8b3d44e97700         mov edi, dword ptr [0x77e944]
// 0052d67d  7502                 jne 0x52d681
// 0052d67f  ffd7                 call edi
// 0052d681  8b4604               mov eax, dword ptr [esi + 4]
// 0052d684  80782d00             cmp byte ptr [eax + 0x2d], 0
// 0052d688  7405                 je 0x52d68f
// 0052d68a  ffd7                 call edi
// 0052d68c  5f                   pop edi
// 0052d68d  5e                   pop esi
// 0052d68e  c3                   ret 
// 0052d68f  8b4808               mov ecx, dword ptr [eax + 8]
// 0052d692  80792d00             cmp byte ptr [ecx + 0x2d], 0
// 0052d696  7518                 jne 0x52d6b0
// 0052d698  8b01                 mov eax, dword ptr [ecx]
// 0052d69a  80782d00             cmp byte ptr [eax + 0x2d], 0
// 0052d69e  750a                 jne 0x52d6aa
// 0052d6a0  8bc8                 mov ecx, eax
// 0052d6a2  8b01                 mov eax, dword ptr [ecx]
// 0052d6a4  80782d00             cmp byte ptr [eax + 0x2d], 0
// 0052d6a8  74f6                 je 0x52d6a0
// 0052d6aa  5f                   pop edi
// 0052d6ab  894e04               mov dword ptr [esi + 4], ecx
// 0052d6ae  5e                   pop esi
// 0052d6af  c3                   ret 
// 0052d6b0  8b4004               mov eax, dword ptr [eax + 4]
// 0052d6b3  80782d00             cmp byte ptr [eax + 0x2d], 0
// 0052d6b7  751d                 jne 0x52d6d6
// 0052d6b9  8da42400000000       lea esp, [esp]
// 0052d6c0  8b4e04               mov ecx, dword ptr [esi + 4]
// 0052d6c3  3b4808               cmp ecx, dword ptr [eax + 8]
// 0052d6c6  750e                 jne 0x52d6d6
// 0052d6c8  894604               mov dword ptr [esi + 4], eax
// 0052d6cb  8bd0                 mov edx, eax
// 0052d6cd  8b4204               mov eax, dword ptr [edx + 4]
// 0052d6d0  80782d00             cmp byte ptr [eax + 0x2d], 0
// 0052d6d4  74ea                 je 0x52d6c0
// 0052d6d6  5f                   pop edi
// 0052d6d7  894604               mov dword ptr [esi + 4], eax
// 0052d6da  5e                   pop esi
// 0052d6db  c3                   ret 
// library rbxgs/v8datamodel\Camera.cpp (function ?_Inc@const_iterator@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4CameraType@Camera@RBX@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4CameraType@Camera@RBX@@@std@@@2@$0A@@std@@@std@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
