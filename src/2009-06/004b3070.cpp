// roc 2009-06 004b3070  unit: G3D::VertexAndPixelShader  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004b3070
//
// 004b3070  8b4118               mov eax, dword ptr [ecx + 0x18]
// 004b3073  50                   push eax
// 004b3074  ff15b8eb8900         call dword ptr [0x89ebb8]
// 004b307a  c3                   ret 
// library g3d-6.09/GLG3Dcpp\GPUProgram.cpp (function ?disable@GPUProgram@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GPUProgram.cpp
