// roc 2010-06 0053dee0  unit: RBX::QuadVolumeBuilder  size: 132 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0053dee0
//
// 0053dee0  56                   push esi
// 0053dee1  8bf1                 mov esi, ecx
// 0053dee3  833e00               cmp dword ptr [esi], 0
// 0053dee6  57                   push edi
// 0053dee7  8b3d0ca99e00         mov edi, dword ptr [0x9ea90c]
// 0053deed  7502                 jne 0x53def1
// 0053deef  ffd7                 call edi
// 0053def1  8b4604               mov eax, dword ptr [esi + 4]
// 0053def4  80786500             cmp byte ptr [eax + 0x65], 0
// 0053def8  7411                 je 0x53df0b
// 0053defa  8b4008               mov eax, dword ptr [eax + 8]
// 0053defd  894604               mov dword ptr [esi + 4], eax
// 0053df00  80786500             cmp byte ptr [eax + 0x65], 0
// 0053df04  745b                 je 0x53df61
// 0053df06  ffd7                 call edi
// 0053df08  5f                   pop edi
// 0053df09  5e                   pop esi
// 0053df0a  c3                   ret 
// 0053df0b  8b08                 mov ecx, dword ptr [eax]
// 0053df0d  80796500             cmp byte ptr [ecx + 0x65], 0
// 0053df11  751e                 jne 0x53df31
// 0053df13  8b4108               mov eax, dword ptr [ecx + 8]
// 0053df16  80786500             cmp byte ptr [eax + 0x65], 0
// 0053df1a  750f                 jne 0x53df2b
// 0053df1c  8d642400             lea esp, [esp]
// 0053df20  8bc8                 mov ecx, eax
// 0053df22  8b4108               mov eax, dword ptr [ecx + 8]
// 0053df25  80786500             cmp byte ptr [eax + 0x65], 0
// 0053df29  74f5                 je 0x53df20
// 0053df2b  5f                   pop edi
// 0053df2c  894e04               mov dword ptr [esi + 4], ecx
// 0053df2f  5e                   pop esi
// 0053df30  c3                   ret 
// 0053df31  8b4004               mov eax, dword ptr [eax + 4]
// 0053df34  80786500             cmp byte ptr [eax + 0x65], 0
// 0053df38  751b                 jne 0x53df55
// 0053df3a  8d9b00000000         lea ebx, [ebx]
// 0053df40  8b4e04               mov ecx, dword ptr [esi + 4]
// 0053df43  3b08                 cmp ecx, dword ptr [eax]
// 0053df45  750e                 jne 0x53df55
// 0053df47  894604               mov dword ptr [esi + 4], eax
// 0053df4a  8bd0                 mov edx, eax
// 0053df4c  8b4204               mov eax, dword ptr [edx + 4]
// 0053df4f  80786500             cmp byte ptr [eax + 0x65], 0
// 0053df53  74eb                 je 0x53df40
// 0053df55  8b4e04               mov ecx, dword ptr [esi + 4]
// 0053df58  80796500             cmp byte ptr [ecx + 0x65], 0
// 0053df5c  75a8                 jne 0x53df06
// 0053df5e  894604               mov dword ptr [esi + 4], eax
// 0053df61  5f                   pop edi
// 0053df62  5e                   pop esi
// 0053df63  c3                   ret 
// copied from an identical function in another client (function ?_Dec@const_iterator@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UTokenState@Compiler2Pass@Ogre@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UTokenState@Compiler2Pass@Ogre@@@std@@@2@$0A@@std@@@std@@QAEXXZ)

// roc-cl: 50727
// roc-lang: cpp
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD
// roc-lib: ogre-1.4.9-dll OgreCompiler2Pass.cpp