// from server: 100% by auto
// roc 2011-06 007fb560  unit: RBX::worker_thread::Udata::?$sp_counted_impl_p  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007fb560
//
// 007fb560  a03862d100           mov al, byte ptr [0xd16238]
// 007fb565  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?supports_GL_ARB_texture_non_power_of_two@GLCaps@G3D@@SA_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
