// roc 2007-03 005b5dd0  unit: seg_005b0000  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005b5dd0
//
// 005b5dd0  56                   push esi
// 005b5dd1  8bf1                 mov esi, ecx
// 005b5dd3  833e00               cmp dword ptr [esi], 0
// 005b5dd6  57                   push edi
// 005b5dd7  8b3d44e97700         mov edi, dword ptr [0x77e944]
// 005b5ddd  7502                 jne 0x5b5de1
// 005b5ddf  ffd7                 call edi
// 005b5de1  8b4604               mov eax, dword ptr [esi + 4]
// 005b5de4  80781500             cmp byte ptr [eax + 0x15], 0
// 005b5de8  7405                 je 0x5b5def
// 005b5dea  ffd7                 call edi
// 005b5dec  5f                   pop edi
// 005b5ded  5e                   pop esi
// 005b5dee  c3                   ret 
// 005b5def  8b4808               mov ecx, dword ptr [eax + 8]
// 005b5df2  80791500             cmp byte ptr [ecx + 0x15], 0
// 005b5df6  7518                 jne 0x5b5e10
// 005b5df8  8b01                 mov eax, dword ptr [ecx]
// 005b5dfa  80781500             cmp byte ptr [eax + 0x15], 0
// 005b5dfe  750a                 jne 0x5b5e0a
// 005b5e00  8bc8                 mov ecx, eax
// 005b5e02  8b01                 mov eax, dword ptr [ecx]
// 005b5e04  80781500             cmp byte ptr [eax + 0x15], 0
// 005b5e08  74f6                 je 0x5b5e00
// 005b5e0a  5f                   pop edi
// 005b5e0b  894e04               mov dword ptr [esi + 4], ecx
// 005b5e0e  5e                   pop esi
// 005b5e0f  c3                   ret 
// 005b5e10  8b4004               mov eax, dword ptr [eax + 4]
// 005b5e13  80781500             cmp byte ptr [eax + 0x15], 0
// 005b5e17  751d                 jne 0x5b5e36
// 005b5e19  8da42400000000       lea esp, [esp]
// 005b5e20  8b4e04               mov ecx, dword ptr [esi + 4]
// 005b5e23  3b4808               cmp ecx, dword ptr [eax + 8]
// 005b5e26  750e                 jne 0x5b5e36
// 005b5e28  894604               mov dword ptr [esi + 4], eax
// 005b5e2b  8bd0                 mov edx, eax
// 005b5e2d  8b4204               mov eax, dword ptr [edx + 4]
// 005b5e30  80781500             cmp byte ptr [eax + 0x15], 0
// 005b5e34  74ea                 je 0x5b5e20
// 005b5e36  5f                   pop edi
// 005b5e37  894604               mov dword ptr [esi + 4], eax
// 005b5e3a  5e                   pop esi
// 005b5e3b  c3                   ret 
// library rbxgs/v8datamodel\ModelInstance.cpp (function ?_Inc@const_iterator@?$_Tree@V?$_Tmap_traits@PBVName@RBX@@PBVICreator@2@U?$less@PBVName@RBX@@@std@@V?$allocator@U?$pair@QBVName@RBX@@PBVICreator@2@@std@@@5@$0A@@std@@@std@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ModelInstance.cpp
