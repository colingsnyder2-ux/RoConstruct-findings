// roc 2007-03 00602820  unit: seg_00600000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00602820
//
// 00602820  d98114010000         fld dword ptr [ecx + 0x114]
// 00602826  c3                   ret 
// library rbxgs/v8datamodel\Decal.cpp (function ?getSpecular@Decal@RBX@@QBEMXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Decal.cpp
