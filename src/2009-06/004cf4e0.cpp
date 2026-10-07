// roc 2009-06 004cf4e0  unit: XVCrashReporter::XV?$mf1::V?$bind_t::?$thread_data  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004cf4e0
//
// 004cf4e0  a020e0a300           mov al, byte ptr [0xa3e020]
// 004cf4e5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?supports_GL_ARB_texture_non_power_of_two@GLCaps@G3D@@SA_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
