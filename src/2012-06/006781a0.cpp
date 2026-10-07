// roc 2012-06 006781a0  unit: RBX::XVGfxBinding::XV?$mf2::V?$bind_t::?$callable_slot  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006781a0
//
// 006781a0  a0b081e500           mov al, byte ptr [0xe581b0]
// 006781a5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?supports_GL_ARB_texture_non_power_of_two@GLCaps@G3D@@SA_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
