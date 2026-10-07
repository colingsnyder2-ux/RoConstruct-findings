// roc 2008-06 0047d490  unit: G3D::TextureManager::TextureArgs  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0047d490
//
// 0047d490  53                   push ebx
// 0047d491  55                   push ebp
// 0047d492  56                   push esi
// 0047d493  57                   push edi
// 0047d494  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0047d498  8b07                 mov eax, dword ptr [edi]
// 0047d49a  8b10                 mov edx, dword ptr [eax]
// 0047d49c  8bf1                 mov esi, ecx
// 0047d49e  8bcf                 mov ecx, edi
// 0047d4a0  ffd2                 call edx
// 0047d4a2  33d2                 xor edx, edx
// 0047d4a4  8bd8                 mov ebx, eax
// 0047d4a6  f7760c               div dword ptr [esi + 0xc]
// 0047d4a9  8b4608               mov eax, dword ptr [esi + 8]
// 0047d4ac  8b3490               mov esi, dword ptr [eax + edx*4]
// 0047d4af  85f6                 test esi, esi
// 0047d4b1  745d                 je 0x47d510
// 0047d4b3  8b2d44248000         mov ebp, dword ptr [0x802444]
// 0047d4b9  8da42400000000       lea esp, [esp]
// 0047d4c0  391e                 cmp dword ptr [esi], ebx
// 0047d4c2  753e                 jne 0x47d502
// 0047d4c4  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 0047d4c7  3b4f20               cmp ecx, dword ptr [edi + 0x20]
// 0047d4ca  7536                 jne 0x47d502
// 0047d4cc  8b562c               mov edx, dword ptr [esi + 0x2c]
// 0047d4cf  3b5724               cmp edx, dword ptr [edi + 0x24]
// 0047d4d2  752e                 jne 0x47d502
// 0047d4d4  8b4630               mov eax, dword ptr [esi + 0x30]
// 0047d4d7  3b4728               cmp eax, dword ptr [edi + 0x28]
// 0047d4da  7526                 jne 0x47d502
// 0047d4dc  8d4f04               lea ecx, [edi + 4]
// 0047d4df  51                   push ecx
// 0047d4e0  8d560c               lea edx, [esi + 0xc]
// 0047d4e3  52                   push edx
// 0047d4e4  ffd5                 call ebp
// 0047d4e6  83c408               add esp, 8
// 0047d4e9  84c0                 test al, al
// 0047d4eb  7415                 je 0x47d502
// 0047d4ed  8b4634               mov eax, dword ptr [esi + 0x34]
// 0047d4f0  3b472c               cmp eax, dword ptr [edi + 0x2c]
// 0047d4f3  750d                 jne 0x47d502
// 0047d4f5  dd4730               fld qword ptr [edi + 0x30]
// 0047d4f8  dc5e38               fcomp qword ptr [esi + 0x38]
// 0047d4fb  dfe0                 fnstsw ax
// 0047d4fd  f6c444               test ah, 0x44
// 0047d500  7b17                 jnp 0x47d519
// 0047d502  8b7648               mov esi, dword ptr [esi + 0x48]
// 0047d505  85f6                 test esi, esi
// 0047d507  75b7                 jne 0x47d4c0
// 0047d509  8da42400000000       lea esp, [esp]
// 0047d510  5f                   pop edi
// 0047d511  5e                   pop esi
// 0047d512  5d                   pop ebp
// 0047d513  32c0                 xor al, al
// 0047d515  5b                   pop ebx
// 0047d516  c20400               ret 4
// 0047d519  5f                   pop edi
// 0047d51a  5e                   pop esi
// 0047d51b  5d                   pop ebp
// 0047d51c  b001                 mov al, 1
// 0047d51e  5b                   pop ebx
// 0047d51f  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ?containsKey@?$Table@VTextureArgs@TextureManager@G3D@@V?$ReferenceCountedPointer@VTexture@G3D@@@3@@G3D@@QBE_NABVTextureArgs@TextureManager@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
