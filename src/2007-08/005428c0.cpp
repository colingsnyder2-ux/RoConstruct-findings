// from server: 100% by auto
// roc 2007-08 005428c0  unit: RBX::VInstance::?$SignalDesc  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005428c0
//
// 005428c0  a0090e8c00           mov al, byte ptr [0x8c0e09]
// 005428c5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?supports_GL_ARB_texture_non_power_of_two@GLCaps@G3D@@SA_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
