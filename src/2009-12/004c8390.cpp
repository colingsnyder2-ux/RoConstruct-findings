// roc 2009-12 004c8390  unit: G3D::Texture  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004c8390
//
// 004c8390  56                   push esi
// 004c8391  8bf1                 mov esi, ecx
// 004c8393  8b4604               mov eax, dword ptr [esi + 4]
// 004c8396  3b4608               cmp eax, dword ptr [esi + 8]
// 004c8399  8b0e                 mov ecx, dword ptr [esi]
// 004c839b  7d16                 jge 0x4c83b3
// 004c839d  8d0481               lea eax, [ecx + eax*4]
// 004c83a0  85c0                 test eax, eax
// 004c83a2  7408                 je 0x4c83ac
// 004c83a4  8b542408             mov edx, dword ptr [esp + 8]
// 004c83a8  8b0a                 mov ecx, dword ptr [edx]
// 004c83aa  8908                 mov dword ptr [eax], ecx
// 004c83ac  ff4604               inc dword ptr [esi + 4]
// 004c83af  5e                   pop esi
// 004c83b0  c20400               ret 4
// 004c83b3  57                   push edi
// 004c83b4  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004c83b8  3bf9                 cmp edi, ecx
// 004c83ba  721e                 jb 0x4c83da
// 004c83bc  8d1481               lea edx, [ecx + eax*4]
// 004c83bf  3bfa                 cmp edi, edx
// 004c83c1  7317                 jae 0x4c83da
// 004c83c3  8b07                 mov eax, dword ptr [edi]
// 004c83c5  8d4c240c             lea ecx, [esp + 0xc]
// 004c83c9  51                   push ecx
// 004c83ca  8bce                 mov ecx, esi
// 004c83cc  89442410             mov dword ptr [esp + 0x10], eax
// 004c83d0  e8bbffffff           call 0x4c8390
// 004c83d5  5f                   pop edi
// 004c83d6  5e                   pop esi
// 004c83d7  c20400               ret 4
// 004c83da  6a00                 push 0
// 004c83dc  40                   inc eax
// 004c83dd  50                   push eax
// 004c83de  8bce                 mov ecx, esi
// 004c83e0  e80bf9ffff           call 0x4c7cf0
// 004c83e5  8b0f                 mov ecx, dword ptr [edi]
// 004c83e7  8b5604               mov edx, dword ptr [esi + 4]
// 004c83ea  8b06                 mov eax, dword ptr [esi]
// 004c83ec  5f                   pop edi
// 004c83ed  894c90fc             mov dword ptr [eax + edx*4 - 4], ecx
// 004c83f1  5e                   pop esi
// 004c83f2  c20400               ret 4
// library g3d-6.09/G3Dcpp\MeshAlgAdjacency.cpp (function ?append@?$Array@H@G3D@@QAEXABH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgAdjacency.cpp
