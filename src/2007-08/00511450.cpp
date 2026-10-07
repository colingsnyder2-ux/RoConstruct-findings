// roc 2007-08 00511450  unit: G3D::H::PAV?$Array::?$Set  size: 209 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00511450
//
// 00511450  51                   push ecx
// 00511451  53                   push ebx
// 00511452  56                   push esi
// 00511453  57                   push edi
// 00511454  8bf1                 mov esi, ecx
// 00511456  8b8e04000600         mov ecx, dword ptr [esi + 0x60004]
// 0051145c  6a01                 push 1
// 0051145e  6a00                 push 0
// 00511460  e88b2cfeff           call 0x4f40f0
// 00511465  8b8600000600         mov eax, dword ptr [esi + 0x60000]
// 0051146b  33ff                 xor edi, edi
// 0051146d  397804               cmp dword ptr [eax + 4], edi
// 00511470  7e1f                 jle 0x511491
// 00511472  33db                 xor ebx, ebx
// 00511474  8b00                 mov eax, dword ptr [eax]
// 00511476  03c3                 add eax, ebx
// 00511478  50                   push eax
// 00511479  8bce                 mov ecx, esi
// 0051147b  e850fbffff           call 0x510fd0
// 00511480  8b8600000600         mov eax, dword ptr [esi + 0x60000]
// 00511486  83c701               add edi, 1
// 00511489  83c30c               add ebx, 0xc
// 0051148c  3b7804               cmp edi, dword ptr [eax + 4]
// 0051148f  7ce3                 jl 0x511474
// 00511491  8b8e00000600         mov ecx, dword ptr [esi + 0x60000]
// 00511497  8b5104               mov edx, dword ptr [ecx + 4]
// 0051149a  8b8e08000600         mov ecx, dword ptr [esi + 0x60008]
// 005114a0  6a01                 push 1
// 005114a2  52                   push edx
// 005114a3  e8f8b5f6ff           call 0x47caa0
// 005114a8  8b8604000600         mov eax, dword ptr [esi + 0x60004]
// 005114ae  8b4804               mov ecx, dword ptr [eax + 4]
// 005114b1  6a01                 push 1
// 005114b3  51                   push ecx
// 005114b4  8b8e0c000600         mov ecx, dword ptr [esi + 0x6000c]
// 005114ba  e8e1b5f6ff           call 0x47caa0
// 005114bf  8b8600000600         mov eax, dword ptr [esi + 0x60000]
// 005114c5  33ff                 xor edi, edi
// 005114c7  397804               cmp dword ptr [eax + 4], edi
// 005114ca  7e50                 jle 0x51151c
// 005114cc  897c240c             mov dword ptr [esp + 0xc], edi
// 005114d0  55                   push ebp
// 005114d1  8b00                 mov eax, dword ptr [eax]
// 005114d3  03442410             add eax, dword ptr [esp + 0x10]
// 005114d7  8b9608000600         mov edx, dword ptr [esi + 0x60008]
// 005114dd  8b1a                 mov ebx, dword ptr [edx]
// 005114df  8d2cbd00000000       lea ebp, [edi*4]
// 005114e6  50                   push eax
// 005114e7  8bce                 mov ecx, esi
// 005114e9  03dd                 add ebx, ebp
// 005114eb  e8e0faffff           call 0x510fd0
// 005114f0  834424100c           add dword ptr [esp + 0x10], 0xc
// 005114f5  8903                 mov dword ptr [ebx], eax
// 005114f7  8b8608000600         mov eax, dword ptr [esi + 0x60008]
// 005114fd  8b08                 mov ecx, dword ptr [eax]
// 005114ff  8b860c000600         mov eax, dword ptr [esi + 0x6000c]
// 00511505  8b1429               mov edx, dword ptr [ecx + ebp]
// 00511508  8b08                 mov ecx, dword ptr [eax]
// 0051150a  893c91               mov dword ptr [ecx + edx*4], edi
// 0051150d  8b8600000600         mov eax, dword ptr [esi + 0x60000]
// 00511513  83c701               add edi, 1
// 00511516  3b7804               cmp edi, dword ptr [eax + 4]
// 00511519  7cb6                 jl 0x5114d1
// 0051151b  5d                   pop ebp
// 0051151c  5f                   pop edi
// 0051151d  5e                   pop esi
// 0051151e  5b                   pop ebx
// 0051151f  59                   pop ecx
// 00511520  c3                   ret 
// library g3d-6.09/G3Dcpp\MeshAlgWeld.cpp (function ?weld@Welder@_internal@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgWeld.cpp
