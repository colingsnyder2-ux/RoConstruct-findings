// roc 2010-06 00631aa0  unit: std::D::DU?$char_traits::?$basic_ifstream  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00631aa0
//
// 00631aa0  a0a884ba00           mov al, byte ptr [0xba84a8]
// 00631aa5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?supports_GL_ARB_texture_non_power_of_two@GLCaps@G3D@@SA_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
