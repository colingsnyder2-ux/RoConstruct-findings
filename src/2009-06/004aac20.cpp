// roc 2009-06 004aac20  unit: G3D::H_N::?$Table  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004aac20
//
// 004aac20  56                   push esi
// 004aac21  57                   push edi
// 004aac22  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004aac26  8b4704               mov eax, dword ptr [edi + 4]
// 004aac29  6a01                 push 1
// 004aac2b  50                   push eax
// 004aac2c  8bf1                 mov esi, ecx
// 004aac2e  e89df8ffff           call 0x4aa4d0
// 004aac33  33c0                 xor eax, eax
// 004aac35  394604               cmp dword ptr [esi + 4], eax
// 004aac38  7e16                 jle 0x4aac50
// 004aac3a  8d9b00000000         lea ebx, [ebx]
// 004aac40  8b0f                 mov ecx, dword ptr [edi]
// 004aac42  8b0c81               mov ecx, dword ptr [ecx + eax*4]
// 004aac45  8b16                 mov edx, dword ptr [esi]
// 004aac47  890c82               mov dword ptr [edx + eax*4], ecx
// 004aac4a  40                   inc eax
// 004aac4b  3b4604               cmp eax, dword ptr [esi + 4]
// 004aac4e  7cf0                 jl 0x4aac40
// 004aac50  5f                   pop edi
// 004aac51  8bc6                 mov eax, esi
// 004aac53  5e                   pop esi
// 004aac54  c20400               ret 4
// library g3d-6.09/G3Dcpp\MeshAlg.cpp (function ??4?$Array@H@G3D@@QAEAAV01@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlg.cpp
