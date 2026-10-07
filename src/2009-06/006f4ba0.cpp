// roc 2009-06 006f4ba0  unit: RBX::HUMAN::GettingUp  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006f4ba0
//
// 006f4ba0  56                   push esi
// 006f4ba1  8bf1                 mov esi, ecx
// 006f4ba3  8b4604               mov eax, dword ptr [esi + 4]
// 006f4ba6  3b4608               cmp eax, dword ptr [esi + 8]
// 006f4ba9  8b0e                 mov ecx, dword ptr [esi]
// 006f4bab  7d16                 jge 0x6f4bc3
// 006f4bad  8d0481               lea eax, [ecx + eax*4]
// 006f4bb0  85c0                 test eax, eax
// 006f4bb2  7408                 je 0x6f4bbc
// 006f4bb4  8b542408             mov edx, dword ptr [esp + 8]
// 006f4bb8  8b0a                 mov ecx, dword ptr [edx]
// 006f4bba  8908                 mov dword ptr [eax], ecx
// 006f4bbc  ff4604               inc dword ptr [esi + 4]
// 006f4bbf  5e                   pop esi
// 006f4bc0  c20400               ret 4
// 006f4bc3  57                   push edi
// 006f4bc4  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006f4bc8  3bf9                 cmp edi, ecx
// 006f4bca  721e                 jb 0x6f4bea
// 006f4bcc  8d1481               lea edx, [ecx + eax*4]
// 006f4bcf  3bfa                 cmp edi, edx
// 006f4bd1  7317                 jae 0x6f4bea
// 006f4bd3  8b07                 mov eax, dword ptr [edi]
// 006f4bd5  8d4c240c             lea ecx, [esp + 0xc]
// 006f4bd9  51                   push ecx
// 006f4bda  8bce                 mov ecx, esi
// 006f4bdc  89442410             mov dword ptr [esp + 0x10], eax
// 006f4be0  e8bbffffff           call 0x6f4ba0
// 006f4be5  5f                   pop edi
// 006f4be6  5e                   pop esi
// 006f4be7  c20400               ret 4
// 006f4bea  6a00                 push 0
// 006f4bec  40                   inc eax
// 006f4bed  50                   push eax
// 006f4bee  8bce                 mov ecx, esi
// 006f4bf0  e8abfeffff           call 0x6f4aa0
// 006f4bf5  8b0f                 mov ecx, dword ptr [edi]
// 006f4bf7  8b5604               mov edx, dword ptr [esi + 4]
// 006f4bfa  8b06                 mov eax, dword ptr [esi]
// 006f4bfc  5f                   pop edi
// 006f4bfd  894c90fc             mov dword ptr [eax + edx*4 - 4], ecx
// 006f4c01  5e                   pop esi
// 006f4c02  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?append@?$Array@PBX@G3D@@QAEXABQBX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
