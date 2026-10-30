// roc 2009-06 00562ba0  unit: RBX::VBeveledBlockMesh::?$CustomizableMesh  size: 132 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00562ba0
//
// 00562ba0  56                   push esi
// 00562ba1  8bf1                 mov esi, ecx
// 00562ba3  833e00               cmp dword ptr [esi], 0
// 00562ba6  57                   push edi
// 00562ba7  8b3dace98900         mov edi, dword ptr [0x89e9ac]
// 00562bad  7502                 jne 0x562bb1
// 00562baf  ffd7                 call edi
// 00562bb1  8b4604               mov eax, dword ptr [esi + 4]
// 00562bb4  80786500             cmp byte ptr [eax + 0x65], 0
// 00562bb8  7411                 je 0x562bcb
// 00562bba  8b4008               mov eax, dword ptr [eax + 8]
// 00562bbd  894604               mov dword ptr [esi + 4], eax
// 00562bc0  80786500             cmp byte ptr [eax + 0x65], 0
// 00562bc4  745b                 je 0x562c21
// 00562bc6  ffd7                 call edi
// 00562bc8  5f                   pop edi
// 00562bc9  5e                   pop esi
// 00562bca  c3                   ret 
// 00562bcb  8b08                 mov ecx, dword ptr [eax]
// 00562bcd  80796500             cmp byte ptr [ecx + 0x65], 0
// 00562bd1  751e                 jne 0x562bf1
// 00562bd3  8b4108               mov eax, dword ptr [ecx + 8]
// 00562bd6  80786500             cmp byte ptr [eax + 0x65], 0
// 00562bda  750f                 jne 0x562beb
// 00562bdc  8d642400             lea esp, [esp]
// 00562be0  8bc8                 mov ecx, eax
// 00562be2  8b4108               mov eax, dword ptr [ecx + 8]
// 00562be5  80786500             cmp byte ptr [eax + 0x65], 0
// 00562be9  74f5                 je 0x562be0
// 00562beb  5f                   pop edi
// 00562bec  894e04               mov dword ptr [esi + 4], ecx
// 00562bef  5e                   pop esi
// 00562bf0  c3                   ret 
// 00562bf1  8b4004               mov eax, dword ptr [eax + 4]
// 00562bf4  80786500             cmp byte ptr [eax + 0x65], 0
// 00562bf8  751b                 jne 0x562c15
// 00562bfa  8d9b00000000         lea ebx, [ebx]
// 00562c00  8b4e04               mov ecx, dword ptr [esi + 4]
// 00562c03  3b08                 cmp ecx, dword ptr [eax]
// 00562c05  750e                 jne 0x562c15
// 00562c07  894604               mov dword ptr [esi + 4], eax
// 00562c0a  8bd0                 mov edx, eax
// 00562c0c  8b4204               mov eax, dword ptr [edx + 4]
// 00562c0f  80786500             cmp byte ptr [eax + 0x65], 0
// 00562c13  74eb                 je 0x562c00
// 00562c15  8b4e04               mov ecx, dword ptr [esi + 4]
// 00562c18  80796500             cmp byte ptr [ecx + 0x65], 0
// 00562c1c  75a8                 jne 0x562bc6
// 00562c1e  894604               mov dword ptr [esi + 4], eax
// 00562c21  5f                   pop edi
// 00562c22  5e                   pop esi
// 00562c23  c3                   ret 
// copied from an identical function in another client (function ?_Dec@const_iterator@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UTokenState@Compiler2Pass@Ogre@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UTokenState@Compiler2Pass@Ogre@@@std@@@2@$0A@@std@@@std@@QAEXXZ)

// roc-cl: 50727
// roc-lang: cpp
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD
// roc-lib: ogre-1.4.9-dll OgreCompiler2Pass.cpp