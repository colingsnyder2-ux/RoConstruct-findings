// from server: 100% by auto
// roc 2009-06 004a4a00  unit: G3D::TextureManager::TextureArgs  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004a4a00
//
// 004a4a00  56                   push esi
// 004a4a01  57                   push edi
// 004a4a02  8bf1                 mov esi, ecx
// 004a4a04  33ff                 xor edi, edi
// 004a4a06  397e04               cmp dword ptr [esi + 4], edi
// 004a4a09  7e1e                 jle 0x4a4a29
// 004a4a0b  53                   push ebx
// 004a4a0c  33db                 xor ebx, ebx
// 004a4a0e  8bff                 mov edi, edi
// 004a4a10  8b06                 mov eax, dword ptr [esi]
// 004a4a12  8b1403               mov edx, dword ptr [ebx + eax]
// 004a4a15  8d0c03               lea ecx, [ebx + eax]
// 004a4a18  8b4204               mov eax, dword ptr [edx + 4]
// 004a4a1b  6a00                 push 0
// 004a4a1d  ffd0                 call eax
// 004a4a1f  47                   inc edi
// 004a4a20  83c338               add ebx, 0x38
// 004a4a23  3b7e04               cmp edi, dword ptr [esi + 4]
// 004a4a26  7ce8                 jl 0x4a4a10
// 004a4a28  5b                   pop ebx
// 004a4a29  8b0e                 mov ecx, dword ptr [esi]
// 004a4a2b  51                   push ecx
// 004a4a2c  e85f680c00           call 0x56b290
// 004a4a31  83c404               add esp, 4
// 004a4a34  5f                   pop edi
// 004a4a35  c70600000000         mov dword ptr [esi], 0
// 004a4a3b  c7460400000000       mov dword ptr [esi + 4], 0
// 004a4a42  c7460800000000       mov dword ptr [esi + 8], 0
// 004a4a49  5e                   pop esi
// 004a4a4a  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ??1?$Array@VTextureArgs@TextureManager@G3D@@@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
