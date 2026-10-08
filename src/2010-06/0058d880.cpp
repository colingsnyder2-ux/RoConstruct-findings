// from server: 100% by auto
// roc 2010-06 0058d880  unit: seg_00580000  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0058d880
//
// 0058d880  a04438c200           mov al, byte ptr [0xc23844]
// 0058d885  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?supports_GL_ARB_texture_non_power_of_two@GLCaps@G3D@@SA_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
