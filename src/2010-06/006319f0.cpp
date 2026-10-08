// from server: 100% by auto
// roc 2010-06 006319f0  unit: std::D::DU?$char_traits::?$basic_ifstream  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006319f0
//
// 006319f0  a0ecafc100           mov al, byte ptr [0xc1afec]
// 006319f5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?supports_GL_ARB_texture_non_power_of_two@GLCaps@G3D@@SA_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
