// roc 2010-06 006c6ba0  unit: RBX::VGeometryService::?$FactoryProduct  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006c6ba0
//
// 006c6ba0  56                   push esi
// 006c6ba1  8bf1                 mov esi, ecx
// 006c6ba3  8b4604               mov eax, dword ptr [esi + 4]
// 006c6ba6  3b4608               cmp eax, dword ptr [esi + 8]
// 006c6ba9  8b0e                 mov ecx, dword ptr [esi]
// 006c6bab  7d16                 jge 0x6c6bc3
// 006c6bad  8d0481               lea eax, [ecx + eax*4]
// 006c6bb0  85c0                 test eax, eax
// 006c6bb2  7408                 je 0x6c6bbc
// 006c6bb4  8b542408             mov edx, dword ptr [esp + 8]
// 006c6bb8  8b0a                 mov ecx, dword ptr [edx]
// 006c6bba  8908                 mov dword ptr [eax], ecx
// 006c6bbc  ff4604               inc dword ptr [esi + 4]
// 006c6bbf  5e                   pop esi
// 006c6bc0  c20400               ret 4
// 006c6bc3  57                   push edi
// 006c6bc4  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006c6bc8  3bf9                 cmp edi, ecx
// 006c6bca  721e                 jb 0x6c6bea
// 006c6bcc  8d1481               lea edx, [ecx + eax*4]
// 006c6bcf  3bfa                 cmp edi, edx
// 006c6bd1  7317                 jae 0x6c6bea
// 006c6bd3  8b07                 mov eax, dword ptr [edi]
// 006c6bd5  8d4c240c             lea ecx, [esp + 0xc]
// 006c6bd9  51                   push ecx
// 006c6bda  8bce                 mov ecx, esi
// 006c6bdc  89442410             mov dword ptr [esp + 0x10], eax
// 006c6be0  e8bbffffff           call 0x6c6ba0
// 006c6be5  5f                   pop edi
// 006c6be6  5e                   pop esi
// 006c6be7  c20400               ret 4
// 006c6bea  6a00                 push 0
// 006c6bec  40                   inc eax
// 006c6bed  50                   push eax
// 006c6bee  8bce                 mov ecx, esi
// 006c6bf0  e88bfeffff           call 0x6c6a80
// 006c6bf5  8b0f                 mov ecx, dword ptr [edi]
// 006c6bf7  8b5604               mov edx, dword ptr [esi + 4]
// 006c6bfa  8b06                 mov eax, dword ptr [esi]
// 006c6bfc  5f                   pop edi
// 006c6bfd  894c90fc             mov dword ptr [eax + edx*4 - 4], ecx
// 006c6c01  5e                   pop esi
// 006c6c02  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?append@?$Array@PBX@G3D@@QAEXABQBX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
