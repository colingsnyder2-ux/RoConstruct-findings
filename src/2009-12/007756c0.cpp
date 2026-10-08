// roc 2009-12 007756c0  unit: RBX::VLocalBackpackTool::?$FactoryProduct  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007756c0
//
// 007756c0  56                   push esi
// 007756c1  8bf1                 mov esi, ecx
// 007756c3  8b4604               mov eax, dword ptr [esi + 4]
// 007756c6  3b4608               cmp eax, dword ptr [esi + 8]
// 007756c9  8b0e                 mov ecx, dword ptr [esi]
// 007756cb  7d16                 jge 0x7756e3
// 007756cd  8d0481               lea eax, [ecx + eax*4]
// 007756d0  85c0                 test eax, eax
// 007756d2  7408                 je 0x7756dc
// 007756d4  8b542408             mov edx, dword ptr [esp + 8]
// 007756d8  8b0a                 mov ecx, dword ptr [edx]
// 007756da  8908                 mov dword ptr [eax], ecx
// 007756dc  ff4604               inc dword ptr [esi + 4]
// 007756df  5e                   pop esi
// 007756e0  c20400               ret 4
// 007756e3  57                   push edi
// 007756e4  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 007756e8  3bf9                 cmp edi, ecx
// 007756ea  721e                 jb 0x77570a
// 007756ec  8d1481               lea edx, [ecx + eax*4]
// 007756ef  3bfa                 cmp edi, edx
// 007756f1  7317                 jae 0x77570a
// 007756f3  8b07                 mov eax, dword ptr [edi]
// 007756f5  8d4c240c             lea ecx, [esp + 0xc]
// 007756f9  51                   push ecx
// 007756fa  8bce                 mov ecx, esi
// 007756fc  89442410             mov dword ptr [esp + 0x10], eax
// 00775700  e8bbffffff           call 0x7756c0
// 00775705  5f                   pop edi
// 00775706  5e                   pop esi
// 00775707  c20400               ret 4
// 0077570a  6a00                 push 0
// 0077570c  40                   inc eax
// 0077570d  50                   push eax
// 0077570e  8bce                 mov ecx, esi
// 00775710  e8ebf7ffff           call 0x774f00
// 00775715  8b0f                 mov ecx, dword ptr [edi]
// 00775717  8b5604               mov edx, dword ptr [esi + 4]
// 0077571a  8b06                 mov eax, dword ptr [esi]
// 0077571c  5f                   pop edi
// 0077571d  894c90fc             mov dword ptr [eax + edx*4 - 4], ecx
// 00775721  5e                   pop esi
// 00775722  c20400               ret 4
// library g3d-6.09/G3Dcpp\MeshAlgAdjacency.cpp (function ?append@?$Array@H@G3D@@QAEXABH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgAdjacency.cpp
