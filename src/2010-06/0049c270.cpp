// roc 2010-06 0049c270  unit: G3D::VertexAndPixelShader  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0049c270
//
// 0049c270  56                   push esi
// 0049c271  6874800000           push 0x8074
// 0049c276  8bf1                 mov esi, ecx
// 0049c278  ff1500ac9e00         call dword ptr [0x9eac00]
// 0049c27e  8b4e04               mov ecx, dword ptr [esi + 4]
// 0049c281  8b5608               mov edx, dword ptr [esi + 8]
// 0049c284  8b4618               mov eax, dword ptr [esi + 0x18]
// 0049c287  51                   push ecx
// 0049c288  52                   push edx
// 0049c289  50                   push eax
// 0049c28a  50                   push eax
// 0049c28b  e8402fffff           call 0x48f1d0
// 0049c290  8bc8                 mov ecx, eax
// 0049c292  8b4608               mov eax, dword ptr [esi + 8]
// 0049c295  33d2                 xor edx, edx
// 0049c297  f7f1                 div ecx
// 0049c299  83c404               add esp, 4
// 0049c29c  50                   push eax
// 0049c29d  ff15fcab9e00         call dword ptr [0x9eabfc]
// 0049c2a3  5e                   pop esi
// 0049c2a4  c3                   ret 
// library g3d-6.09/GLG3Dcpp\VAR.cpp (function ?vertexPointer@VAR@G3D@@ABEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/VAR.cpp
