// from server: 100% by auto
// roc 2008-06 00480d00  unit: G3D::H_N::?$Table  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00480d00
//
// 00480d00  56                   push esi
// 00480d01  57                   push edi
// 00480d02  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00480d06  8b4704               mov eax, dword ptr [edi + 4]
// 00480d09  6a01                 push 1
// 00480d0b  50                   push eax
// 00480d0c  8bf1                 mov esi, ecx
// 00480d0e  e89df8ffff           call 0x4805b0
// 00480d13  33c0                 xor eax, eax
// 00480d15  394604               cmp dword ptr [esi + 4], eax
// 00480d18  7e16                 jle 0x480d30
// 00480d1a  8d9b00000000         lea ebx, [ebx]
// 00480d20  8b0f                 mov ecx, dword ptr [edi]
// 00480d22  8b0c81               mov ecx, dword ptr [ecx + eax*4]
// 00480d25  8b16                 mov edx, dword ptr [esi]
// 00480d27  890c82               mov dword ptr [edx + eax*4], ecx
// 00480d2a  40                   inc eax
// 00480d2b  3b4604               cmp eax, dword ptr [esi + 4]
// 00480d2e  7cf0                 jl 0x480d20
// 00480d30  5f                   pop edi
// 00480d31  8bc6                 mov eax, esi
// 00480d33  5e                   pop esi
// 00480d34  c20400               ret 4
// library g3d-6.09/G3Dcpp\MeshAlg.cpp (function ??4?$Array@H@G3D@@QAEAAV01@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlg.cpp
