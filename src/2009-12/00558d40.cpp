// roc 2009-12 00558d40  unit: seg_00550000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00558d40
//
// 00558d40  56                   push esi
// 00558d41  8bf1                 mov esi, ecx
// 00558d43  8b4604               mov eax, dword ptr [esi + 4]
// 00558d46  3b4608               cmp eax, dword ptr [esi + 8]
// 00558d49  8b0e                 mov ecx, dword ptr [esi]
// 00558d4b  7d16                 jge 0x558d63
// 00558d4d  8d0481               lea eax, [ecx + eax*4]
// 00558d50  85c0                 test eax, eax
// 00558d52  7408                 je 0x558d5c
// 00558d54  8b542408             mov edx, dword ptr [esp + 8]
// 00558d58  8b0a                 mov ecx, dword ptr [edx]
// 00558d5a  8908                 mov dword ptr [eax], ecx
// 00558d5c  ff4604               inc dword ptr [esi + 4]
// 00558d5f  5e                   pop esi
// 00558d60  c20400               ret 4
// 00558d63  57                   push edi
// 00558d64  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00558d68  3bf9                 cmp edi, ecx
// 00558d6a  721e                 jb 0x558d8a
// 00558d6c  8d1481               lea edx, [ecx + eax*4]
// 00558d6f  3bfa                 cmp edi, edx
// 00558d71  7317                 jae 0x558d8a
// 00558d73  8b07                 mov eax, dword ptr [edi]
// 00558d75  8d4c240c             lea ecx, [esp + 0xc]
// 00558d79  51                   push ecx
// 00558d7a  8bce                 mov ecx, esi
// 00558d7c  89442410             mov dword ptr [esp + 0x10], eax
// 00558d80  e8bbffffff           call 0x558d40
// 00558d85  5f                   pop edi
// 00558d86  5e                   pop esi
// 00558d87  c20400               ret 4
// 00558d8a  6a00                 push 0
// 00558d8c  40                   inc eax
// 00558d8d  50                   push eax
// 00558d8e  8bce                 mov ecx, esi
// 00558d90  e8ebf6fdff           call 0x538480
// 00558d95  8b0f                 mov ecx, dword ptr [edi]
// 00558d97  8b5604               mov edx, dword ptr [esi + 4]
// 00558d9a  8b06                 mov eax, dword ptr [esi]
// 00558d9c  5f                   pop edi
// 00558d9d  894c90fc             mov dword ptr [eax + edx*4 - 4], ecx
// 00558da1  5e                   pop esi
// 00558da2  c20400               ret 4
// library g3d-6.09/G3Dcpp\MeshAlgAdjacency.cpp (function ?append@?$Array@H@G3D@@QAEXABH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgAdjacency.cpp
