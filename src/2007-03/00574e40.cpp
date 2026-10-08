// roc 2007-03 00574e40  unit: seg_00570000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00574e40
//
// 00574e40  8d8174fdffff         lea eax, [ecx - 0x28c]
// 00574e46  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ?getPrimaryPart@PartInstance@RBX@@UAEPAV12@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
