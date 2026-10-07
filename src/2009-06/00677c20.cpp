// roc 2009-06 00677c20  unit: RBX::Message  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00677c20
//
// 00677c20  56                   push esi
// 00677c21  8bf1                 mov esi, ecx
// 00677c23  8b4604               mov eax, dword ptr [esi + 4]
// 00677c26  3b4608               cmp eax, dword ptr [esi + 8]
// 00677c29  8b0e                 mov ecx, dword ptr [esi]
// 00677c2b  7d16                 jge 0x677c43
// 00677c2d  8d0481               lea eax, [ecx + eax*4]
// 00677c30  85c0                 test eax, eax
// 00677c32  7408                 je 0x677c3c
// 00677c34  8b542408             mov edx, dword ptr [esp + 8]
// 00677c38  8b0a                 mov ecx, dword ptr [edx]
// 00677c3a  8908                 mov dword ptr [eax], ecx
// 00677c3c  ff4604               inc dword ptr [esi + 4]
// 00677c3f  5e                   pop esi
// 00677c40  c20400               ret 4
// 00677c43  57                   push edi
// 00677c44  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00677c48  3bf9                 cmp edi, ecx
// 00677c4a  721e                 jb 0x677c6a
// 00677c4c  8d1481               lea edx, [ecx + eax*4]
// 00677c4f  3bfa                 cmp edi, edx
// 00677c51  7317                 jae 0x677c6a
// 00677c53  8b07                 mov eax, dword ptr [edi]
// 00677c55  8d4c240c             lea ecx, [esp + 0xc]
// 00677c59  51                   push ecx
// 00677c5a  8bce                 mov ecx, esi
// 00677c5c  89442410             mov dword ptr [esp + 0x10], eax
// 00677c60  e8bbffffff           call 0x677c20
// 00677c65  5f                   pop edi
// 00677c66  5e                   pop esi
// 00677c67  c20400               ret 4
// 00677c6a  6a00                 push 0
// 00677c6c  40                   inc eax
// 00677c6d  50                   push eax
// 00677c6e  8bce                 mov ecx, esi
// 00677c70  e83bc0e6ff           call 0x4e3cb0
// 00677c75  8b0f                 mov ecx, dword ptr [edi]
// 00677c77  8b5604               mov edx, dword ptr [esi + 4]
// 00677c7a  8b06                 mov eax, dword ptr [esi]
// 00677c7c  5f                   pop edi
// 00677c7d  894c90fc             mov dword ptr [eax + edx*4 - 4], ecx
// 00677c81  5e                   pop esi
// 00677c82  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?append@?$Array@PBX@G3D@@QAEXABQBX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
