// roc 2008-06 007b95c0  unit: RBX::Render::MegaTextureProxy  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007b95c0
//
// 007b95c0  56                   push esi
// 007b95c1  57                   push edi
// 007b95c2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 007b95c6  8b4704               mov eax, dword ptr [edi + 4]
// 007b95c9  6a01                 push 1
// 007b95cb  50                   push eax
// 007b95cc  8bf1                 mov esi, ecx
// 007b95ce  e84d6accff           call 0x480020
// 007b95d3  33c0                 xor eax, eax
// 007b95d5  394604               cmp dword ptr [esi + 4], eax
// 007b95d8  7e16                 jle 0x7b95f0
// 007b95da  8d9b00000000         lea ebx, [ebx]
// 007b95e0  8b0f                 mov ecx, dword ptr [edi]
// 007b95e2  8b0c81               mov ecx, dword ptr [ecx + eax*4]
// 007b95e5  8b16                 mov edx, dword ptr [esi]
// 007b95e7  890c82               mov dword ptr [edx + eax*4], ecx
// 007b95ea  40                   inc eax
// 007b95eb  3b4604               cmp eax, dword ptr [esi + 4]
// 007b95ee  7cf0                 jl 0x7b95e0
// 007b95f0  5f                   pop edi
// 007b95f1  8bc6                 mov eax, esi
// 007b95f3  5e                   pop esi
// 007b95f4  c20400               ret 4
// library g3d-6.09/G3Dcpp\MeshAlg.cpp (function ??4?$Array@H@G3D@@QAEAAV01@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlg.cpp
