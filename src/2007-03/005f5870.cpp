// roc 2007-03 005f5870  unit: seg_005f0000  size: 132 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005f5870
//
// 005f5870  56                   push esi
// 005f5871  8bf1                 mov esi, ecx
// 005f5873  833e00               cmp dword ptr [esi], 0
// 005f5876  57                   push edi
// 005f5877  8b3d44e97700         mov edi, dword ptr [0x77e944]
// 005f587d  7502                 jne 0x5f5881
// 005f587f  ffd7                 call edi
// 005f5881  8b4604               mov eax, dword ptr [esi + 4]
// 005f5884  80781d00             cmp byte ptr [eax + 0x1d], 0
// 005f5888  7411                 je 0x5f589b
// 005f588a  8b4008               mov eax, dword ptr [eax + 8]
// 005f588d  894604               mov dword ptr [esi + 4], eax
// 005f5890  80781d00             cmp byte ptr [eax + 0x1d], 0
// 005f5894  745b                 je 0x5f58f1
// 005f5896  ffd7                 call edi
// 005f5898  5f                   pop edi
// 005f5899  5e                   pop esi
// 005f589a  c3                   ret 
// 005f589b  8b08                 mov ecx, dword ptr [eax]
// 005f589d  80791d00             cmp byte ptr [ecx + 0x1d], 0
// 005f58a1  751e                 jne 0x5f58c1
// 005f58a3  8b4108               mov eax, dword ptr [ecx + 8]
// 005f58a6  80781d00             cmp byte ptr [eax + 0x1d], 0
// 005f58aa  750f                 jne 0x5f58bb
// 005f58ac  8d642400             lea esp, [esp]
// 005f58b0  8bc8                 mov ecx, eax
// 005f58b2  8b4108               mov eax, dword ptr [ecx + 8]
// 005f58b5  80781d00             cmp byte ptr [eax + 0x1d], 0
// 005f58b9  74f5                 je 0x5f58b0
// 005f58bb  5f                   pop edi
// 005f58bc  894e04               mov dword ptr [esi + 4], ecx
// 005f58bf  5e                   pop esi
// 005f58c0  c3                   ret 
// 005f58c1  8b4004               mov eax, dword ptr [eax + 4]
// 005f58c4  80781d00             cmp byte ptr [eax + 0x1d], 0
// 005f58c8  751b                 jne 0x5f58e5
// 005f58ca  8d9b00000000         lea ebx, [ebx]
// 005f58d0  8b4e04               mov ecx, dword ptr [esi + 4]
// 005f58d3  3b08                 cmp ecx, dword ptr [eax]
// 005f58d5  750e                 jne 0x5f58e5
// 005f58d7  894604               mov dword ptr [esi + 4], eax
// 005f58da  8bd0                 mov edx, eax
// 005f58dc  8b4204               mov eax, dword ptr [edx + 4]
// 005f58df  80781d00             cmp byte ptr [eax + 0x1d], 0
// 005f58e3  74eb                 je 0x5f58d0
// 005f58e5  8b4e04               mov ecx, dword ptr [esi + 4]
// 005f58e8  80791d00             cmp byte ptr [ecx + 0x1d], 0
// 005f58ec  75a8                 jne 0x5f5896
// 005f58ee  894604               mov dword ptr [esi + 4], eax
// 005f58f1  5f                   pop edi
// 005f58f2  5e                   pop esi
// 005f58f3  c3                   ret 
// library rbxgs/v8world\Block.cpp (function ?_Dec@const_iterator@?$_Tree@V?$_Tmap_traits@VVector3@G3D@@PAVBlockTemplate@RBX@@UmyLess@4@V?$allocator@U?$pair@$$CBVVector3@G3D@@PAVBlockTemplate@RBX@@@std@@@std@@$0A@@std@@@std@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Block.cpp
