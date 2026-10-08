// from server: 100% by auto
// roc 2008-06 0047d690  unit: G3D::TextureManager::TextureArgs  size: 152 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0047d690
//
// 0047d690  53                   push ebx
// 0047d691  55                   push ebp
// 0047d692  56                   push esi
// 0047d693  57                   push edi
// 0047d694  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0047d698  8b07                 mov eax, dword ptr [edi]
// 0047d69a  8b10                 mov edx, dword ptr [eax]
// 0047d69c  8bf1                 mov esi, ecx
// 0047d69e  8bcf                 mov ecx, edi
// 0047d6a0  ffd2                 call edx
// 0047d6a2  33d2                 xor edx, edx
// 0047d6a4  8bd8                 mov ebx, eax
// 0047d6a6  f7760c               div dword ptr [esi + 0xc]
// 0047d6a9  8b4608               mov eax, dword ptr [esi + 8]
// 0047d6ac  8b3490               mov esi, dword ptr [eax + edx*4]
// 0047d6af  85f6                 test esi, esi
// 0047d6b1  7456                 je 0x47d709
// 0047d6b3  8b2d44248000         mov ebp, dword ptr [0x802444]
// 0047d6b9  8da42400000000       lea esp, [esp]
// 0047d6c0  391e                 cmp dword ptr [esi], ebx
// 0047d6c2  753e                 jne 0x47d702
// 0047d6c4  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 0047d6c7  3b4f20               cmp ecx, dword ptr [edi + 0x20]
// 0047d6ca  7536                 jne 0x47d702
// 0047d6cc  8b562c               mov edx, dword ptr [esi + 0x2c]
// 0047d6cf  3b5724               cmp edx, dword ptr [edi + 0x24]
// 0047d6d2  752e                 jne 0x47d702
// 0047d6d4  8b4630               mov eax, dword ptr [esi + 0x30]
// 0047d6d7  3b4728               cmp eax, dword ptr [edi + 0x28]
// 0047d6da  7526                 jne 0x47d702
// 0047d6dc  8d4f04               lea ecx, [edi + 4]
// 0047d6df  51                   push ecx
// 0047d6e0  8d560c               lea edx, [esi + 0xc]
// 0047d6e3  52                   push edx
// 0047d6e4  ffd5                 call ebp
// 0047d6e6  83c408               add esp, 8
// 0047d6e9  84c0                 test al, al
// 0047d6eb  7415                 je 0x47d702
// 0047d6ed  8b4634               mov eax, dword ptr [esi + 0x34]
// 0047d6f0  3b472c               cmp eax, dword ptr [edi + 0x2c]
// 0047d6f3  750d                 jne 0x47d702
// 0047d6f5  dd4730               fld qword ptr [edi + 0x30]
// 0047d6f8  dc5e38               fcomp qword ptr [esi + 0x38]
// 0047d6fb  dfe0                 fnstsw ax
// 0047d6fd  f6c444               test ah, 0x44
// 0047d700  7b10                 jnp 0x47d712
// 0047d702  8b7648               mov esi, dword ptr [esi + 0x48]
// 0047d705  85f6                 test esi, esi
// 0047d707  75b7                 jne 0x47d6c0
// 0047d709  5f                   pop edi
// 0047d70a  5e                   pop esi
// 0047d70b  5d                   pop ebp
// 0047d70c  32c0                 xor al, al
// 0047d70e  5b                   pop ebx
// 0047d70f  c20800               ret 8
// 0047d712  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 0047d715  51                   push ecx
// 0047d716  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0047d71a  e881b81100           call 0x598fa0
// 0047d71f  5f                   pop edi
// 0047d720  5e                   pop esi
// 0047d721  5d                   pop ebp
// 0047d722  b001                 mov al, 1
// 0047d724  5b                   pop ebx
// 0047d725  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ?get@?$Table@VTextureArgs@TextureManager@G3D@@V?$ReferenceCountedPointer@VTexture@G3D@@@3@@G3D@@QBE_NABVTextureArgs@TextureManager@2@AAV?$ReferenceCountedPointer@VTexture@G3D@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
