// roc 2007-03 00572090  unit: seg_00570000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00572090
//
// 00572090  8a81a8010000         mov al, byte ptr [ecx + 0x1a8]
// 00572096  c3                   ret 
// library rbxgs/v8datamodel\Filters.cpp (function ?getPartLocked@PartInstance@RBX@@QBE_NXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Filters.cpp
