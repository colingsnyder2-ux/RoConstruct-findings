// roc 2007-03 00572170  unit: seg_00570000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00572170
//
// 00572170  8d81ac010000         lea eax, [ecx + 0x1ac]
// 00572176  c3                   ret 
// library rbxgs/v8datamodel\PartInstance.cpp (function ?getSurfaces@PartInstance@RBX@@QAEAAVSurfaces@2@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PartInstance.cpp
