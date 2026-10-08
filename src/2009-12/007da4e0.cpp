// roc 2009-12 007da4e0  unit: RBX::SpatialFilter  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007da4e0
//
// 007da4e0  56                   push esi
// 007da4e1  8bf1                 mov esi, ecx
// 007da4e3  8b4604               mov eax, dword ptr [esi + 4]
// 007da4e6  3b4608               cmp eax, dword ptr [esi + 8]
// 007da4e9  8b0e                 mov ecx, dword ptr [esi]
// 007da4eb  7d16                 jge 0x7da503
// 007da4ed  8d0481               lea eax, [ecx + eax*4]
// 007da4f0  85c0                 test eax, eax
// 007da4f2  7408                 je 0x7da4fc
// 007da4f4  8b542408             mov edx, dword ptr [esp + 8]
// 007da4f8  8b0a                 mov ecx, dword ptr [edx]
// 007da4fa  8908                 mov dword ptr [eax], ecx
// 007da4fc  ff4604               inc dword ptr [esi + 4]
// 007da4ff  5e                   pop esi
// 007da500  c20400               ret 4
// 007da503  57                   push edi
// 007da504  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 007da508  3bf9                 cmp edi, ecx
// 007da50a  721e                 jb 0x7da52a
// 007da50c  8d1481               lea edx, [ecx + eax*4]
// 007da50f  3bfa                 cmp edi, edx
// 007da511  7317                 jae 0x7da52a
// 007da513  8b07                 mov eax, dword ptr [edi]
// 007da515  8d4c240c             lea ecx, [esp + 0xc]
// 007da519  51                   push ecx
// 007da51a  8bce                 mov ecx, esi
// 007da51c  89442410             mov dword ptr [esp + 0x10], eax
// 007da520  e8bbffffff           call 0x7da4e0
// 007da525  5f                   pop edi
// 007da526  5e                   pop esi
// 007da527  c20400               ret 4
// 007da52a  6a00                 push 0
// 007da52c  40                   inc eax
// 007da52d  50                   push eax
// 007da52e  8bce                 mov ecx, esi
// 007da530  e8cbfcffff           call 0x7da200
// 007da535  8b0f                 mov ecx, dword ptr [edi]
// 007da537  8b5604               mov edx, dword ptr [esi + 4]
// 007da53a  8b06                 mov eax, dword ptr [esi]
// 007da53c  5f                   pop edi
// 007da53d  894c90fc             mov dword ptr [eax + edx*4 - 4], ecx
// 007da541  5e                   pop esi
// 007da542  c20400               ret 4
// library g3d-6.09/G3Dcpp\MeshAlgAdjacency.cpp (function ?append@?$Array@H@G3D@@QAEXABH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgAdjacency.cpp
