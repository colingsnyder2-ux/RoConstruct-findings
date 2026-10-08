// from server: 100% by auto
// roc 2009-06 004a4ad0  unit: G3D::TextureManager::TextureArgs  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004a4ad0
//
// 004a4ad0  53                   push ebx
// 004a4ad1  55                   push ebp
// 004a4ad2  56                   push esi
// 004a4ad3  57                   push edi
// 004a4ad4  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 004a4ad8  8b07                 mov eax, dword ptr [edi]
// 004a4ada  8b10                 mov edx, dword ptr [eax]
// 004a4adc  8bf1                 mov esi, ecx
// 004a4ade  8bcf                 mov ecx, edi
// 004a4ae0  ffd2                 call edx
// 004a4ae2  33d2                 xor edx, edx
// 004a4ae4  8bd8                 mov ebx, eax
// 004a4ae6  f7760c               div dword ptr [esi + 0xc]
// 004a4ae9  8b4608               mov eax, dword ptr [esi + 8]
// 004a4aec  8b3490               mov esi, dword ptr [eax + edx*4]
// 004a4aef  85f6                 test esi, esi
// 004a4af1  7456                 je 0x4a4b49
// 004a4af3  8b2d44e48900         mov ebp, dword ptr [0x89e444]
// 004a4af9  8da42400000000       lea esp, [esp]
// 004a4b00  391e                 cmp dword ptr [esi], ebx
// 004a4b02  753e                 jne 0x4a4b42
// 004a4b04  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 004a4b07  3b4f20               cmp ecx, dword ptr [edi + 0x20]
// 004a4b0a  7536                 jne 0x4a4b42
// 004a4b0c  8b562c               mov edx, dword ptr [esi + 0x2c]
// 004a4b0f  3b5724               cmp edx, dword ptr [edi + 0x24]
// 004a4b12  752e                 jne 0x4a4b42
// 004a4b14  8b4630               mov eax, dword ptr [esi + 0x30]
// 004a4b17  3b4728               cmp eax, dword ptr [edi + 0x28]
// 004a4b1a  7526                 jne 0x4a4b42
// 004a4b1c  8d4f04               lea ecx, [edi + 4]
// 004a4b1f  51                   push ecx
// 004a4b20  8d560c               lea edx, [esi + 0xc]
// 004a4b23  52                   push edx
// 004a4b24  ffd5                 call ebp
// 004a4b26  83c408               add esp, 8
// 004a4b29  84c0                 test al, al
// 004a4b2b  7415                 je 0x4a4b42
// 004a4b2d  8b4634               mov eax, dword ptr [esi + 0x34]
// 004a4b30  3b472c               cmp eax, dword ptr [edi + 0x2c]
// 004a4b33  750d                 jne 0x4a4b42
// 004a4b35  dd4730               fld qword ptr [edi + 0x30]
// 004a4b38  dc5e38               fcomp qword ptr [esi + 0x38]
// 004a4b3b  dfe0                 fnstsw ax
// 004a4b3d  f6c444               test ah, 0x44
// 004a4b40  7b07                 jnp 0x4a4b49
// 004a4b42  8b7648               mov esi, dword ptr [esi + 0x48]
// 004a4b45  85f6                 test esi, esi
// 004a4b47  75b7                 jne 0x4a4b00
// 004a4b49  5f                   pop edi
// 004a4b4a  8d4640               lea eax, [esi + 0x40]
// 004a4b4d  5e                   pop esi
// 004a4b4e  5d                   pop ebp
// 004a4b4f  5b                   pop ebx
// 004a4b50  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ?get@?$Table@VTextureArgs@TextureManager@G3D@@V?$ReferenceCountedPointer@VTexture@G3D@@@3@@G3D@@QBEAAV?$ReferenceCountedPointer@VTexture@G3D@@@2@ABVTextureArgs@TextureManager@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
