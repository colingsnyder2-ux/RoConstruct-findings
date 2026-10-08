// roc 2009-12 0071a3e0  unit: RBX::VPhysicsService::?$EventDesc  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0071a3e0
//
// 0071a3e0  56                   push esi
// 0071a3e1  8bf1                 mov esi, ecx
// 0071a3e3  8b4604               mov eax, dword ptr [esi + 4]
// 0071a3e6  3b4608               cmp eax, dword ptr [esi + 8]
// 0071a3e9  8b0e                 mov ecx, dword ptr [esi]
// 0071a3eb  7d16                 jge 0x71a403
// 0071a3ed  8d0481               lea eax, [ecx + eax*4]
// 0071a3f0  85c0                 test eax, eax
// 0071a3f2  7408                 je 0x71a3fc
// 0071a3f4  8b542408             mov edx, dword ptr [esp + 8]
// 0071a3f8  8b0a                 mov ecx, dword ptr [edx]
// 0071a3fa  8908                 mov dword ptr [eax], ecx
// 0071a3fc  ff4604               inc dword ptr [esi + 4]
// 0071a3ff  5e                   pop esi
// 0071a400  c20400               ret 4
// 0071a403  57                   push edi
// 0071a404  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0071a408  3bf9                 cmp edi, ecx
// 0071a40a  721e                 jb 0x71a42a
// 0071a40c  8d1481               lea edx, [ecx + eax*4]
// 0071a40f  3bfa                 cmp edi, edx
// 0071a411  7317                 jae 0x71a42a
// 0071a413  8b07                 mov eax, dword ptr [edi]
// 0071a415  8d4c240c             lea ecx, [esp + 0xc]
// 0071a419  51                   push ecx
// 0071a41a  8bce                 mov ecx, esi
// 0071a41c  89442410             mov dword ptr [esp + 0x10], eax
// 0071a420  e8bbffffff           call 0x71a3e0
// 0071a425  5f                   pop edi
// 0071a426  5e                   pop esi
// 0071a427  c20400               ret 4
// 0071a42a  6a00                 push 0
// 0071a42c  40                   inc eax
// 0071a42d  50                   push eax
// 0071a42e  8bce                 mov ecx, esi
// 0071a430  e84bfeffff           call 0x71a280
// 0071a435  8b0f                 mov ecx, dword ptr [edi]
// 0071a437  8b5604               mov edx, dword ptr [esi + 4]
// 0071a43a  8b06                 mov eax, dword ptr [esi]
// 0071a43c  5f                   pop edi
// 0071a43d  894c90fc             mov dword ptr [eax + edx*4 - 4], ecx
// 0071a441  5e                   pop esi
// 0071a442  c20400               ret 4
// library g3d-6.09/G3Dcpp\MeshAlgAdjacency.cpp (function ?append@?$Array@H@G3D@@QAEXABH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgAdjacency.cpp
