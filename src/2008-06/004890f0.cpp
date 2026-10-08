// from server: 100% by auto
// roc 2008-06 004890f0  unit: G3D::VertexAndPixelShader  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004890f0
//
// 004890f0  8b4118               mov eax, dword ptr [ecx + 0x18]
// 004890f3  50                   push eax
// 004890f4  ff1558298000         call dword ptr [0x802958]
// 004890fa  c3                   ret 
// library g3d-6.09/GLG3Dcpp\GPUProgram.cpp (function ?disable@GPUProgram@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GPUProgram.cpp
