// roc 2009-06 004b3170  unit: G3D::VertexAndPixelShader  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004b3170
//
// 004b3170  56                   push esi
// 004b3171  6874800000           push 0x8074
// 004b3176  8bf1                 mov esi, ecx
// 004b3178  ff1574ea8900         call dword ptr [0x89ea74]
// 004b317e  8b4e04               mov ecx, dword ptr [esi + 4]
// 004b3181  8b5608               mov edx, dword ptr [esi + 8]
// 004b3184  8b4618               mov eax, dword ptr [esi + 0x18]
// 004b3187  51                   push ecx
// 004b3188  52                   push edx
// 004b3189  50                   push eax
// 004b318a  50                   push eax
// 004b318b  e870a6ffff           call 0x4ad800
// 004b3190  8bc8                 mov ecx, eax
// 004b3192  8b4608               mov eax, dword ptr [esi + 8]
// 004b3195  33d2                 xor edx, edx
// 004b3197  f7f1                 div ecx
// 004b3199  83c404               add esp, 4
// 004b319c  50                   push eax
// 004b319d  ff1578ea8900         call dword ptr [0x89ea78]
// 004b31a3  5e                   pop esi
// 004b31a4  c3                   ret 
// library g3d-6.09/GLG3Dcpp\VAR.cpp (function ?vertexPointer@VAR@G3D@@ABEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/VAR.cpp
