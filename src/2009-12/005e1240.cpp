// roc 2009-12 005e1240  unit: RBX::RbxG3D::RenderScene  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005e1240
//
// 005e1240  56                   push esi
// 005e1241  8bf1                 mov esi, ecx
// 005e1243  8b4604               mov eax, dword ptr [esi + 4]
// 005e1246  3b4608               cmp eax, dword ptr [esi + 8]
// 005e1249  8b0e                 mov ecx, dword ptr [esi]
// 005e124b  7d16                 jge 0x5e1263
// 005e124d  8d0481               lea eax, [ecx + eax*4]
// 005e1250  85c0                 test eax, eax
// 005e1252  7408                 je 0x5e125c
// 005e1254  8b542408             mov edx, dword ptr [esp + 8]
// 005e1258  8b0a                 mov ecx, dword ptr [edx]
// 005e125a  8908                 mov dword ptr [eax], ecx
// 005e125c  ff4604               inc dword ptr [esi + 4]
// 005e125f  5e                   pop esi
// 005e1260  c20400               ret 4
// 005e1263  57                   push edi
// 005e1264  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005e1268  3bf9                 cmp edi, ecx
// 005e126a  721e                 jb 0x5e128a
// 005e126c  8d1481               lea edx, [ecx + eax*4]
// 005e126f  3bfa                 cmp edi, edx
// 005e1271  7317                 jae 0x5e128a
// 005e1273  8b07                 mov eax, dword ptr [edi]
// 005e1275  8d4c240c             lea ecx, [esp + 0xc]
// 005e1279  51                   push ecx
// 005e127a  8bce                 mov ecx, esi
// 005e127c  89442410             mov dword ptr [esp + 0x10], eax
// 005e1280  e8bbffffff           call 0x5e1240
// 005e1285  5f                   pop edi
// 005e1286  5e                   pop esi
// 005e1287  c20400               ret 4
// 005e128a  6a00                 push 0
// 005e128c  40                   inc eax
// 005e128d  50                   push eax
// 005e128e  8bce                 mov ecx, esi
// 005e1290  e8fbf8ffff           call 0x5e0b90
// 005e1295  8b0f                 mov ecx, dword ptr [edi]
// 005e1297  8b5604               mov edx, dword ptr [esi + 4]
// 005e129a  8b06                 mov eax, dword ptr [esi]
// 005e129c  5f                   pop edi
// 005e129d  894c90fc             mov dword ptr [eax + edx*4 - 4], ecx
// 005e12a1  5e                   pop esi
// 005e12a2  c20400               ret 4
// library g3d-6.09/G3Dcpp\MeshAlgAdjacency.cpp (function ?append@?$Array@H@G3D@@QAEXABH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgAdjacency.cpp
