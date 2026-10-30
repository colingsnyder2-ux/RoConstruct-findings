// roc 2009-12 005e6030  unit: RBX::VBeveledBlockMesh::?$CustomizableMesh  size: 132 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005e6030
//
// 005e6030  56                   push esi
// 005e6031  8bf1                 mov esi, ecx
// 005e6033  833e00               cmp dword ptr [esi], 0
// 005e6036  57                   push edi
// 005e6037  8b3d60b79800         mov edi, dword ptr [0x98b760]
// 005e603d  7502                 jne 0x5e6041
// 005e603f  ffd7                 call edi
// 005e6041  8b4604               mov eax, dword ptr [esi + 4]
// 005e6044  80786500             cmp byte ptr [eax + 0x65], 0
// 005e6048  7411                 je 0x5e605b
// 005e604a  8b4008               mov eax, dword ptr [eax + 8]
// 005e604d  894604               mov dword ptr [esi + 4], eax
// 005e6050  80786500             cmp byte ptr [eax + 0x65], 0
// 005e6054  745b                 je 0x5e60b1
// 005e6056  ffd7                 call edi
// 005e6058  5f                   pop edi
// 005e6059  5e                   pop esi
// 005e605a  c3                   ret 
// 005e605b  8b08                 mov ecx, dword ptr [eax]
// 005e605d  80796500             cmp byte ptr [ecx + 0x65], 0
// 005e6061  751e                 jne 0x5e6081
// 005e6063  8b4108               mov eax, dword ptr [ecx + 8]
// 005e6066  80786500             cmp byte ptr [eax + 0x65], 0
// 005e606a  750f                 jne 0x5e607b
// 005e606c  8d642400             lea esp, [esp]
// 005e6070  8bc8                 mov ecx, eax
// 005e6072  8b4108               mov eax, dword ptr [ecx + 8]
// 005e6075  80786500             cmp byte ptr [eax + 0x65], 0
// 005e6079  74f5                 je 0x5e6070
// 005e607b  5f                   pop edi
// 005e607c  894e04               mov dword ptr [esi + 4], ecx
// 005e607f  5e                   pop esi
// 005e6080  c3                   ret 
// 005e6081  8b4004               mov eax, dword ptr [eax + 4]
// 005e6084  80786500             cmp byte ptr [eax + 0x65], 0
// 005e6088  751b                 jne 0x5e60a5
// 005e608a  8d9b00000000         lea ebx, [ebx]
// 005e6090  8b4e04               mov ecx, dword ptr [esi + 4]
// 005e6093  3b08                 cmp ecx, dword ptr [eax]
// 005e6095  750e                 jne 0x5e60a5
// 005e6097  894604               mov dword ptr [esi + 4], eax
// 005e609a  8bd0                 mov edx, eax
// 005e609c  8b4204               mov eax, dword ptr [edx + 4]
// 005e609f  80786500             cmp byte ptr [eax + 0x65], 0
// 005e60a3  74eb                 je 0x5e6090
// 005e60a5  8b4e04               mov ecx, dword ptr [esi + 4]
// 005e60a8  80796500             cmp byte ptr [ecx + 0x65], 0
// 005e60ac  75a8                 jne 0x5e6056
// 005e60ae  894604               mov dword ptr [esi + 4], eax
// 005e60b1  5f                   pop edi
// 005e60b2  5e                   pop esi
// 005e60b3  c3                   ret 
// copied from an identical function in another client (function ?_Dec@const_iterator@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UTokenState@Compiler2Pass@Ogre@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UTokenState@Compiler2Pass@Ogre@@@std@@@2@$0A@@std@@@std@@QAEXXZ)

// roc-cl: 50727
// roc-lang: cpp
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD
// roc-lib: ogre-1.4.9-dll OgreCompiler2Pass.cpp