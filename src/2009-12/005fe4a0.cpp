// roc 2009-12 005fe4a0  unit: G3D::H::PAV?$Array::?$Set  size: 206 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005fe4a0
//
// 005fe4a0  51                   push ecx
// 005fe4a1  53                   push ebx
// 005fe4a2  56                   push esi
// 005fe4a3  57                   push edi
// 005fe4a4  8bf1                 mov esi, ecx
// 005fe4a6  8b8e04000600         mov ecx, dword ptr [esi + 0x60004]
// 005fe4ac  6a01                 push 1
// 005fe4ae  6a00                 push 0
// 005fe4b0  e84b6ceeff           call 0x4e5100
// 005fe4b5  8b8600000600         mov eax, dword ptr [esi + 0x60000]
// 005fe4bb  33ff                 xor edi, edi
// 005fe4bd  397804               cmp dword ptr [eax + 4], edi
// 005fe4c0  7e1d                 jle 0x5fe4df
// 005fe4c2  33db                 xor ebx, ebx
// 005fe4c4  8b00                 mov eax, dword ptr [eax]
// 005fe4c6  03c3                 add eax, ebx
// 005fe4c8  50                   push eax
// 005fe4c9  8bce                 mov ecx, esi
// 005fe4cb  e890fbffff           call 0x5fe060
// 005fe4d0  8b8600000600         mov eax, dword ptr [esi + 0x60000]
// 005fe4d6  47                   inc edi
// 005fe4d7  83c30c               add ebx, 0xc
// 005fe4da  3b7804               cmp edi, dword ptr [eax + 4]
// 005fe4dd  7ce5                 jl 0x5fe4c4
// 005fe4df  8b8e00000600         mov ecx, dword ptr [esi + 0x60000]
// 005fe4e5  8b5104               mov edx, dword ptr [ecx + 4]
// 005fe4e8  8b8e08000600         mov ecx, dword ptr [esi + 0x60008]
// 005fe4ee  6a01                 push 1
// 005fe4f0  52                   push edx
// 005fe4f1  e8ea86edff           call 0x4d6be0
// 005fe4f6  8b8604000600         mov eax, dword ptr [esi + 0x60004]
// 005fe4fc  8b4804               mov ecx, dword ptr [eax + 4]
// 005fe4ff  6a01                 push 1
// 005fe501  51                   push ecx
// 005fe502  8b8e0c000600         mov ecx, dword ptr [esi + 0x6000c]
// 005fe508  e8d386edff           call 0x4d6be0
// 005fe50d  8b8600000600         mov eax, dword ptr [esi + 0x60000]
// 005fe513  33ff                 xor edi, edi
// 005fe515  397804               cmp dword ptr [eax + 4], edi
// 005fe518  7e4f                 jle 0x5fe569
// 005fe51a  897c240c             mov dword ptr [esp + 0xc], edi
// 005fe51e  55                   push ebp
// 005fe51f  90                   nop 
// 005fe520  8b00                 mov eax, dword ptr [eax]
// 005fe522  03442410             add eax, dword ptr [esp + 0x10]
// 005fe526  8b9608000600         mov edx, dword ptr [esi + 0x60008]
// 005fe52c  8b1a                 mov ebx, dword ptr [edx]
// 005fe52e  8d2cbd00000000       lea ebp, [edi*4]
// 005fe535  50                   push eax
// 005fe536  8bce                 mov ecx, esi
// 005fe538  03dd                 add ebx, ebp
// 005fe53a  e821fbffff           call 0x5fe060
// 005fe53f  834424100c           add dword ptr [esp + 0x10], 0xc
// 005fe544  8903                 mov dword ptr [ebx], eax
// 005fe546  8b8608000600         mov eax, dword ptr [esi + 0x60008]
// 005fe54c  8b08                 mov ecx, dword ptr [eax]
// 005fe54e  8b860c000600         mov eax, dword ptr [esi + 0x6000c]
// 005fe554  8b1429               mov edx, dword ptr [ecx + ebp]
// 005fe557  8b08                 mov ecx, dword ptr [eax]
// 005fe559  893c91               mov dword ptr [ecx + edx*4], edi
// 005fe55c  8b8600000600         mov eax, dword ptr [esi + 0x60000]
// 005fe562  47                   inc edi
// 005fe563  3b7804               cmp edi, dword ptr [eax + 4]
// 005fe566  7cb8                 jl 0x5fe520
// 005fe568  5d                   pop ebp
// 005fe569  5f                   pop edi
// 005fe56a  5e                   pop esi
// 005fe56b  5b                   pop ebx
// 005fe56c  59                   pop ecx
// 005fe56d  c3                   ret 
// library g3d-6.09/G3Dcpp\MeshAlgWeld.cpp (function ?weld@Welder@_internal@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgWeld.cpp
