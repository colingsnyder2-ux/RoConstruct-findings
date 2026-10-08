// roc 2007-08 0076e9b0  unit: seg_00760000  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076e9b0
//
// 0076e9b0  33c9                 xor ecx, ecx
// 0076e9b2  51                   push ecx
// 0076e9b3  6854b67900           push 0x79b654
// 0076e9b8  51                   push ecx
// 0076e9b9  b850f44800           mov eax, 0x48f450
// 0076e9be  50                   push eax
// 0076e9bf  b948de8b00           mov ecx, 0x8bde48
// 0076e9c4  e8d700d2ff           call 0x48eaa0
// 0076e9c9  6810817700           push 0x778110
// 0076e9ce  e85023ecff           call 0x630d23
// 0076e9d3  59                   pop ecx
// 0076e9d4  c3                   ret 
// library rbxgs-net/Player.cpp (function ??__EremoveCharacterFunction@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Player.cpp
