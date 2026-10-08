// roc 2009-12 006c5cd0  unit: std::D::DU?$char_traits::?$basic_istringstream  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006c5cd0
//
// 006c5cd0  a07845b400           mov al, byte ptr [0xb44578]
// 006c5cd5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Framebuffer.cpp (function ?supports_GL_EXT_framebuffer_object@GLCaps@G3D@@SA_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Framebuffer.cpp
