// roc 2008-06 007f1a10  unit: seg_007f0000  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f1a10
//
// 007f1a10  68ac2b8200           push 0x822bac
// 007f1a15  68282c8200           push 0x822c28
// 007f1a1a  b9a0049700           mov ecx, 0x9704a0
// 007f1a1f  e88c9fcaff           call 0x49b9b0
// 007f1a24  68e0b97f00           push 0x7fb9e0
// 007f1a29  e881fdeaff           call 0x6a17af
// 007f1a2e  59                   pop ecx
// 007f1a2f  c3                   ret 
// library rbxgs-net/Players.cpp (function ??__Eevent_PlayerAdded@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Players.cpp
