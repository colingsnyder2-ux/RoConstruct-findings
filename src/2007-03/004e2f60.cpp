// roc 2007-03 004e2f60  unit: seg_004e0000  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004e2f60
//
// 004e2f60  56                   push esi
// 004e2f61  8bf1                 mov esi, ecx
// 004e2f63  833e00               cmp dword ptr [esi], 0
// 004e2f66  57                   push edi
// 004e2f67  8b3d44e97700         mov edi, dword ptr [0x77e944]
// 004e2f6d  7502                 jne 0x4e2f71
// 004e2f6f  ffd7                 call edi
// 004e2f71  8b4604               mov eax, dword ptr [esi + 4]
// 004e2f74  80781d00             cmp byte ptr [eax + 0x1d], 0
// 004e2f78  7405                 je 0x4e2f7f
// 004e2f7a  ffd7                 call edi
// 004e2f7c  5f                   pop edi
// 004e2f7d  5e                   pop esi
// 004e2f7e  c3                   ret 
// 004e2f7f  8b4808               mov ecx, dword ptr [eax + 8]
// 004e2f82  80791d00             cmp byte ptr [ecx + 0x1d], 0
// 004e2f86  7518                 jne 0x4e2fa0
// 004e2f88  8b01                 mov eax, dword ptr [ecx]
// 004e2f8a  80781d00             cmp byte ptr [eax + 0x1d], 0
// 004e2f8e  750a                 jne 0x4e2f9a
// 004e2f90  8bc8                 mov ecx, eax
// 004e2f92  8b01                 mov eax, dword ptr [ecx]
// 004e2f94  80781d00             cmp byte ptr [eax + 0x1d], 0
// 004e2f98  74f6                 je 0x4e2f90
// 004e2f9a  5f                   pop edi
// 004e2f9b  894e04               mov dword ptr [esi + 4], ecx
// 004e2f9e  5e                   pop esi
// 004e2f9f  c3                   ret 
// 004e2fa0  8b4004               mov eax, dword ptr [eax + 4]
// 004e2fa3  80781d00             cmp byte ptr [eax + 0x1d], 0
// 004e2fa7  751d                 jne 0x4e2fc6
// 004e2fa9  8da42400000000       lea esp, [esp]
// 004e2fb0  8b4e04               mov ecx, dword ptr [esi + 4]
// 004e2fb3  3b4808               cmp ecx, dword ptr [eax + 8]
// 004e2fb6  750e                 jne 0x4e2fc6
// 004e2fb8  894604               mov dword ptr [esi + 4], eax
// 004e2fbb  8bd0                 mov edx, eax
// 004e2fbd  8b4204               mov eax, dword ptr [edx + 4]
// 004e2fc0  80781d00             cmp byte ptr [eax + 0x1d], 0
// 004e2fc4  74ea                 je 0x4e2fb0
// 004e2fc6  5f                   pop edi
// 004e2fc7  894604               mov dword ptr [esi + 4], eax
// 004e2fca  5e                   pop esi
// 004e2fcb  c3                   ret 
// library rbxgs/v8world\Block.cpp (function ?_Inc@const_iterator@?$_Tree@V?$_Tmap_traits@VVector3@G3D@@PAVBlockTemplate@RBX@@UmyLess@4@V?$allocator@U?$pair@$$CBVVector3@G3D@@PAVBlockTemplate@RBX@@@std@@@std@@$0A@@std@@@std@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Block.cpp
