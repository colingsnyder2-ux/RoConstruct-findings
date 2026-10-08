// from server: 100% by auto
// roc 2008-06 004d71b0  unit: RBX::ViewNew::ViewRbxGfx  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d71b0
//
// 004d71b0  a05c069400           mov al, byte ptr [0x94065c]
// 004d71b5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?supports_GL_ARB_texture_non_power_of_two@GLCaps@G3D@@SA_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
