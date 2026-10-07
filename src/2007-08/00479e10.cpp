// roc 2007-08 00479e10  unit: G3D::TextureManager::TextureArgs  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00479e10
//
// 00479e10  56                   push esi
// 00479e11  57                   push edi
// 00479e12  8bf1                 mov esi, ecx
// 00479e14  33ff                 xor edi, edi
// 00479e16  397e04               cmp dword ptr [esi + 4], edi
// 00479e19  7e20                 jle 0x479e3b
// 00479e1b  53                   push ebx
// 00479e1c  33db                 xor ebx, ebx
// 00479e1e  8bff                 mov edi, edi
// 00479e20  8b06                 mov eax, dword ptr [esi]
// 00479e22  8b1403               mov edx, dword ptr [ebx + eax]
// 00479e25  8d0c03               lea ecx, [ebx + eax]
// 00479e28  8b4204               mov eax, dword ptr [edx + 4]
// 00479e2b  6a00                 push 0
// 00479e2d  ffd0                 call eax
// 00479e2f  83c701               add edi, 1
// 00479e32  83c338               add ebx, 0x38
// 00479e35  3b7e04               cmp edi, dword ptr [esi + 4]
// 00479e38  7ce6                 jl 0x479e20
// 00479e3a  5b                   pop ebx
// 00479e3b  8b0e                 mov ecx, dword ptr [esi]
// 00479e3d  51                   push ecx
// 00479e3e  e8cd590800           call 0x4ff810
// 00479e43  83c404               add esp, 4
// 00479e46  5f                   pop edi
// 00479e47  c70600000000         mov dword ptr [esi], 0
// 00479e4d  c7460400000000       mov dword ptr [esi + 4], 0
// 00479e54  c7460800000000       mov dword ptr [esi + 8], 0
// 00479e5b  5e                   pop esi
// 00479e5c  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ??1?$Array@VTextureArgs@TextureManager@G3D@@@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
