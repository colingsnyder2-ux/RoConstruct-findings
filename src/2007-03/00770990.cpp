// roc 2007-03 00770990  unit: seg_00770000  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00770990
//
// 00770990  33c9                 xor ecx, ecx
// 00770992  51                   push ecx
// 00770993  6880cf7900           push 0x79cf80
// 00770998  51                   push ecx
// 00770999  b840bb4900           mov eax, 0x49bb40
// 0077099e  50                   push eax
// 0077099f  b9c0908b00           mov ecx, 0x8b90c0
// 007709a4  e83750d3ff           call 0x4a59e0
// 007709a9  6890897700           push 0x778990
// 007709ae  e800e8eaff           call 0x61f1b3
// 007709b3  59                   pop ecx
// 007709b4  c3                   ret 
// library rbxgs-net/Replicator.cpp (function ??__Efunc_requestCharacter@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Replicator.cpp
