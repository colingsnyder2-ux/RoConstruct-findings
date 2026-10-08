// from server: 100% by auto
// roc 2008-06 00563160  unit: RBX::ContentProvider  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00563160
//
// 00563160  a099689700           mov al, byte ptr [0x976899]
// 00563165  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?supports_GL_ARB_texture_non_power_of_two@GLCaps@G3D@@SA_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
