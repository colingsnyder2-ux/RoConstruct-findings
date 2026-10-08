// roc 2007-03 005a2d90  unit: seg_005a0000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005a2d90
//
// 005a2d90  d98120010000         fld dword ptr [ecx + 0x120]
// 005a2d96  c3                   ret 
// library rbxgs/v8datamodel\Decal.cpp (function ?getStudsPerTileV@Texture@RBX@@QBEMXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Decal.cpp
