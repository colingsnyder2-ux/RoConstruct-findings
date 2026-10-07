// roc 2010-06 00699e20  unit: RBX::PolyContact  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00699e20
//
// 00699e20  56                   push esi
// 00699e21  8bf1                 mov esi, ecx
// 00699e23  8b4604               mov eax, dword ptr [esi + 4]
// 00699e26  3b4608               cmp eax, dword ptr [esi + 8]
// 00699e29  8b0e                 mov ecx, dword ptr [esi]
// 00699e2b  7d16                 jge 0x699e43
// 00699e2d  8d0481               lea eax, [ecx + eax*4]
// 00699e30  85c0                 test eax, eax
// 00699e32  7408                 je 0x699e3c
// 00699e34  8b542408             mov edx, dword ptr [esp + 8]
// 00699e38  8b0a                 mov ecx, dword ptr [edx]
// 00699e3a  8908                 mov dword ptr [eax], ecx
// 00699e3c  ff4604               inc dword ptr [esi + 4]
// 00699e3f  5e                   pop esi
// 00699e40  c20400               ret 4
// 00699e43  57                   push edi
// 00699e44  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00699e48  3bf9                 cmp edi, ecx
// 00699e4a  721e                 jb 0x699e6a
// 00699e4c  8d1481               lea edx, [ecx + eax*4]
// 00699e4f  3bfa                 cmp edi, edx
// 00699e51  7317                 jae 0x699e6a
// 00699e53  8b07                 mov eax, dword ptr [edi]
// 00699e55  8d4c240c             lea ecx, [esp + 0xc]
// 00699e59  51                   push ecx
// 00699e5a  8bce                 mov ecx, esi
// 00699e5c  89442410             mov dword ptr [esp + 0x10], eax
// 00699e60  e8bbffffff           call 0x699e20
// 00699e65  5f                   pop edi
// 00699e66  5e                   pop esi
// 00699e67  c20400               ret 4
// 00699e6a  6a00                 push 0
// 00699e6c  40                   inc eax
// 00699e6d  50                   push eax
// 00699e6e  8bce                 mov ecx, esi
// 00699e70  e89bc5fdff           call 0x676410
// 00699e75  8b0f                 mov ecx, dword ptr [edi]
// 00699e77  8b5604               mov edx, dword ptr [esi + 4]
// 00699e7a  8b06                 mov eax, dword ptr [esi]
// 00699e7c  5f                   pop edi
// 00699e7d  894c90fc             mov dword ptr [eax + edx*4 - 4], ecx
// 00699e81  5e                   pop esi
// 00699e82  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?append@?$Array@PBX@G3D@@QAEXABQBX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
