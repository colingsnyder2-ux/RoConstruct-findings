// roc 2010-06 0090c450  unit: G3D::TextureManager::TextureArgs  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0090c450
//
// 0090c450  56                   push esi
// 0090c451  57                   push edi
// 0090c452  8bf1                 mov esi, ecx
// 0090c454  33ff                 xor edi, edi
// 0090c456  397e04               cmp dword ptr [esi + 4], edi
// 0090c459  7e1e                 jle 0x90c479
// 0090c45b  53                   push ebx
// 0090c45c  33db                 xor ebx, ebx
// 0090c45e  8bff                 mov edi, edi
// 0090c460  8b06                 mov eax, dword ptr [esi]
// 0090c462  8b1403               mov edx, dword ptr [ebx + eax]
// 0090c465  8d0c03               lea ecx, [ebx + eax]
// 0090c468  8b4204               mov eax, dword ptr [edx + 4]
// 0090c46b  6a00                 push 0
// 0090c46d  ffd0                 call eax
// 0090c46f  47                   inc edi
// 0090c470  83c338               add ebx, 0x38
// 0090c473  3b7e04               cmp edi, dword ptr [esi + 4]
// 0090c476  7ce8                 jl 0x90c460
// 0090c478  5b                   pop ebx
// 0090c479  8b0e                 mov ecx, dword ptr [esi]
// 0090c47b  51                   push ecx
// 0090c47c  e83f15c4ff           call 0x54d9c0
// 0090c481  83c404               add esp, 4
// 0090c484  5f                   pop edi
// 0090c485  c70600000000         mov dword ptr [esi], 0
// 0090c48b  c7460400000000       mov dword ptr [esi + 4], 0
// 0090c492  c7460800000000       mov dword ptr [esi + 8], 0
// 0090c499  5e                   pop esi
// 0090c49a  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ??1?$Array@VTextureArgs@TextureManager@G3D@@@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
