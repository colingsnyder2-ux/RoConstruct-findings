// roc 2009-06 004a4960  unit: G3D::TextureManager::TextureArgs  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004a4960
//
// 004a4960  53                   push ebx
// 004a4961  55                   push ebp
// 004a4962  56                   push esi
// 004a4963  57                   push edi
// 004a4964  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 004a4968  8b07                 mov eax, dword ptr [edi]
// 004a496a  8b10                 mov edx, dword ptr [eax]
// 004a496c  8bf1                 mov esi, ecx
// 004a496e  8bcf                 mov ecx, edi
// 004a4970  ffd2                 call edx
// 004a4972  33d2                 xor edx, edx
// 004a4974  8bd8                 mov ebx, eax
// 004a4976  f7760c               div dword ptr [esi + 0xc]
// 004a4979  8b4608               mov eax, dword ptr [esi + 8]
// 004a497c  8b3490               mov esi, dword ptr [eax + edx*4]
// 004a497f  85f6                 test esi, esi
// 004a4981  745d                 je 0x4a49e0
// 004a4983  8b2d44e48900         mov ebp, dword ptr [0x89e444]
// 004a4989  8da42400000000       lea esp, [esp]
// 004a4990  391e                 cmp dword ptr [esi], ebx
// 004a4992  753e                 jne 0x4a49d2
// 004a4994  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 004a4997  3b4f20               cmp ecx, dword ptr [edi + 0x20]
// 004a499a  7536                 jne 0x4a49d2
// 004a499c  8b562c               mov edx, dword ptr [esi + 0x2c]
// 004a499f  3b5724               cmp edx, dword ptr [edi + 0x24]
// 004a49a2  752e                 jne 0x4a49d2
// 004a49a4  8b4630               mov eax, dword ptr [esi + 0x30]
// 004a49a7  3b4728               cmp eax, dword ptr [edi + 0x28]
// 004a49aa  7526                 jne 0x4a49d2
// 004a49ac  8d4f04               lea ecx, [edi + 4]
// 004a49af  51                   push ecx
// 004a49b0  8d560c               lea edx, [esi + 0xc]
// 004a49b3  52                   push edx
// 004a49b4  ffd5                 call ebp
// 004a49b6  83c408               add esp, 8
// 004a49b9  84c0                 test al, al
// 004a49bb  7415                 je 0x4a49d2
// 004a49bd  8b4634               mov eax, dword ptr [esi + 0x34]
// 004a49c0  3b472c               cmp eax, dword ptr [edi + 0x2c]
// 004a49c3  750d                 jne 0x4a49d2
// 004a49c5  dd4730               fld qword ptr [edi + 0x30]
// 004a49c8  dc5e38               fcomp qword ptr [esi + 0x38]
// 004a49cb  dfe0                 fnstsw ax
// 004a49cd  f6c444               test ah, 0x44
// 004a49d0  7b17                 jnp 0x4a49e9
// 004a49d2  8b7648               mov esi, dword ptr [esi + 0x48]
// 004a49d5  85f6                 test esi, esi
// 004a49d7  75b7                 jne 0x4a4990
// 004a49d9  8da42400000000       lea esp, [esp]
// 004a49e0  5f                   pop edi
// 004a49e1  5e                   pop esi
// 004a49e2  5d                   pop ebp
// 004a49e3  32c0                 xor al, al
// 004a49e5  5b                   pop ebx
// 004a49e6  c20400               ret 4
// 004a49e9  5f                   pop edi
// 004a49ea  5e                   pop esi
// 004a49eb  5d                   pop ebp
// 004a49ec  b001                 mov al, 1
// 004a49ee  5b                   pop ebx
// 004a49ef  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ?containsKey@?$Table@VTextureArgs@TextureManager@G3D@@V?$ReferenceCountedPointer@VTexture@G3D@@@3@@G3D@@QBE_NABVTextureArgs@TextureManager@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
