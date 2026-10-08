// roc 2009-12 0045ba30  unit: CRobloxDoc  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0045ba30
//
// 0045ba30  a011b8b700           mov al, byte ptr [0xb7b811]
// 0045ba35  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Framebuffer.cpp (function ?supports_GL_EXT_framebuffer_object@GLCaps@G3D@@SA_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Framebuffer.cpp
