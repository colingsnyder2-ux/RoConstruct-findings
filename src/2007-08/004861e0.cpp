// roc 2007-08 004861e0  unit: G3D::VertexAndPixelShader  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004861e0
//
// 004861e0  56                   push esi
// 004861e1  6874800000           push 0x8074
// 004861e6  8bf1                 mov esi, ecx
// 004861e8  ff154cea7700         call dword ptr [0x77ea4c]
// 004861ee  8b4e04               mov ecx, dword ptr [esi + 4]
// 004861f1  8b5608               mov edx, dword ptr [esi + 8]
// 004861f4  8b4618               mov eax, dword ptr [esi + 0x18]
// 004861f7  51                   push ecx
// 004861f8  52                   push edx
// 004861f9  50                   push eax
// 004861fa  50                   push eax
// 004861fb  e8c0a1ffff           call 0x4803c0
// 00486200  8bc8                 mov ecx, eax
// 00486202  8b4608               mov eax, dword ptr [esi + 8]
// 00486205  33d2                 xor edx, edx
// 00486207  f7f1                 div ecx
// 00486209  83c404               add esp, 4
// 0048620c  50                   push eax
// 0048620d  ff1550ea7700         call dword ptr [0x77ea50]
// 00486213  5e                   pop esi
// 00486214  c3                   ret 
// library g3d-6.09/GLG3Dcpp\VAR.cpp (function ?vertexPointer@VAR@G3D@@ABEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/VAR.cpp
