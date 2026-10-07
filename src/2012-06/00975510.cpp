// roc 2012-06 00975510  unit: RBX::worker_thread::Udata::?$sp_counted_impl_p  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00975510
//
// 00975510  a06981e500           mov al, byte ptr [0xe58169]
// 00975515  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?supports_GL_ARB_texture_non_power_of_two@GLCaps@G3D@@SA_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
