// roc 2009-12 006cc860  unit: RBX::P8PartInstance::?$GetSetImpl  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006cc860
//
// 006cc860  56                   push esi
// 006cc861  8bf1                 mov esi, ecx
// 006cc863  8b4604               mov eax, dword ptr [esi + 4]
// 006cc866  3b4608               cmp eax, dword ptr [esi + 8]
// 006cc869  8b0e                 mov ecx, dword ptr [esi]
// 006cc86b  7d16                 jge 0x6cc883
// 006cc86d  8d0481               lea eax, [ecx + eax*4]
// 006cc870  85c0                 test eax, eax
// 006cc872  7408                 je 0x6cc87c
// 006cc874  8b542408             mov edx, dword ptr [esp + 8]
// 006cc878  8b0a                 mov ecx, dword ptr [edx]
// 006cc87a  8908                 mov dword ptr [eax], ecx
// 006cc87c  ff4604               inc dword ptr [esi + 4]
// 006cc87f  5e                   pop esi
// 006cc880  c20400               ret 4
// 006cc883  57                   push edi
// 006cc884  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006cc888  3bf9                 cmp edi, ecx
// 006cc88a  721e                 jb 0x6cc8aa
// 006cc88c  8d1481               lea edx, [ecx + eax*4]
// 006cc88f  3bfa                 cmp edi, edx
// 006cc891  7317                 jae 0x6cc8aa
// 006cc893  8b07                 mov eax, dword ptr [edi]
// 006cc895  8d4c240c             lea ecx, [esp + 0xc]
// 006cc899  51                   push ecx
// 006cc89a  8bce                 mov ecx, esi
// 006cc89c  89442410             mov dword ptr [esp + 0x10], eax
// 006cc8a0  e8bbffffff           call 0x6cc860
// 006cc8a5  5f                   pop edi
// 006cc8a6  5e                   pop esi
// 006cc8a7  c20400               ret 4
// 006cc8aa  6a00                 push 0
// 006cc8ac  40                   inc eax
// 006cc8ad  50                   push eax
// 006cc8ae  8bce                 mov ecx, esi
// 006cc8b0  e83ba2fcff           call 0x696af0
// 006cc8b5  8b0f                 mov ecx, dword ptr [edi]
// 006cc8b7  8b5604               mov edx, dword ptr [esi + 4]
// 006cc8ba  8b06                 mov eax, dword ptr [esi]
// 006cc8bc  5f                   pop edi
// 006cc8bd  894c90fc             mov dword ptr [eax + edx*4 - 4], ecx
// 006cc8c1  5e                   pop esi
// 006cc8c2  c20400               ret 4
// library g3d-6.09/G3Dcpp\MeshAlgAdjacency.cpp (function ?append@?$Array@H@G3D@@QAEXABH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgAdjacency.cpp
