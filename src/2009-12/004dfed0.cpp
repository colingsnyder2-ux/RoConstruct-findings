// roc 2009-12 004dfed0  unit: G3D::VertexAndPixelShader  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004dfed0
//
// 004dfed0  56                   push esi
// 004dfed1  6874800000           push 0x8074
// 004dfed6  8bf1                 mov esi, ecx
// 004dfed8  ff1554bb9800         call dword ptr [0x98bb54]
// 004dfede  8b4e04               mov ecx, dword ptr [esi + 4]
// 004dfee1  8b5608               mov edx, dword ptr [esi + 8]
// 004dfee4  8b4618               mov eax, dword ptr [esi + 0x18]
// 004dfee7  51                   push ecx
// 004dfee8  52                   push edx
// 004dfee9  50                   push eax
// 004dfeea  50                   push eax
// 004dfeeb  e8f0a4ffff           call 0x4da3e0
// 004dfef0  8bc8                 mov ecx, eax
// 004dfef2  8b4608               mov eax, dword ptr [esi + 8]
// 004dfef5  33d2                 xor edx, edx
// 004dfef7  f7f1                 div ecx
// 004dfef9  83c404               add esp, 4
// 004dfefc  50                   push eax
// 004dfefd  ff1550bb9800         call dword ptr [0x98bb50]
// 004dff03  5e                   pop esi
// 004dff04  c3                   ret 
// library g3d-6.09/GLG3Dcpp\VAR.cpp (function ?vertexPointer@VAR@G3D@@ABEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/VAR.cpp
