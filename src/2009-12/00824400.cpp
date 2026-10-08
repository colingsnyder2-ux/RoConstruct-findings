// roc 2009-12 00824400  unit: CXTPReportControl  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00824400
//
// 00824400  8b8114010000         mov eax, dword ptr [ecx + 0x114]
// 00824406  c3                   ret 
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ?glProgramObject@VertexAndPixelShader@G3D@@QBEKXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
