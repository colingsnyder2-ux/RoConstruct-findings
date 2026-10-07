// roc 2007-08 00479e60  unit: G3D::TextureManager::TextureArgs  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00479e60
//
// 00479e60  51                   push ecx
// 00479e61  53                   push ebx
// 00479e62  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00479e66  55                   push ebp
// 00479e67  56                   push esi
// 00479e68  57                   push edi
// 00479e69  8bf1                 mov esi, ecx
// 00479e6b  8b4608               mov eax, dword ptr [esi + 8]
// 00479e6e  8d3c9d00000000       lea edi, [ebx*4]
// 00479e75  6a10                 push 0x10
// 00479e77  57                   push edi
// 00479e78  89442418             mov dword ptr [esp + 0x18], eax
// 00479e7c  e8df610800           call 0x500060
// 00479e81  57                   push edi
// 00479e82  6a00                 push 0
// 00479e84  50                   push eax
// 00479e85  894608               mov dword ptr [esi + 8], eax
// 00479e88  e8f3660800           call 0x500580
// 00479e8d  33ed                 xor ebp, ebp
// 00479e8f  83c414               add esp, 0x14
// 00479e92  396e0c               cmp dword ptr [esi + 0xc], ebp
// 00479e95  7e31                 jle 0x479ec8
// 00479e97  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00479e9b  8b0ca9               mov ecx, dword ptr [ecx + ebp*4]
// 00479e9e  85c9                 test ecx, ecx
// 00479ea0  741e                 je 0x479ec0
// 00479ea2  8b01                 mov eax, dword ptr [ecx]
// 00479ea4  33d2                 xor edx, edx
// 00479ea6  f7f3                 div ebx
// 00479ea8  8b4608               mov eax, dword ptr [esi + 8]
// 00479eab  8b7948               mov edi, dword ptr [ecx + 0x48]
// 00479eae  85ff                 test edi, edi
// 00479eb0  8b0490               mov eax, dword ptr [eax + edx*4]
// 00479eb3  894148               mov dword ptr [ecx + 0x48], eax
// 00479eb6  8b4608               mov eax, dword ptr [esi + 8]
// 00479eb9  890c90               mov dword ptr [eax + edx*4], ecx
// 00479ebc  8bcf                 mov ecx, edi
// 00479ebe  75e2                 jne 0x479ea2
// 00479ec0  83c501               add ebp, 1
// 00479ec3  3b6e0c               cmp ebp, dword ptr [esi + 0xc]
// 00479ec6  7ccf                 jl 0x479e97
// 00479ec8  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00479ecc  51                   push ecx
// 00479ecd  e83e590800           call 0x4ff810
// 00479ed2  83c404               add esp, 4
// 00479ed5  5f                   pop edi
// 00479ed6  895e0c               mov dword ptr [esi + 0xc], ebx
// 00479ed9  5e                   pop esi
// 00479eda  5d                   pop ebp
// 00479edb  5b                   pop ebx
// 00479edc  59                   pop ecx
// 00479edd  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ?resize@?$Table@VTextureArgs@TextureManager@G3D@@V?$ReferenceCountedPointer@VTexture@G3D@@@3@@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
