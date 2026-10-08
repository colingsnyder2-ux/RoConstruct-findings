// from server: 100% by auto
// roc 2007-08 00444dd0  unit: RBX::Reflection::Metadata::VItem::?$BoundPropGetSet  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00444dd0
//
// 00444dd0  a0d4ba8b00           mov al, byte ptr [0x8bbad4]
// 00444dd5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?supports_GL_ARB_texture_non_power_of_two@GLCaps@G3D@@SA_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
