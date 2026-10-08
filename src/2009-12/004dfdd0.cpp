// roc 2009-12 004dfdd0  unit: G3D::VertexAndPixelShader  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004dfdd0
//
// 004dfdd0  8b4118               mov eax, dword ptr [ecx + 0x18]
// 004dfdd3  50                   push eax
// 004dfdd4  ff15dcbb9800         call dword ptr [0x98bbdc]
// 004dfdda  c3                   ret 
// library g3d-6.09/GLG3Dcpp\GPUProgram.cpp (function ?disable@GPUProgram@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GPUProgram.cpp
