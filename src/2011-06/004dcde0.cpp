// roc 2011-06 004dcde0  unit: RBX::Network::Replicator  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004dcde0
//
// 004dcde0  a02c6ecb00           mov al, byte ptr [0xcb6e2c]
// 004dcde5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?supports_GL_ARB_texture_non_power_of_two@GLCaps@G3D@@SA_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
