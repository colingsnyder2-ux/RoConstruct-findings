// roc 2009-12 007548a0  unit: RBX::VPartInstance::?$SeatImpl  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007548a0
//
// 007548a0  56                   push esi
// 007548a1  8bf1                 mov esi, ecx
// 007548a3  8b4604               mov eax, dword ptr [esi + 4]
// 007548a6  3b4608               cmp eax, dword ptr [esi + 8]
// 007548a9  8b0e                 mov ecx, dword ptr [esi]
// 007548ab  7d16                 jge 0x7548c3
// 007548ad  8d0481               lea eax, [ecx + eax*4]
// 007548b0  85c0                 test eax, eax
// 007548b2  7408                 je 0x7548bc
// 007548b4  8b542408             mov edx, dword ptr [esp + 8]
// 007548b8  8b0a                 mov ecx, dword ptr [edx]
// 007548ba  8908                 mov dword ptr [eax], ecx
// 007548bc  ff4604               inc dword ptr [esi + 4]
// 007548bf  5e                   pop esi
// 007548c0  c20400               ret 4
// 007548c3  57                   push edi
// 007548c4  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 007548c8  3bf9                 cmp edi, ecx
// 007548ca  721e                 jb 0x7548ea
// 007548cc  8d1481               lea edx, [ecx + eax*4]
// 007548cf  3bfa                 cmp edi, edx
// 007548d1  7317                 jae 0x7548ea
// 007548d3  8b07                 mov eax, dword ptr [edi]
// 007548d5  8d4c240c             lea ecx, [esp + 0xc]
// 007548d9  51                   push ecx
// 007548da  8bce                 mov ecx, esi
// 007548dc  89442410             mov dword ptr [esp + 0x10], eax
// 007548e0  e8bbffffff           call 0x7548a0
// 007548e5  5f                   pop edi
// 007548e6  5e                   pop esi
// 007548e7  c20400               ret 4
// 007548ea  6a00                 push 0
// 007548ec  40                   inc eax
// 007548ed  50                   push eax
// 007548ee  8bce                 mov ecx, esi
// 007548f0  e88bf7ffff           call 0x754080
// 007548f5  8b0f                 mov ecx, dword ptr [edi]
// 007548f7  8b5604               mov edx, dword ptr [esi + 4]
// 007548fa  8b06                 mov eax, dword ptr [esi]
// 007548fc  5f                   pop edi
// 007548fd  894c90fc             mov dword ptr [eax + edx*4 - 4], ecx
// 00754901  5e                   pop esi
// 00754902  c20400               ret 4
// library g3d-6.09/G3Dcpp\MeshAlgAdjacency.cpp (function ?append@?$Array@H@G3D@@QAEXABH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgAdjacency.cpp
