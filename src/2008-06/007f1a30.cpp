// roc 2008-06 007f1a30  unit: seg_007f0000  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f1a30
//
// 007f1a30  68ac2b8200           push 0x822bac
// 007f1a35  68342c8200           push 0x822c34
// 007f1a3a  b920059700           mov ecx, 0x970520
// 007f1a3f  e86c9fcaff           call 0x49b9b0
// 007f1a44  6810b97f00           push 0x7fb910
// 007f1a49  e861fdeaff           call 0x6a17af
// 007f1a4e  59                   pop ecx
// 007f1a4f  c3                   ret 
// library rbxgs-net/Players.cpp (function ??__Eevent_PlayerRemoving@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Players.cpp
