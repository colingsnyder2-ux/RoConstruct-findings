// roc 2007-03 00505b80  unit: seg_00500000  size: 209 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00505b80
//
// 00505b80  51                   push ecx
// 00505b81  53                   push ebx
// 00505b82  56                   push esi
// 00505b83  57                   push edi
// 00505b84  8bf1                 mov esi, ecx
// 00505b86  8b8e04000600         mov ecx, dword ptr [esi + 0x60004]
// 00505b8c  6a01                 push 1
// 00505b8e  6a00                 push 0
// 00505b90  e8db1efeff           call 0x4e7a70
// 00505b95  8b8600000600         mov eax, dword ptr [esi + 0x60000]
// 00505b9b  33ff                 xor edi, edi
// 00505b9d  397804               cmp dword ptr [eax + 4], edi
// 00505ba0  7e1f                 jle 0x505bc1
// 00505ba2  33db                 xor ebx, ebx
// 00505ba4  8b00                 mov eax, dword ptr [eax]
// 00505ba6  03c3                 add eax, ebx
// 00505ba8  50                   push eax
// 00505ba9  8bce                 mov ecx, esi
// 00505bab  e850fbffff           call 0x505700
// 00505bb0  8b8600000600         mov eax, dword ptr [esi + 0x60000]
// 00505bb6  83c701               add edi, 1
// 00505bb9  83c30c               add ebx, 0xc
// 00505bbc  3b7804               cmp edi, dword ptr [eax + 4]
// 00505bbf  7ce3                 jl 0x505ba4
// 00505bc1  8b8e00000600         mov ecx, dword ptr [esi + 0x60000]
// 00505bc7  8b5104               mov edx, dword ptr [ecx + 4]
// 00505bca  8b8e08000600         mov ecx, dword ptr [esi + 0x60008]
// 00505bd0  6a01                 push 1
// 00505bd2  52                   push edx
// 00505bd3  e84854f7ff           call 0x47b020
// 00505bd8  8b8604000600         mov eax, dword ptr [esi + 0x60004]
// 00505bde  8b4804               mov ecx, dword ptr [eax + 4]
// 00505be1  6a01                 push 1
// 00505be3  51                   push ecx
// 00505be4  8b8e0c000600         mov ecx, dword ptr [esi + 0x6000c]
// 00505bea  e83154f7ff           call 0x47b020
// 00505bef  8b8600000600         mov eax, dword ptr [esi + 0x60000]
// 00505bf5  33ff                 xor edi, edi
// 00505bf7  397804               cmp dword ptr [eax + 4], edi
// 00505bfa  7e50                 jle 0x505c4c
// 00505bfc  897c240c             mov dword ptr [esp + 0xc], edi
// 00505c00  55                   push ebp
// 00505c01  8b00                 mov eax, dword ptr [eax]
// 00505c03  03442410             add eax, dword ptr [esp + 0x10]
// 00505c07  8b9608000600         mov edx, dword ptr [esi + 0x60008]
// 00505c0d  8b1a                 mov ebx, dword ptr [edx]
// 00505c0f  8d2cbd00000000       lea ebp, [edi*4]
// 00505c16  50                   push eax
// 00505c17  8bce                 mov ecx, esi
// 00505c19  03dd                 add ebx, ebp
// 00505c1b  e8e0faffff           call 0x505700
// 00505c20  834424100c           add dword ptr [esp + 0x10], 0xc
// 00505c25  8903                 mov dword ptr [ebx], eax
// 00505c27  8b8608000600         mov eax, dword ptr [esi + 0x60008]
// 00505c2d  8b08                 mov ecx, dword ptr [eax]
// 00505c2f  8b860c000600         mov eax, dword ptr [esi + 0x6000c]
// 00505c35  8b1429               mov edx, dword ptr [ecx + ebp]
// 00505c38  8b08                 mov ecx, dword ptr [eax]
// 00505c3a  893c91               mov dword ptr [ecx + edx*4], edi
// 00505c3d  8b8600000600         mov eax, dword ptr [esi + 0x60000]
// 00505c43  83c701               add edi, 1
// 00505c46  3b7804               cmp edi, dword ptr [eax + 4]
// 00505c49  7cb6                 jl 0x505c01
// 00505c4b  5d                   pop ebp
// 00505c4c  5f                   pop edi
// 00505c4d  5e                   pop esi
// 00505c4e  5b                   pop ebx
// 00505c4f  59                   pop ecx
// 00505c50  c3                   ret 
// library rbxgs-g3d/G3Dcpp\MeshAlgWeld.cpp (function ?weld@Welder@_internal@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/MeshAlgWeld.cpp
