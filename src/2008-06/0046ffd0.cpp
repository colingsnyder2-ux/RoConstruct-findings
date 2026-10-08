// from server: 100% by auto
// roc 2008-06 0046ffd0  unit: RBX::LDraw2Lua::LuaWriter  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0046ffd0
//
// 0046ffd0  803d84ee960000       cmp byte ptr [0x96ee84], 0
// 0046ffd7  750c                 jne 0x46ffe5
// 0046ffd9  803d83ee960000       cmp byte ptr [0x96ee83], 0
// 0046ffe0  7503                 jne 0x46ffe5
// 0046ffe2  33c0                 xor eax, eax
// 0046ffe4  c3                   ret 
// 0046ffe5  b801000000           mov eax, 1
// 0046ffea  c3                   ret 
// library g3d-6.09/GLG3Dcpp\GLCaps.cpp (function ?supports_two_sided_stencil@GLCaps@G3D@@SA_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GLCaps.cpp
