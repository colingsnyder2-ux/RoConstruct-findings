// from server: 100% by auto
// roc 2008-06 004891f0  unit: G3D::VertexAndPixelShader  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004891f0
//
// 004891f0  56                   push esi
// 004891f1  6874800000           push 0x8074
// 004891f6  8bf1                 mov esi, ecx
// 004891f8  ff15182a8000         call dword ptr [0x802a18]
// 004891fe  8b4e04               mov ecx, dword ptr [esi + 4]
// 00489201  8b5608               mov edx, dword ptr [esi + 8]
// 00489204  8b4618               mov eax, dword ptr [esi + 0x18]
// 00489207  51                   push ecx
// 00489208  52                   push edx
// 00489209  50                   push eax
// 0048920a  50                   push eax
// 0048920b  e800a5ffff           call 0x483710
// 00489210  8bc8                 mov ecx, eax
// 00489212  8b4608               mov eax, dword ptr [esi + 8]
// 00489215  33d2                 xor edx, edx
// 00489217  f7f1                 div ecx
// 00489219  83c404               add esp, 4
// 0048921c  50                   push eax
// 0048921d  ff151c2a8000         call dword ptr [0x802a1c]
// 00489223  5e                   pop esi
// 00489224  c3                   ret 
// library g3d-6.09/GLG3Dcpp\VAR.cpp (function ?vertexPointer@VAR@G3D@@ABEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/VAR.cpp
