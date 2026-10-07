// roc 2010-06 0049c2b0  unit: G3D::VertexAndPixelShader  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0049c2b0
//
// 0049c2b0  56                   push esi
// 0049c2b1  6875800000           push 0x8075
// 0049c2b6  8bf1                 mov esi, ecx
// 0049c2b8  ff1500ac9e00         call dword ptr [0x9eac00]
// 0049c2be  8b4604               mov eax, dword ptr [esi + 4]
// 0049c2c1  8b4e08               mov ecx, dword ptr [esi + 8]
// 0049c2c4  8b5618               mov edx, dword ptr [esi + 0x18]
// 0049c2c7  50                   push eax
// 0049c2c8  51                   push ecx
// 0049c2c9  52                   push edx
// 0049c2ca  ff1504ac9e00         call dword ptr [0x9eac04]
// 0049c2d0  5e                   pop esi
// 0049c2d1  c3                   ret 
// library g3d-6.09/GLG3Dcpp\VAR.cpp (function ?normalPointer@VAR@G3D@@ABEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/VAR.cpp
