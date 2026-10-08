// roc 2007-03 004c4260  unit: seg_004c0000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004c4260
//
// 004c4260  d981a4010000         fld dword ptr [ecx + 0x1a4]
// 004c4266  c3                   ret 
// library rbxgs/v8datamodel\PartInstance.cpp (function ?getReflectance@PartInstance@RBX@@QBEMXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PartInstance.cpp
