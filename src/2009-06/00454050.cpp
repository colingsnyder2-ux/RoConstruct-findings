// from server: 100% by auto
// roc 2009-06 00454050  unit: CRobloxDoc  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00454050
//
// 00454050  a0b9b3a300           mov al, byte ptr [0xa3b3b9]
// 00454055  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?supports_GL_ARB_texture_non_power_of_two@GLCaps@G3D@@SA_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
