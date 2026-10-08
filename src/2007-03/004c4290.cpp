// roc 2007-03 004c4290  unit: seg_004c0000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004c4290
//
// 004c4290  8d81f4000000         lea eax, [ecx + 0xf4]
// 004c4296  c3                   ret 
// library rbxgs/v8datamodel\custommesh.cpp (function ?getScale@SpecialShape@RBX@@QBEABVVector3@G3D@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/custommesh.cpp
