// roc 2009-12 00746f80  unit: RBX::VGeometryService::?$FactoryProduct  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00746f80
//
// 00746f80  56                   push esi
// 00746f81  8bf1                 mov esi, ecx
// 00746f83  8b4604               mov eax, dword ptr [esi + 4]
// 00746f86  3b4608               cmp eax, dword ptr [esi + 8]
// 00746f89  8b0e                 mov ecx, dword ptr [esi]
// 00746f8b  7d16                 jge 0x746fa3
// 00746f8d  8d0481               lea eax, [ecx + eax*4]
// 00746f90  85c0                 test eax, eax
// 00746f92  7408                 je 0x746f9c
// 00746f94  8b542408             mov edx, dword ptr [esp + 8]
// 00746f98  8b0a                 mov ecx, dword ptr [edx]
// 00746f9a  8908                 mov dword ptr [eax], ecx
// 00746f9c  ff4604               inc dword ptr [esi + 4]
// 00746f9f  5e                   pop esi
// 00746fa0  c20400               ret 4
// 00746fa3  57                   push edi
// 00746fa4  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00746fa8  3bf9                 cmp edi, ecx
// 00746faa  721e                 jb 0x746fca
// 00746fac  8d1481               lea edx, [ecx + eax*4]
// 00746faf  3bfa                 cmp edi, edx
// 00746fb1  7317                 jae 0x746fca
// 00746fb3  8b07                 mov eax, dword ptr [edi]
// 00746fb5  8d4c240c             lea ecx, [esp + 0xc]
// 00746fb9  51                   push ecx
// 00746fba  8bce                 mov ecx, esi
// 00746fbc  89442410             mov dword ptr [esp + 0x10], eax
// 00746fc0  e8bbffffff           call 0x746f80
// 00746fc5  5f                   pop edi
// 00746fc6  5e                   pop esi
// 00746fc7  c20400               ret 4
// 00746fca  6a00                 push 0
// 00746fcc  40                   inc eax
// 00746fcd  50                   push eax
// 00746fce  8bce                 mov ecx, esi
// 00746fd0  e88bfeffff           call 0x746e60
// 00746fd5  8b0f                 mov ecx, dword ptr [edi]
// 00746fd7  8b5604               mov edx, dword ptr [esi + 4]
// 00746fda  8b06                 mov eax, dword ptr [esi]
// 00746fdc  5f                   pop edi
// 00746fdd  894c90fc             mov dword ptr [eax + edx*4 - 4], ecx
// 00746fe1  5e                   pop esi
// 00746fe2  c20400               ret 4
// library g3d-6.09/G3Dcpp\MeshAlgAdjacency.cpp (function ?append@?$Array@H@G3D@@QAEXABH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgAdjacency.cpp
