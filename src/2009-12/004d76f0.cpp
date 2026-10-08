// roc 2009-12 004d76f0  unit: G3D::H_N::?$Table  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004d76f0
//
// 004d76f0  56                   push esi
// 004d76f1  57                   push edi
// 004d76f2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004d76f6  8b4704               mov eax, dword ptr [edi + 4]
// 004d76f9  6a01                 push 1
// 004d76fb  50                   push eax
// 004d76fc  8bf1                 mov esi, ecx
// 004d76fe  e8ddf8ffff           call 0x4d6fe0
// 004d7703  33c0                 xor eax, eax
// 004d7705  394604               cmp dword ptr [esi + 4], eax
// 004d7708  7e16                 jle 0x4d7720
// 004d770a  8d9b00000000         lea ebx, [ebx]
// 004d7710  8b0f                 mov ecx, dword ptr [edi]
// 004d7712  8b0c81               mov ecx, dword ptr [ecx + eax*4]
// 004d7715  8b16                 mov edx, dword ptr [esi]
// 004d7717  890c82               mov dword ptr [edx + eax*4], ecx
// 004d771a  40                   inc eax
// 004d771b  3b4604               cmp eax, dword ptr [esi + 4]
// 004d771e  7cf0                 jl 0x4d7710
// 004d7720  5f                   pop edi
// 004d7721  8bc6                 mov eax, esi
// 004d7723  5e                   pop esi
// 004d7724  c20400               ret 4
// library g3d-6.09/G3Dcpp\MeshAlg.cpp (function ??4?$Array@H@G3D@@QAEAAV01@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlg.cpp
