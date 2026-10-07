// roc 2007-08 004860c0  unit: G3D::VertexAndPixelShader  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004860c0
//
// 004860c0  8b4118               mov eax, dword ptr [ecx + 0x18]
// 004860c3  50                   push eax
// 004860c4  ff154ceb7700         call dword ptr [0x77eb4c]
// 004860ca  c3                   ret 
// library g3d-6.09/GLG3Dcpp\GPUProgram.cpp (function ?disable@GPUProgram@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GPUProgram.cpp
