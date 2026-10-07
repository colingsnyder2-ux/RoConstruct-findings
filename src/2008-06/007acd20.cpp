// roc 2008-06 007acd20  unit: RBX::RenderBase::MaterialBase::Level  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007acd20
//
// 007acd20  56                   push esi
// 007acd21  57                   push edi
// 007acd22  8bf1                 mov esi, ecx
// 007acd24  33ff                 xor edi, edi
// 007acd26  397e04               cmp dword ptr [esi + 4], edi
// 007acd29  7e1e                 jle 0x7acd49
// 007acd2b  53                   push ebx
// 007acd2c  33db                 xor ebx, ebx
// 007acd2e  8bff                 mov edi, edi
// 007acd30  8b06                 mov eax, dword ptr [esi]
// 007acd32  8b1403               mov edx, dword ptr [ebx + eax]
// 007acd35  8d0c03               lea ecx, [ebx + eax]
// 007acd38  8b4204               mov eax, dword ptr [edx + 4]
// 007acd3b  6a00                 push 0
// 007acd3d  ffd0                 call eax
// 007acd3f  47                   inc edi
// 007acd40  83c338               add ebx, 0x38
// 007acd43  3b7e04               cmp edi, dword ptr [esi + 4]
// 007acd46  7ce8                 jl 0x7acd30
// 007acd48  5b                   pop ebx
// 007acd49  8b0e                 mov ecx, dword ptr [esi]
// 007acd4b  51                   push ecx
// 007acd4c  e8cfafd5ff           call 0x507d20
// 007acd51  83c404               add esp, 4
// 007acd54  5f                   pop edi
// 007acd55  c70600000000         mov dword ptr [esi], 0
// 007acd5b  c7460400000000       mov dword ptr [esi + 4], 0
// 007acd62  c7460800000000       mov dword ptr [esi + 8], 0
// 007acd69  5e                   pop esi
// 007acd6a  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ??1?$Array@VTextureArgs@TextureManager@G3D@@@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
