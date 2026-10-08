// from server: 100% by auto
// roc 2011-06 0047d060  unit: CRobloxDoc  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0047d060
//
// 0047d060  a0dc3ecb00           mov al, byte ptr [0xcb3edc]
// 0047d065  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?supports_GL_ARB_texture_non_power_of_two@GLCaps@G3D@@SA_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
