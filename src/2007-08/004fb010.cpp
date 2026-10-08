// roc 2007-08 004fb010  unit: RBX::Render::TextureProxy  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004fb010
//
// 004fb010  83791000             cmp dword ptr [ecx + 0x10], 0
// 004fb014  7e19                 jle 0x4fb02f
// 004fb016  8b410c               mov eax, dword ptr [ecx + 0xc]
// 004fb019  d90550707800         fld dword ptr [0x787050]
// 004fb01f  d85824               fcomp dword ptr [eax + 0x24]
// 004fb022  dfe0                 fnstsw ax
// 004fb024  f6c405               test ah, 5
// 004fb027  7a06                 jp 0x4fb02f
// 004fb029  b801000000           mov eax, 1
// 004fb02e  c3                   ret 
// 004fb02f  33c0                 xor eax, eax
// 004fb031  c3                   ret 
// library rbxgs-render/Material.cpp (function ?veryTransparent@Material@Render@RBX@@QBE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render Material.cpp
