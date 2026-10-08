// roc 2009-12 007a6e20  unit: RBX::Clump  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007a6e20
//
// 007a6e20  56                   push esi
// 007a6e21  8bf1                 mov esi, ecx
// 007a6e23  8b4604               mov eax, dword ptr [esi + 4]
// 007a6e26  3b4608               cmp eax, dword ptr [esi + 8]
// 007a6e29  8b0e                 mov ecx, dword ptr [esi]
// 007a6e2b  7d16                 jge 0x7a6e43
// 007a6e2d  8d0481               lea eax, [ecx + eax*4]
// 007a6e30  85c0                 test eax, eax
// 007a6e32  7408                 je 0x7a6e3c
// 007a6e34  8b542408             mov edx, dword ptr [esp + 8]
// 007a6e38  8b0a                 mov ecx, dword ptr [edx]
// 007a6e3a  8908                 mov dword ptr [eax], ecx
// 007a6e3c  ff4604               inc dword ptr [esi + 4]
// 007a6e3f  5e                   pop esi
// 007a6e40  c20400               ret 4
// 007a6e43  57                   push edi
// 007a6e44  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 007a6e48  3bf9                 cmp edi, ecx
// 007a6e4a  721e                 jb 0x7a6e6a
// 007a6e4c  8d1481               lea edx, [ecx + eax*4]
// 007a6e4f  3bfa                 cmp edi, edx
// 007a6e51  7317                 jae 0x7a6e6a
// 007a6e53  8b07                 mov eax, dword ptr [edi]
// 007a6e55  8d4c240c             lea ecx, [esp + 0xc]
// 007a6e59  51                   push ecx
// 007a6e5a  8bce                 mov ecx, esi
// 007a6e5c  89442410             mov dword ptr [esp + 0x10], eax
// 007a6e60  e8bbffffff           call 0x7a6e20
// 007a6e65  5f                   pop edi
// 007a6e66  5e                   pop esi
// 007a6e67  c20400               ret 4
// 007a6e6a  6a00                 push 0
// 007a6e6c  40                   inc eax
// 007a6e6d  50                   push eax
// 007a6e6e  8bce                 mov ecx, esi
// 007a6e70  e85ba4f5ff           call 0x7012d0
// 007a6e75  8b0f                 mov ecx, dword ptr [edi]
// 007a6e77  8b5604               mov edx, dword ptr [esi + 4]
// 007a6e7a  8b06                 mov eax, dword ptr [esi]
// 007a6e7c  5f                   pop edi
// 007a6e7d  894c90fc             mov dword ptr [eax + edx*4 - 4], ecx
// 007a6e81  5e                   pop esi
// 007a6e82  c20400               ret 4
// library g3d-6.09/G3Dcpp\MeshAlgAdjacency.cpp (function ?append@?$Array@H@G3D@@QAEXABH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgAdjacency.cpp
