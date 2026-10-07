// roc 2010-06 004856a0  unit: G3D::Texture  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004856a0
//
// 004856a0  56                   push esi
// 004856a1  57                   push edi
// 004856a2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004856a6  8b4704               mov eax, dword ptr [edi + 4]
// 004856a9  8bf1                 mov esi, ecx
// 004856ab  c7460400000000       mov dword ptr [esi + 4], 0
// 004856b2  c7460800000000       mov dword ptr [esi + 8], 0
// 004856b9  c70600000000         mov dword ptr [esi], 0
// 004856bf  85c0                 test eax, eax
// 004856c1  7e0a                 jle 0x4856cd
// 004856c3  6a01                 push 1
// 004856c5  50                   push eax
// 004856c6  e8a5f7ffff           call 0x484e70
// 004856cb  eb06                 jmp 0x4856d3
// 004856cd  c70600000000         mov dword ptr [esi], 0
// 004856d3  33c0                 xor eax, eax
// 004856d5  394604               cmp dword ptr [esi + 4], eax
// 004856d8  7e16                 jle 0x4856f0
// 004856da  8d9b00000000         lea ebx, [ebx]
// 004856e0  8b0f                 mov ecx, dword ptr [edi]
// 004856e2  8b0c81               mov ecx, dword ptr [ecx + eax*4]
// 004856e5  8b16                 mov edx, dword ptr [esi]
// 004856e7  890c82               mov dword ptr [edx + eax*4], ecx
// 004856ea  40                   inc eax
// 004856eb  3b4604               cmp eax, dword ptr [esi + 4]
// 004856ee  7cf0                 jl 0x4856e0
// 004856f0  5f                   pop edi
// 004856f1  5e                   pop esi
// 004856f2  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?_copy@?$Array@PBX@G3D@@AAEXABV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
