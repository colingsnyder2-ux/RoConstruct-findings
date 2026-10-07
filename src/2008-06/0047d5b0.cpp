// roc 2008-06 0047d5b0  unit: G3D::TextureManager::TextureArgs  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0047d5b0
//
// 0047d5b0  53                   push ebx
// 0047d5b1  55                   push ebp
// 0047d5b2  56                   push esi
// 0047d5b3  57                   push edi
// 0047d5b4  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0047d5b8  8b07                 mov eax, dword ptr [edi]
// 0047d5ba  8b10                 mov edx, dword ptr [eax]
// 0047d5bc  8bf1                 mov esi, ecx
// 0047d5be  8bcf                 mov ecx, edi
// 0047d5c0  ffd2                 call edx
// 0047d5c2  33d2                 xor edx, edx
// 0047d5c4  8bd8                 mov ebx, eax
// 0047d5c6  f7760c               div dword ptr [esi + 0xc]
// 0047d5c9  8b4608               mov eax, dword ptr [esi + 8]
// 0047d5cc  8b3490               mov esi, dword ptr [eax + edx*4]
// 0047d5cf  85f6                 test esi, esi
// 0047d5d1  7456                 je 0x47d629
// 0047d5d3  8b2d44248000         mov ebp, dword ptr [0x802444]
// 0047d5d9  8da42400000000       lea esp, [esp]
// 0047d5e0  391e                 cmp dword ptr [esi], ebx
// 0047d5e2  753e                 jne 0x47d622
// 0047d5e4  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 0047d5e7  3b4f20               cmp ecx, dword ptr [edi + 0x20]
// 0047d5ea  7536                 jne 0x47d622
// 0047d5ec  8b562c               mov edx, dword ptr [esi + 0x2c]
// 0047d5ef  3b5724               cmp edx, dword ptr [edi + 0x24]
// 0047d5f2  752e                 jne 0x47d622
// 0047d5f4  8b4630               mov eax, dword ptr [esi + 0x30]
// 0047d5f7  3b4728               cmp eax, dword ptr [edi + 0x28]
// 0047d5fa  7526                 jne 0x47d622
// 0047d5fc  8d4f04               lea ecx, [edi + 4]
// 0047d5ff  51                   push ecx
// 0047d600  8d560c               lea edx, [esi + 0xc]
// 0047d603  52                   push edx
// 0047d604  ffd5                 call ebp
// 0047d606  83c408               add esp, 8
// 0047d609  84c0                 test al, al
// 0047d60b  7415                 je 0x47d622
// 0047d60d  8b4634               mov eax, dword ptr [esi + 0x34]
// 0047d610  3b472c               cmp eax, dword ptr [edi + 0x2c]
// 0047d613  750d                 jne 0x47d622
// 0047d615  dd4730               fld qword ptr [edi + 0x30]
// 0047d618  dc5e38               fcomp qword ptr [esi + 0x38]
// 0047d61b  dfe0                 fnstsw ax
// 0047d61d  f6c444               test ah, 0x44
// 0047d620  7b07                 jnp 0x47d629
// 0047d622  8b7648               mov esi, dword ptr [esi + 0x48]
// 0047d625  85f6                 test esi, esi
// 0047d627  75b7                 jne 0x47d5e0
// 0047d629  5f                   pop edi
// 0047d62a  8d4640               lea eax, [esi + 0x40]
// 0047d62d  5e                   pop esi
// 0047d62e  5d                   pop ebp
// 0047d62f  5b                   pop ebx
// 0047d630  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ?get@?$Table@VTextureArgs@TextureManager@G3D@@V?$ReferenceCountedPointer@VTexture@G3D@@@3@@G3D@@QBEAAV?$ReferenceCountedPointer@VTexture@G3D@@@2@ABVTextureArgs@TextureManager@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
