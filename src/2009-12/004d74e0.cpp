// roc 2009-12 004d74e0  unit: G3D::Win32Window  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004d74e0
//
// 004d74e0  56                   push esi
// 004d74e1  8bf1                 mov esi, ecx
// 004d74e3  8b4604               mov eax, dword ptr [esi + 4]
// 004d74e6  3b4608               cmp eax, dword ptr [esi + 8]
// 004d74e9  8b0e                 mov ecx, dword ptr [esi]
// 004d74eb  7d16                 jge 0x4d7503
// 004d74ed  8d0481               lea eax, [ecx + eax*4]
// 004d74f0  85c0                 test eax, eax
// 004d74f2  7408                 je 0x4d74fc
// 004d74f4  8b542408             mov edx, dword ptr [esp + 8]
// 004d74f8  8b0a                 mov ecx, dword ptr [edx]
// 004d74fa  8908                 mov dword ptr [eax], ecx
// 004d74fc  ff4604               inc dword ptr [esi + 4]
// 004d74ff  5e                   pop esi
// 004d7500  c20400               ret 4
// 004d7503  57                   push edi
// 004d7504  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004d7508  3bf9                 cmp edi, ecx
// 004d750a  721e                 jb 0x4d752a
// 004d750c  8d1481               lea edx, [ecx + eax*4]
// 004d750f  3bfa                 cmp edi, edx
// 004d7511  7317                 jae 0x4d752a
// 004d7513  8b07                 mov eax, dword ptr [edi]
// 004d7515  8d4c240c             lea ecx, [esp + 0xc]
// 004d7519  51                   push ecx
// 004d751a  8bce                 mov ecx, esi
// 004d751c  89442410             mov dword ptr [esp + 0x10], eax
// 004d7520  e8bbffffff           call 0x4d74e0
// 004d7525  5f                   pop edi
// 004d7526  5e                   pop esi
// 004d7527  c20400               ret 4
// 004d752a  6a00                 push 0
// 004d752c  40                   inc eax
// 004d752d  50                   push eax
// 004d752e  8bce                 mov ecx, esi
// 004d7530  e8abfaffff           call 0x4d6fe0
// 004d7535  8b0f                 mov ecx, dword ptr [edi]
// 004d7537  8b5604               mov edx, dword ptr [esi + 4]
// 004d753a  8b06                 mov eax, dword ptr [esi]
// 004d753c  5f                   pop edi
// 004d753d  894c90fc             mov dword ptr [eax + edx*4 - 4], ecx
// 004d7541  5e                   pop esi
// 004d7542  c20400               ret 4
// library g3d-6.09/G3Dcpp\MeshAlgAdjacency.cpp (function ?append@?$Array@H@G3D@@QAEXABH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgAdjacency.cpp
