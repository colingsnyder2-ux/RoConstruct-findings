// roc 2007-03 00583f50  unit: seg_00580000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00583f50
//
// 00583f50  d9811c010000         fld dword ptr [ecx + 0x11c]
// 00583f56  c3                   ret 
// library rbxgs/v8datamodel\Decal.cpp (function ?getStudsPerTileU@Texture@RBX@@QBEMXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Decal.cpp
