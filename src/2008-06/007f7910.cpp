// roc 2008-06 007f7910  unit: seg_007f0000  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f7910
//
// 007f7910  6810b78300           push 0x83b710
// 007f7915  68681e8400           push 0x841e68
// 007f791a  b958b79700           mov ecx, 0x97b758
// 007f791f  e8bc79e0ff           call 0x5ff2e0
// 007f7924  6810018000           push 0x800110
// 007f7929  e8819eeaff           call 0x6a17af
// 007f792e  59                   pop ecx
// 007f792f  c3                   ret 
// library rbxgs/v8datamodel\Tool.cpp (function ??__Eevent_Equipped@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Tool.cpp
