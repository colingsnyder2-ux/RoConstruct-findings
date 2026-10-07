// roc 2010-06 004d0860  unit: RBX::Network::Players  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004d0860
//
// 004d0860  a01851c000           mov al, byte ptr [0xc05118]
// 004d0865  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?supports_GL_ARB_texture_non_power_of_two@GLCaps@G3D@@SA_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
