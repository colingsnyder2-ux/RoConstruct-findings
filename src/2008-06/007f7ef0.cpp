// roc 2008-06 007f7ef0  unit: seg_007f0000  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f7ef0
//
// 007f7ef0  68ac398400           push 0x8439ac
// 007f7ef5  68f8658400           push 0x8465f8
// 007f7efa  b960c09700           mov ecx, 0x97c060
// 007f7eff  e8ec49e3ff           call 0x62c8f0
// 007f7f04  6870048000           push 0x800470
// 007f7f09  e8a198eaff           call 0x6a17af
// 007f7f0e  59                   pop ecx
// 007f7f0f  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??__Eevent_FlagCaptured@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
