// roc 2009-12 007802e0  unit: RBX::BlockBlockContact  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007802e0
//
// 007802e0  56                   push esi
// 007802e1  8bf1                 mov esi, ecx
// 007802e3  8b4604               mov eax, dword ptr [esi + 4]
// 007802e6  3b4608               cmp eax, dword ptr [esi + 8]
// 007802e9  8b0e                 mov ecx, dword ptr [esi]
// 007802eb  7d16                 jge 0x780303
// 007802ed  8d0481               lea eax, [ecx + eax*4]
// 007802f0  85c0                 test eax, eax
// 007802f2  7408                 je 0x7802fc
// 007802f4  8b542408             mov edx, dword ptr [esp + 8]
// 007802f8  8b0a                 mov ecx, dword ptr [edx]
// 007802fa  8908                 mov dword ptr [eax], ecx
// 007802fc  ff4604               inc dword ptr [esi + 4]
// 007802ff  5e                   pop esi
// 00780300  c20400               ret 4
// 00780303  57                   push edi
// 00780304  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00780308  3bf9                 cmp edi, ecx
// 0078030a  721e                 jb 0x78032a
// 0078030c  8d1481               lea edx, [ecx + eax*4]
// 0078030f  3bfa                 cmp edi, edx
// 00780311  7317                 jae 0x78032a
// 00780313  8b07                 mov eax, dword ptr [edi]
// 00780315  8d4c240c             lea ecx, [esp + 0xc]
// 00780319  51                   push ecx
// 0078031a  8bce                 mov ecx, esi
// 0078031c  89442410             mov dword ptr [esp + 0x10], eax
// 00780320  e8bbffffff           call 0x7802e0
// 00780325  5f                   pop edi
// 00780326  5e                   pop esi
// 00780327  c20400               ret 4
// 0078032a  6a00                 push 0
// 0078032c  40                   inc eax
// 0078032d  50                   push eax
// 0078032e  8bce                 mov ecx, esi
// 00780330  e88bb8ffff           call 0x77bbc0
// 00780335  8b0f                 mov ecx, dword ptr [edi]
// 00780337  8b5604               mov edx, dword ptr [esi + 4]
// 0078033a  8b06                 mov eax, dword ptr [esi]
// 0078033c  5f                   pop edi
// 0078033d  894c90fc             mov dword ptr [eax + edx*4 - 4], ecx
// 00780341  5e                   pop esi
// 00780342  c20400               ret 4
// library g3d-6.09/G3Dcpp\MeshAlgAdjacency.cpp (function ?append@?$Array@H@G3D@@QAEXABH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgAdjacency.cpp
