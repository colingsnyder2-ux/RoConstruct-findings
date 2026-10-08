// from server: 100% by auto
// roc 2010-06 00489880  unit: G3D::H_N::?$Table  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00489880
//
// 00489880  56                   push esi
// 00489881  57                   push edi
// 00489882  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00489886  8b4704               mov eax, dword ptr [edi + 4]
// 00489889  6a01                 push 1
// 0048988b  50                   push eax
// 0048988c  8bf1                 mov esi, ecx
// 0048988e  e80df9ffff           call 0x4891a0
// 00489893  33c0                 xor eax, eax
// 00489895  394604               cmp dword ptr [esi + 4], eax
// 00489898  7e16                 jle 0x4898b0
// 0048989a  8d9b00000000         lea ebx, [ebx]
// 004898a0  8b0f                 mov ecx, dword ptr [edi]
// 004898a2  8b0c81               mov ecx, dword ptr [ecx + eax*4]
// 004898a5  8b16                 mov edx, dword ptr [esi]
// 004898a7  890c82               mov dword ptr [edx + eax*4], ecx
// 004898aa  40                   inc eax
// 004898ab  3b4604               cmp eax, dword ptr [esi + 4]
// 004898ae  7cf0                 jl 0x4898a0
// 004898b0  5f                   pop edi
// 004898b1  8bc6                 mov eax, esi
// 004898b3  5e                   pop esi
// 004898b4  c20400               ret 4
// library g3d-6.09/G3Dcpp\MeshAlg.cpp (function ??4?$Array@H@G3D@@QAEAAV01@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlg.cpp
