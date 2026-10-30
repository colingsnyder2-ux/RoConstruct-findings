// roc 2010-06 0053df70  unit: RBX::QuadVolumeBuilder  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0053df70
//
// 0053df70  56                   push esi
// 0053df71  8bf1                 mov esi, ecx
// 0053df73  833e00               cmp dword ptr [esi], 0
// 0053df76  57                   push edi
// 0053df77  8b3d0ca99e00         mov edi, dword ptr [0x9ea90c]
// 0053df7d  7502                 jne 0x53df81
// 0053df7f  ffd7                 call edi
// 0053df81  8b4604               mov eax, dword ptr [esi + 4]
// 0053df84  80786500             cmp byte ptr [eax + 0x65], 0
// 0053df88  7405                 je 0x53df8f
// 0053df8a  ffd7                 call edi
// 0053df8c  5f                   pop edi
// 0053df8d  5e                   pop esi
// 0053df8e  c3                   ret 
// 0053df8f  8b4808               mov ecx, dword ptr [eax + 8]
// 0053df92  80796500             cmp byte ptr [ecx + 0x65], 0
// 0053df96  7518                 jne 0x53dfb0
// 0053df98  8b01                 mov eax, dword ptr [ecx]
// 0053df9a  80786500             cmp byte ptr [eax + 0x65], 0
// 0053df9e  750a                 jne 0x53dfaa
// 0053dfa0  8bc8                 mov ecx, eax
// 0053dfa2  8b01                 mov eax, dword ptr [ecx]
// 0053dfa4  80786500             cmp byte ptr [eax + 0x65], 0
// 0053dfa8  74f6                 je 0x53dfa0
// 0053dfaa  5f                   pop edi
// 0053dfab  894e04               mov dword ptr [esi + 4], ecx
// 0053dfae  5e                   pop esi
// 0053dfaf  c3                   ret 
// 0053dfb0  8b4004               mov eax, dword ptr [eax + 4]
// 0053dfb3  80786500             cmp byte ptr [eax + 0x65], 0
// 0053dfb7  751d                 jne 0x53dfd6
// 0053dfb9  8da42400000000       lea esp, [esp]
// 0053dfc0  8b4e04               mov ecx, dword ptr [esi + 4]
// 0053dfc3  3b4808               cmp ecx, dword ptr [eax + 8]
// 0053dfc6  750e                 jne 0x53dfd6
// 0053dfc8  894604               mov dword ptr [esi + 4], eax
// 0053dfcb  8bd0                 mov edx, eax
// 0053dfcd  8b4204               mov eax, dword ptr [edx + 4]
// 0053dfd0  80786500             cmp byte ptr [eax + 0x65], 0
// 0053dfd4  74ea                 je 0x53dfc0
// 0053dfd6  5f                   pop edi
// 0053dfd7  894604               mov dword ptr [esi + 4], eax
// 0053dfda  5e                   pop esi
// 0053dfdb  c3                   ret 
// copied from an identical function in another client (function ?_Inc@const_iterator@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UTokenState@Compiler2Pass@Ogre@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UTokenState@Compiler2Pass@Ogre@@@std@@@2@$0A@@std@@@std@@QAEXXZ)

// roc-cl: 50727
// roc-lang: cpp
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD
// roc-lib: ogre-1.4.9-dll OgreCompiler2Pass.cpp