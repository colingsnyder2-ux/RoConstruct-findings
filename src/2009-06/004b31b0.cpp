// from server: 100% by auto
// roc 2009-06 004b31b0  unit: G3D::VertexAndPixelShader  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004b31b0
//
// 004b31b0  56                   push esi
// 004b31b1  6875800000           push 0x8075
// 004b31b6  8bf1                 mov esi, ecx
// 004b31b8  ff1574ea8900         call dword ptr [0x89ea74]
// 004b31be  8b4604               mov eax, dword ptr [esi + 4]
// 004b31c1  8b4e08               mov ecx, dword ptr [esi + 8]
// 004b31c4  8b5618               mov edx, dword ptr [esi + 0x18]
// 004b31c7  50                   push eax
// 004b31c8  51                   push ecx
// 004b31c9  52                   push edx
// 004b31ca  ff1570ea8900         call dword ptr [0x89ea70]
// 004b31d0  5e                   pop esi
// 004b31d1  c3                   ret 
// library g3d-6.09/GLG3Dcpp\VAR.cpp (function ?normalPointer@VAR@G3D@@ABEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/VAR.cpp
