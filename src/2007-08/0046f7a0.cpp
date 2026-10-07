// roc 2007-08 0046f7a0  unit: std::D::DU?$char_traits::V?$basic_string::?$Set  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0046f7a0
//
// 0046f7a0  ff152ceb7700         call dword ptr [0x77eb2c]
// 0046f7a6  ff258ceb7700         jmp dword ptr [0x77eb8c]
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?glStatePop@G3D@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
