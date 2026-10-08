// roc 2009-12 006ed1c0  unit: RBX::Primitive  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006ed1c0
//
// 006ed1c0  56                   push esi
// 006ed1c1  8bf1                 mov esi, ecx
// 006ed1c3  8b4604               mov eax, dword ptr [esi + 4]
// 006ed1c6  3b4608               cmp eax, dword ptr [esi + 8]
// 006ed1c9  8b0e                 mov ecx, dword ptr [esi]
// 006ed1cb  7d16                 jge 0x6ed1e3
// 006ed1cd  8d0481               lea eax, [ecx + eax*4]
// 006ed1d0  85c0                 test eax, eax
// 006ed1d2  7408                 je 0x6ed1dc
// 006ed1d4  8b542408             mov edx, dword ptr [esp + 8]
// 006ed1d8  8b0a                 mov ecx, dword ptr [edx]
// 006ed1da  8908                 mov dword ptr [eax], ecx
// 006ed1dc  ff4604               inc dword ptr [esi + 4]
// 006ed1df  5e                   pop esi
// 006ed1e0  c20400               ret 4
// 006ed1e3  57                   push edi
// 006ed1e4  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006ed1e8  3bf9                 cmp edi, ecx
// 006ed1ea  721e                 jb 0x6ed20a
// 006ed1ec  8d1481               lea edx, [ecx + eax*4]
// 006ed1ef  3bfa                 cmp edi, edx
// 006ed1f1  7317                 jae 0x6ed20a
// 006ed1f3  8b07                 mov eax, dword ptr [edi]
// 006ed1f5  8d4c240c             lea ecx, [esp + 0xc]
// 006ed1f9  51                   push ecx
// 006ed1fa  8bce                 mov ecx, esi
// 006ed1fc  89442410             mov dword ptr [esp + 0x10], eax
// 006ed200  e8bbffffff           call 0x6ed1c0
// 006ed205  5f                   pop edi
// 006ed206  5e                   pop esi
// 006ed207  c20400               ret 4
// 006ed20a  6a00                 push 0
// 006ed20c  40                   inc eax
// 006ed20d  50                   push eax
// 006ed20e  8bce                 mov ecx, esi
// 006ed210  e8abfeffff           call 0x6ed0c0
// 006ed215  8b0f                 mov ecx, dword ptr [edi]
// 006ed217  8b5604               mov edx, dword ptr [esi + 4]
// 006ed21a  8b06                 mov eax, dword ptr [esi]
// 006ed21c  5f                   pop edi
// 006ed21d  894c90fc             mov dword ptr [eax + edx*4 - 4], ecx
// 006ed221  5e                   pop esi
// 006ed222  c20400               ret 4
// library g3d-6.09/G3Dcpp\MeshAlgAdjacency.cpp (function ?append@?$Array@H@G3D@@QAEXABH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgAdjacency.cpp
