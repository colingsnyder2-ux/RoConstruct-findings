// roc 2009-06 00562c30  unit: RBX::VBeveledBlockMesh::?$CustomizableMesh  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00562c30
//
// 00562c30  56                   push esi
// 00562c31  8bf1                 mov esi, ecx
// 00562c33  833e00               cmp dword ptr [esi], 0
// 00562c36  57                   push edi
// 00562c37  8b3dace98900         mov edi, dword ptr [0x89e9ac]
// 00562c3d  7502                 jne 0x562c41
// 00562c3f  ffd7                 call edi
// 00562c41  8b4604               mov eax, dword ptr [esi + 4]
// 00562c44  80786500             cmp byte ptr [eax + 0x65], 0
// 00562c48  7405                 je 0x562c4f
// 00562c4a  ffd7                 call edi
// 00562c4c  5f                   pop edi
// 00562c4d  5e                   pop esi
// 00562c4e  c3                   ret 
// 00562c4f  8b4808               mov ecx, dword ptr [eax + 8]
// 00562c52  80796500             cmp byte ptr [ecx + 0x65], 0
// 00562c56  7518                 jne 0x562c70
// 00562c58  8b01                 mov eax, dword ptr [ecx]
// 00562c5a  80786500             cmp byte ptr [eax + 0x65], 0
// 00562c5e  750a                 jne 0x562c6a
// 00562c60  8bc8                 mov ecx, eax
// 00562c62  8b01                 mov eax, dword ptr [ecx]
// 00562c64  80786500             cmp byte ptr [eax + 0x65], 0
// 00562c68  74f6                 je 0x562c60
// 00562c6a  5f                   pop edi
// 00562c6b  894e04               mov dword ptr [esi + 4], ecx
// 00562c6e  5e                   pop esi
// 00562c6f  c3                   ret 
// 00562c70  8b4004               mov eax, dword ptr [eax + 4]
// 00562c73  80786500             cmp byte ptr [eax + 0x65], 0
// 00562c77  751d                 jne 0x562c96
// 00562c79  8da42400000000       lea esp, [esp]
// 00562c80  8b4e04               mov ecx, dword ptr [esi + 4]
// 00562c83  3b4808               cmp ecx, dword ptr [eax + 8]
// 00562c86  750e                 jne 0x562c96
// 00562c88  894604               mov dword ptr [esi + 4], eax
// 00562c8b  8bd0                 mov edx, eax
// 00562c8d  8b4204               mov eax, dword ptr [edx + 4]
// 00562c90  80786500             cmp byte ptr [eax + 0x65], 0
// 00562c94  74ea                 je 0x562c80
// 00562c96  5f                   pop edi
// 00562c97  894604               mov dword ptr [esi + 4], eax
// 00562c9a  5e                   pop esi
// 00562c9b  c3                   ret 
// copied from an identical function in another client (function ?_Inc@const_iterator@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UTokenState@Compiler2Pass@Ogre@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UTokenState@Compiler2Pass@Ogre@@@std@@@2@$0A@@std@@@std@@QAEXXZ)

// roc-cl: 50727
// roc-lang: cpp
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD
// roc-lib: ogre-1.4.9-dll OgreCompiler2Pass.cpp