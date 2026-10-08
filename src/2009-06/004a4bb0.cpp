// from server: 100% by auto
// roc 2009-06 004a4bb0  unit: G3D::TextureManager::TextureArgs  size: 152 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004a4bb0
//
// 004a4bb0  53                   push ebx
// 004a4bb1  55                   push ebp
// 004a4bb2  56                   push esi
// 004a4bb3  57                   push edi
// 004a4bb4  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 004a4bb8  8b07                 mov eax, dword ptr [edi]
// 004a4bba  8b10                 mov edx, dword ptr [eax]
// 004a4bbc  8bf1                 mov esi, ecx
// 004a4bbe  8bcf                 mov ecx, edi
// 004a4bc0  ffd2                 call edx
// 004a4bc2  33d2                 xor edx, edx
// 004a4bc4  8bd8                 mov ebx, eax
// 004a4bc6  f7760c               div dword ptr [esi + 0xc]
// 004a4bc9  8b4608               mov eax, dword ptr [esi + 8]
// 004a4bcc  8b3490               mov esi, dword ptr [eax + edx*4]
// 004a4bcf  85f6                 test esi, esi
// 004a4bd1  7456                 je 0x4a4c29
// 004a4bd3  8b2d44e48900         mov ebp, dword ptr [0x89e444]
// 004a4bd9  8da42400000000       lea esp, [esp]
// 004a4be0  391e                 cmp dword ptr [esi], ebx
// 004a4be2  753e                 jne 0x4a4c22
// 004a4be4  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 004a4be7  3b4f20               cmp ecx, dword ptr [edi + 0x20]
// 004a4bea  7536                 jne 0x4a4c22
// 004a4bec  8b562c               mov edx, dword ptr [esi + 0x2c]
// 004a4bef  3b5724               cmp edx, dword ptr [edi + 0x24]
// 004a4bf2  752e                 jne 0x4a4c22
// 004a4bf4  8b4630               mov eax, dword ptr [esi + 0x30]
// 004a4bf7  3b4728               cmp eax, dword ptr [edi + 0x28]
// 004a4bfa  7526                 jne 0x4a4c22
// 004a4bfc  8d4f04               lea ecx, [edi + 4]
// 004a4bff  51                   push ecx
// 004a4c00  8d560c               lea edx, [esi + 0xc]
// 004a4c03  52                   push edx
// 004a4c04  ffd5                 call ebp
// 004a4c06  83c408               add esp, 8
// 004a4c09  84c0                 test al, al
// 004a4c0b  7415                 je 0x4a4c22
// 004a4c0d  8b4634               mov eax, dword ptr [esi + 0x34]
// 004a4c10  3b472c               cmp eax, dword ptr [edi + 0x2c]
// 004a4c13  750d                 jne 0x4a4c22
// 004a4c15  dd4730               fld qword ptr [edi + 0x30]
// 004a4c18  dc5e38               fcomp qword ptr [esi + 0x38]
// 004a4c1b  dfe0                 fnstsw ax
// 004a4c1d  f6c444               test ah, 0x44
// 004a4c20  7b10                 jnp 0x4a4c32
// 004a4c22  8b7648               mov esi, dword ptr [esi + 0x48]
// 004a4c25  85f6                 test esi, esi
// 004a4c27  75b7                 jne 0x4a4be0
// 004a4c29  5f                   pop edi
// 004a4c2a  5e                   pop esi
// 004a4c2b  5d                   pop ebp
// 004a4c2c  32c0                 xor al, al
// 004a4c2e  5b                   pop ebx
// 004a4c2f  c20800               ret 8
// 004a4c32  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 004a4c35  51                   push ecx
// 004a4c36  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004a4c3a  e821acffff           call 0x49f860
// 004a4c3f  5f                   pop edi
// 004a4c40  5e                   pop esi
// 004a4c41  5d                   pop ebp
// 004a4c42  b001                 mov al, 1
// 004a4c44  5b                   pop ebx
// 004a4c45  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ?get@?$Table@VTextureArgs@TextureManager@G3D@@V?$ReferenceCountedPointer@VTexture@G3D@@@3@@G3D@@QBE_NABVTextureArgs@TextureManager@2@AAV?$ReferenceCountedPointer@VTexture@G3D@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
