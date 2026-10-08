// from server: 100% by auto
// roc 2010-06 0049c170  unit: G3D::VertexAndPixelShader  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0049c170
//
// 0049c170  8b4118               mov eax, dword ptr [ecx + 0x18]
// 0049c173  50                   push eax
// 0049c174  ff15e0aa9e00         call dword ptr [0x9eaae0]
// 0049c17a  c3                   ret 
// library g3d-6.09/GLG3Dcpp\GPUProgram.cpp (function ?disable@GPUProgram@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GPUProgram.cpp
