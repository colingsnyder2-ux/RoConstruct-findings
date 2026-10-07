// roc 2009-06 0064c5f0  unit: std::D::DU?$char_traits::DV?$basic_streambuf::?$lexical_stream_limited_src  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0064c5f0
//
// 0064c5f0  a0f0b0a400           mov al, byte ptr [0xa4b0f0]
// 0064c5f5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?supports_GL_ARB_texture_non_power_of_two@GLCaps@G3D@@SA_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
