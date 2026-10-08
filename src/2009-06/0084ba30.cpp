// from server: 100% by auto
// roc 2009-06 0084ba30  unit: G3D::H::PAV?$Array::?$Set  size: 206 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0084ba30
//
// 0084ba30  51                   push ecx
// 0084ba31  53                   push ebx
// 0084ba32  56                   push esi
// 0084ba33  57                   push edi
// 0084ba34  8bf1                 mov esi, ecx
// 0084ba36  8b8e04000600         mov ecx, dword ptr [esi + 0x60004]
// 0084ba3c  6a01                 push 1
// 0084ba3e  6a00                 push 0
// 0084ba40  e8fba4d1ff           call 0x565f40
// 0084ba45  8b8600000600         mov eax, dword ptr [esi + 0x60000]
// 0084ba4b  33ff                 xor edi, edi
// 0084ba4d  397804               cmp dword ptr [eax + 4], edi
// 0084ba50  7e1d                 jle 0x84ba6f
// 0084ba52  33db                 xor ebx, ebx
// 0084ba54  8b00                 mov eax, dword ptr [eax]
// 0084ba56  03c3                 add eax, ebx
// 0084ba58  50                   push eax
// 0084ba59  8bce                 mov ecx, esi
// 0084ba5b  e8e0fbffff           call 0x84b640
// 0084ba60  8b8600000600         mov eax, dword ptr [esi + 0x60000]
// 0084ba66  47                   inc edi
// 0084ba67  83c30c               add ebx, 0xc
// 0084ba6a  3b7804               cmp edi, dword ptr [eax + 4]
// 0084ba6d  7ce5                 jl 0x84ba54
// 0084ba6f  8b8e00000600         mov ecx, dword ptr [esi + 0x60000]
// 0084ba75  8b5104               mov edx, dword ptr [ecx + 4]
// 0084ba78  8b8e08000600         mov ecx, dword ptr [esi + 0x60008]
// 0084ba7e  6a01                 push 1
// 0084ba80  52                   push edx
// 0084ba81  e83ae6c5ff           call 0x4aa0c0
// 0084ba86  8b8604000600         mov eax, dword ptr [esi + 0x60004]
// 0084ba8c  8b4804               mov ecx, dword ptr [eax + 4]
// 0084ba8f  6a01                 push 1
// 0084ba91  51                   push ecx
// 0084ba92  8b8e0c000600         mov ecx, dword ptr [esi + 0x6000c]
// 0084ba98  e823e6c5ff           call 0x4aa0c0
// 0084ba9d  8b8600000600         mov eax, dword ptr [esi + 0x60000]
// 0084baa3  33ff                 xor edi, edi
// 0084baa5  397804               cmp dword ptr [eax + 4], edi
// 0084baa8  7e4f                 jle 0x84baf9
// 0084baaa  897c240c             mov dword ptr [esp + 0xc], edi
// 0084baae  55                   push ebp
// 0084baaf  90                   nop 
// 0084bab0  8b00                 mov eax, dword ptr [eax]
// 0084bab2  03442410             add eax, dword ptr [esp + 0x10]
// 0084bab6  8b9608000600         mov edx, dword ptr [esi + 0x60008]
// 0084babc  8b1a                 mov ebx, dword ptr [edx]
// 0084babe  8d2cbd00000000       lea ebp, [edi*4]
// 0084bac5  50                   push eax
// 0084bac6  8bce                 mov ecx, esi
// 0084bac8  03dd                 add ebx, ebp
// 0084baca  e871fbffff           call 0x84b640
// 0084bacf  834424100c           add dword ptr [esp + 0x10], 0xc
// 0084bad4  8903                 mov dword ptr [ebx], eax
// 0084bad6  8b8608000600         mov eax, dword ptr [esi + 0x60008]
// 0084badc  8b08                 mov ecx, dword ptr [eax]
// 0084bade  8b860c000600         mov eax, dword ptr [esi + 0x6000c]
// 0084bae4  8b1429               mov edx, dword ptr [ecx + ebp]
// 0084bae7  8b08                 mov ecx, dword ptr [eax]
// 0084bae9  893c91               mov dword ptr [ecx + edx*4], edi
// 0084baec  8b8600000600         mov eax, dword ptr [esi + 0x60000]
// 0084baf2  47                   inc edi
// 0084baf3  3b7804               cmp edi, dword ptr [eax + 4]
// 0084baf6  7cb8                 jl 0x84bab0
// 0084baf8  5d                   pop ebp
// 0084baf9  5f                   pop edi
// 0084bafa  5e                   pop esi
// 0084bafb  5b                   pop ebx
// 0084bafc  59                   pop ecx
// 0084bafd  c3                   ret 
// library g3d-6.09/G3Dcpp\MeshAlgWeld.cpp (function ?weld@Welder@_internal@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgWeld.cpp
