// roc 2009-12 007a6db0  unit: RBX::Clump  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007a6db0
//
// 007a6db0  56                   push esi
// 007a6db1  8bf1                 mov esi, ecx
// 007a6db3  8b4604               mov eax, dword ptr [esi + 4]
// 007a6db6  3b4608               cmp eax, dword ptr [esi + 8]
// 007a6db9  8b0e                 mov ecx, dword ptr [esi]
// 007a6dbb  7d16                 jge 0x7a6dd3
// 007a6dbd  8d0481               lea eax, [ecx + eax*4]
// 007a6dc0  85c0                 test eax, eax
// 007a6dc2  7408                 je 0x7a6dcc
// 007a6dc4  8b542408             mov edx, dword ptr [esp + 8]
// 007a6dc8  8b0a                 mov ecx, dword ptr [edx]
// 007a6dca  8908                 mov dword ptr [eax], ecx
// 007a6dcc  ff4604               inc dword ptr [esi + 4]
// 007a6dcf  5e                   pop esi
// 007a6dd0  c20400               ret 4
// 007a6dd3  57                   push edi
// 007a6dd4  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 007a6dd8  3bf9                 cmp edi, ecx
// 007a6dda  721e                 jb 0x7a6dfa
// 007a6ddc  8d1481               lea edx, [ecx + eax*4]
// 007a6ddf  3bfa                 cmp edi, edx
// 007a6de1  7317                 jae 0x7a6dfa
// 007a6de3  8b07                 mov eax, dword ptr [edi]
// 007a6de5  8d4c240c             lea ecx, [esp + 0xc]
// 007a6de9  51                   push ecx
// 007a6dea  8bce                 mov ecx, esi
// 007a6dec  89442410             mov dword ptr [esp + 0x10], eax
// 007a6df0  e8bbffffff           call 0x7a6db0
// 007a6df5  5f                   pop edi
// 007a6df6  5e                   pop esi
// 007a6df7  c20400               ret 4
// 007a6dfa  6a00                 push 0
// 007a6dfc  40                   inc eax
// 007a6dfd  50                   push eax
// 007a6dfe  8bce                 mov ecx, esi
// 007a6e00  e8cba5f5ff           call 0x7013d0
// 007a6e05  8b0f                 mov ecx, dword ptr [edi]
// 007a6e07  8b5604               mov edx, dword ptr [esi + 4]
// 007a6e0a  8b06                 mov eax, dword ptr [esi]
// 007a6e0c  5f                   pop edi
// 007a6e0d  894c90fc             mov dword ptr [eax + edx*4 - 4], ecx
// 007a6e11  5e                   pop esi
// 007a6e12  c20400               ret 4
// library g3d-6.09/G3Dcpp\MeshAlgAdjacency.cpp (function ?append@?$Array@H@G3D@@QAEXABH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgAdjacency.cpp
