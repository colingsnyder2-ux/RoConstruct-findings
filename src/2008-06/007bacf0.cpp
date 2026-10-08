// from server: 100% by auto
// roc 2008-06 007bacf0  unit: G3D::H::PAV?$Array::?$Set  size: 206 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007bacf0
//
// 007bacf0  51                   push ecx
// 007bacf1  53                   push ebx
// 007bacf2  56                   push esi
// 007bacf3  57                   push edi
// 007bacf4  8bf1                 mov esi, ecx
// 007bacf6  8b8e04000600         mov ecx, dword ptr [esi + 0x60004]
// 007bacfc  6a01                 push 1
// 007bacfe  6a00                 push 0
// 007bad00  e8bb78d4ff           call 0x5025c0
// 007bad05  8b8600000600         mov eax, dword ptr [esi + 0x60000]
// 007bad0b  33ff                 xor edi, edi
// 007bad0d  397804               cmp dword ptr [eax + 4], edi
// 007bad10  7e1d                 jle 0x7bad2f
// 007bad12  33db                 xor ebx, ebx
// 007bad14  8b00                 mov eax, dword ptr [eax]
// 007bad16  03c3                 add eax, ebx
// 007bad18  50                   push eax
// 007bad19  8bce                 mov ecx, esi
// 007bad1b  e8e0fbffff           call 0x7ba900
// 007bad20  8b8600000600         mov eax, dword ptr [esi + 0x60000]
// 007bad26  47                   inc edi
// 007bad27  83c30c               add ebx, 0xc
// 007bad2a  3b7804               cmp edi, dword ptr [eax + 4]
// 007bad2d  7ce5                 jl 0x7bad14
// 007bad2f  8b8e00000600         mov ecx, dword ptr [esi + 0x60000]
// 007bad35  8b5104               mov edx, dword ptr [ecx + 4]
// 007bad38  8b8e08000600         mov ecx, dword ptr [esi + 0x60008]
// 007bad3e  6a01                 push 1
// 007bad40  52                   push edx
// 007bad41  e8da52ccff           call 0x480020
// 007bad46  8b8604000600         mov eax, dword ptr [esi + 0x60004]
// 007bad4c  8b4804               mov ecx, dword ptr [eax + 4]
// 007bad4f  6a01                 push 1
// 007bad51  51                   push ecx
// 007bad52  8b8e0c000600         mov ecx, dword ptr [esi + 0x6000c]
// 007bad58  e8c352ccff           call 0x480020
// 007bad5d  8b8600000600         mov eax, dword ptr [esi + 0x60000]
// 007bad63  33ff                 xor edi, edi
// 007bad65  397804               cmp dword ptr [eax + 4], edi
// 007bad68  7e4f                 jle 0x7badb9
// 007bad6a  897c240c             mov dword ptr [esp + 0xc], edi
// 007bad6e  55                   push ebp
// 007bad6f  90                   nop 
// 007bad70  8b00                 mov eax, dword ptr [eax]
// 007bad72  03442410             add eax, dword ptr [esp + 0x10]
// 007bad76  8b9608000600         mov edx, dword ptr [esi + 0x60008]
// 007bad7c  8b1a                 mov ebx, dword ptr [edx]
// 007bad7e  8d2cbd00000000       lea ebp, [edi*4]
// 007bad85  50                   push eax
// 007bad86  8bce                 mov ecx, esi
// 007bad88  03dd                 add ebx, ebp
// 007bad8a  e871fbffff           call 0x7ba900
// 007bad8f  834424100c           add dword ptr [esp + 0x10], 0xc
// 007bad94  8903                 mov dword ptr [ebx], eax
// 007bad96  8b8608000600         mov eax, dword ptr [esi + 0x60008]
// 007bad9c  8b08                 mov ecx, dword ptr [eax]
// 007bad9e  8b860c000600         mov eax, dword ptr [esi + 0x6000c]
// 007bada4  8b1429               mov edx, dword ptr [ecx + ebp]
// 007bada7  8b08                 mov ecx, dword ptr [eax]
// 007bada9  893c91               mov dword ptr [ecx + edx*4], edi
// 007badac  8b8600000600         mov eax, dword ptr [esi + 0x60000]
// 007badb2  47                   inc edi
// 007badb3  3b7804               cmp edi, dword ptr [eax + 4]
// 007badb6  7cb8                 jl 0x7bad70
// 007badb8  5d                   pop ebp
// 007badb9  5f                   pop edi
// 007badba  5e                   pop esi
// 007badbb  5b                   pop ebx
// 007badbc  59                   pop ecx
// 007badbd  c3                   ret 
// library g3d-6.09/G3Dcpp\MeshAlgWeld.cpp (function ?weld@Welder@_internal@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgWeld.cpp
