// roc 2008-06 005ccf20  unit: RBX::P8Camera::?$GetSetImpl  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ccf20
//
// 005ccf20  56                   push esi
// 005ccf21  8bf1                 mov esi, ecx
// 005ccf23  8b4604               mov eax, dword ptr [esi + 4]
// 005ccf26  3b4608               cmp eax, dword ptr [esi + 8]
// 005ccf29  8b0e                 mov ecx, dword ptr [esi]
// 005ccf2b  7d16                 jge 0x5ccf43
// 005ccf2d  8d0481               lea eax, [ecx + eax*4]
// 005ccf30  85c0                 test eax, eax
// 005ccf32  7408                 je 0x5ccf3c
// 005ccf34  8b542408             mov edx, dword ptr [esp + 8]
// 005ccf38  8b0a                 mov ecx, dword ptr [edx]
// 005ccf3a  8908                 mov dword ptr [eax], ecx
// 005ccf3c  ff4604               inc dword ptr [esi + 4]
// 005ccf3f  5e                   pop esi
// 005ccf40  c20400               ret 4
// 005ccf43  57                   push edi
// 005ccf44  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005ccf48  3bf9                 cmp edi, ecx
// 005ccf4a  721e                 jb 0x5ccf6a
// 005ccf4c  8d1481               lea edx, [ecx + eax*4]
// 005ccf4f  3bfa                 cmp edi, edx
// 005ccf51  7317                 jae 0x5ccf6a
// 005ccf53  8b07                 mov eax, dword ptr [edi]
// 005ccf55  8d4c240c             lea ecx, [esp + 0xc]
// 005ccf59  51                   push ecx
// 005ccf5a  8bce                 mov ecx, esi
// 005ccf5c  89442410             mov dword ptr [esp + 0x10], eax
// 005ccf60  e8bbffffff           call 0x5ccf20
// 005ccf65  5f                   pop edi
// 005ccf66  5e                   pop esi
// 005ccf67  c20400               ret 4
// 005ccf6a  6a00                 push 0
// 005ccf6c  40                   inc eax
// 005ccf6d  50                   push eax
// 005ccf6e  8bce                 mov ecx, esi
// 005ccf70  e82bfaffff           call 0x5cc9a0
// 005ccf75  8b0f                 mov ecx, dword ptr [edi]
// 005ccf77  8b5604               mov edx, dword ptr [esi + 4]
// 005ccf7a  8b06                 mov eax, dword ptr [esi]
// 005ccf7c  5f                   pop edi
// 005ccf7d  894c90fc             mov dword ptr [eax + edx*4 - 4], ecx
// 005ccf81  5e                   pop esi
// 005ccf82  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?append@?$Array@PBX@G3D@@QAEXABQBX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
