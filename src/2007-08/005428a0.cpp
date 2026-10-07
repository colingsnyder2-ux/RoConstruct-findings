// roc 2007-08 005428a0  unit: RBX::VInstance::?$SignalDesc  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005428a0
//
// 005428a0  a09c278c00           mov al, byte ptr [0x8c279c]
// 005428a5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?supports_GL_ARB_texture_non_power_of_two@GLCaps@G3D@@SA_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
