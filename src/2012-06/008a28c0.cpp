// from server: 100% by auto
// roc 2012-06 008a28c0  unit: RBX::ToolMouseCommand  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008a28c0
//
// 008a28c0  a0a037da00           mov al, byte ptr [0xda37a0]
// 008a28c5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?supports_GL_ARB_texture_non_power_of_two@GLCaps@G3D@@SA_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
