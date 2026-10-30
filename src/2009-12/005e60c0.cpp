// roc 2009-12 005e60c0  unit: RBX::VBeveledBlockMesh::?$CustomizableMesh  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005e60c0
//
// 005e60c0  56                   push esi
// 005e60c1  8bf1                 mov esi, ecx
// 005e60c3  833e00               cmp dword ptr [esi], 0
// 005e60c6  57                   push edi
// 005e60c7  8b3d60b79800         mov edi, dword ptr [0x98b760]
// 005e60cd  7502                 jne 0x5e60d1
// 005e60cf  ffd7                 call edi
// 005e60d1  8b4604               mov eax, dword ptr [esi + 4]
// 005e60d4  80786500             cmp byte ptr [eax + 0x65], 0
// 005e60d8  7405                 je 0x5e60df
// 005e60da  ffd7                 call edi
// 005e60dc  5f                   pop edi
// 005e60dd  5e                   pop esi
// 005e60de  c3                   ret 
// 005e60df  8b4808               mov ecx, dword ptr [eax + 8]
// 005e60e2  80796500             cmp byte ptr [ecx + 0x65], 0
// 005e60e6  7518                 jne 0x5e6100
// 005e60e8  8b01                 mov eax, dword ptr [ecx]
// 005e60ea  80786500             cmp byte ptr [eax + 0x65], 0
// 005e60ee  750a                 jne 0x5e60fa
// 005e60f0  8bc8                 mov ecx, eax
// 005e60f2  8b01                 mov eax, dword ptr [ecx]
// 005e60f4  80786500             cmp byte ptr [eax + 0x65], 0
// 005e60f8  74f6                 je 0x5e60f0
// 005e60fa  5f                   pop edi
// 005e60fb  894e04               mov dword ptr [esi + 4], ecx
// 005e60fe  5e                   pop esi
// 005e60ff  c3                   ret 
// 005e6100  8b4004               mov eax, dword ptr [eax + 4]
// 005e6103  80786500             cmp byte ptr [eax + 0x65], 0
// 005e6107  751d                 jne 0x5e6126
// 005e6109  8da42400000000       lea esp, [esp]
// 005e6110  8b4e04               mov ecx, dword ptr [esi + 4]
// 005e6113  3b4808               cmp ecx, dword ptr [eax + 8]
// 005e6116  750e                 jne 0x5e6126
// 005e6118  894604               mov dword ptr [esi + 4], eax
// 005e611b  8bd0                 mov edx, eax
// 005e611d  8b4204               mov eax, dword ptr [edx + 4]
// 005e6120  80786500             cmp byte ptr [eax + 0x65], 0
// 005e6124  74ea                 je 0x5e6110
// 005e6126  5f                   pop edi
// 005e6127  894604               mov dword ptr [esi + 4], eax
// 005e612a  5e                   pop esi
// 005e612b  c3                   ret 
// copied from an identical function in another client (function ?_Inc@const_iterator@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UTokenState@Compiler2Pass@Ogre@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UTokenState@Compiler2Pass@Ogre@@@std@@@2@$0A@@std@@@std@@QAEXXZ)

// roc-cl: 50727
// roc-lang: cpp
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD
// roc-lib: ogre-1.4.9-dll OgreCompiler2Pass.cpp