// from server: 100% by auto
// roc 2012-06 008a2870  unit: RBX::ToolMouseCommand  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008a2870
//
// 008a2870  a0695ce300           mov al, byte ptr [0xe35c69]
// 008a2875  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?supports_GL_ARB_texture_non_power_of_two@GLCaps@G3D@@SA_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
