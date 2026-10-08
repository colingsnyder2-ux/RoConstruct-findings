// roc 2007-03 004c42d0  unit: seg_004c0000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004c42d0
//
// 004c42d0  d98118010000         fld dword ptr [ecx + 0x118]
// 004c42d6  c3                   ret 
// library rbxgs/v8datamodel\Decal.cpp (function ?getShiny@Decal@RBX@@QBEMXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Decal.cpp
