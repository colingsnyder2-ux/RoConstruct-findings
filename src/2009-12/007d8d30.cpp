// roc 2009-12 007d8d30  unit: RBX::HUMAN::GettingUp  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007d8d30
//
// 007d8d30  56                   push esi
// 007d8d31  8bf1                 mov esi, ecx
// 007d8d33  8b4604               mov eax, dword ptr [esi + 4]
// 007d8d36  3b4608               cmp eax, dword ptr [esi + 8]
// 007d8d39  8b0e                 mov ecx, dword ptr [esi]
// 007d8d3b  7d16                 jge 0x7d8d53
// 007d8d3d  8d0481               lea eax, [ecx + eax*4]
// 007d8d40  85c0                 test eax, eax
// 007d8d42  7408                 je 0x7d8d4c
// 007d8d44  8b542408             mov edx, dword ptr [esp + 8]
// 007d8d48  8b0a                 mov ecx, dword ptr [edx]
// 007d8d4a  8908                 mov dword ptr [eax], ecx
// 007d8d4c  ff4604               inc dword ptr [esi + 4]
// 007d8d4f  5e                   pop esi
// 007d8d50  c20400               ret 4
// 007d8d53  57                   push edi
// 007d8d54  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 007d8d58  3bf9                 cmp edi, ecx
// 007d8d5a  721e                 jb 0x7d8d7a
// 007d8d5c  8d1481               lea edx, [ecx + eax*4]
// 007d8d5f  3bfa                 cmp edi, edx
// 007d8d61  7317                 jae 0x7d8d7a
// 007d8d63  8b07                 mov eax, dword ptr [edi]
// 007d8d65  8d4c240c             lea ecx, [esp + 0xc]
// 007d8d69  51                   push ecx
// 007d8d6a  8bce                 mov ecx, esi
// 007d8d6c  89442410             mov dword ptr [esp + 0x10], eax
// 007d8d70  e8bbffffff           call 0x7d8d30
// 007d8d75  5f                   pop edi
// 007d8d76  5e                   pop esi
// 007d8d77  c20400               ret 4
// 007d8d7a  6a00                 push 0
// 007d8d7c  40                   inc eax
// 007d8d7d  50                   push eax
// 007d8d7e  8bce                 mov ecx, esi
// 007d8d80  e8abfeffff           call 0x7d8c30
// 007d8d85  8b0f                 mov ecx, dword ptr [edi]
// 007d8d87  8b5604               mov edx, dword ptr [esi + 4]
// 007d8d8a  8b06                 mov eax, dword ptr [esi]
// 007d8d8c  5f                   pop edi
// 007d8d8d  894c90fc             mov dword ptr [eax + edx*4 - 4], ecx
// 007d8d91  5e                   pop esi
// 007d8d92  c20400               ret 4
// library g3d-6.09/G3Dcpp\MeshAlgAdjacency.cpp (function ?append@?$Array@H@G3D@@QAEXABH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgAdjacency.cpp
