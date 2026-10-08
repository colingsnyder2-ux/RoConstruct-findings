// from server: 100% by auto
// roc 2007-08 0046cb90  unit: RBX::LDraw2Lua::LuaWriter  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0046cb90
//
// 0046cb90  803d68cf8b0000       cmp byte ptr [0x8bcf68], 0
// 0046cb97  750c                 jne 0x46cba5
// 0046cb99  803d67cf8b0000       cmp byte ptr [0x8bcf67], 0
// 0046cba0  7503                 jne 0x46cba5
// 0046cba2  33c0                 xor eax, eax
// 0046cba4  c3                   ret 
// 0046cba5  b801000000           mov eax, 1
// 0046cbaa  c3                   ret 
// library g3d-6.09/GLG3Dcpp\GLCaps.cpp (function ?supports_two_sided_stencil@GLCaps@G3D@@SA_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GLCaps.cpp
