// roc 2009-12 004d15c0  unit: G3D::TextureManager::TextureArgs  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004d15c0
//
// 004d15c0  56                   push esi
// 004d15c1  57                   push edi
// 004d15c2  8bf1                 mov esi, ecx
// 004d15c4  33ff                 xor edi, edi
// 004d15c6  397e04               cmp dword ptr [esi + 4], edi
// 004d15c9  7e1e                 jle 0x4d15e9
// 004d15cb  53                   push ebx
// 004d15cc  33db                 xor ebx, ebx
// 004d15ce  8bff                 mov edi, edi
// 004d15d0  8b06                 mov eax, dword ptr [esi]
// 004d15d2  8b1403               mov edx, dword ptr [ebx + eax]
// 004d15d5  8d0c03               lea ecx, [ebx + eax]
// 004d15d8  8b4204               mov eax, dword ptr [edx + 4]
// 004d15db  6a00                 push 0
// 004d15dd  ffd0                 call eax
// 004d15df  47                   inc edi
// 004d15e0  83c338               add ebx, 0x38
// 004d15e3  3b7e04               cmp edi, dword ptr [esi + 4]
// 004d15e6  7ce8                 jl 0x4d15d0
// 004d15e8  5b                   pop ebx
// 004d15e9  8b0e                 mov ecx, dword ptr [esi]
// 004d15eb  51                   push ecx
// 004d15ec  e8ef8d1100           call 0x5ea3e0
// 004d15f1  83c404               add esp, 4
// 004d15f4  5f                   pop edi
// 004d15f5  c70600000000         mov dword ptr [esi], 0
// 004d15fb  c7460400000000       mov dword ptr [esi + 4], 0
// 004d1602  c7460800000000       mov dword ptr [esi + 8], 0
// 004d1609  5e                   pop esi
// 004d160a  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ??1?$Array@VTextureArgs@TextureManager@G3D@@@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
