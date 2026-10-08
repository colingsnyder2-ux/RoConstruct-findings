// roc 2007-03 007709c0  unit: seg_00770000  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007709c0
//
// 007709c0  33c9                 xor ecx, ecx
// 007709c2  51                   push ecx
// 007709c3  6894cf7900           push 0x79cf94
// 007709c8  51                   push ecx
// 007709c9  b840bd4900           mov eax, 0x49bd40
// 007709ce  50                   push eax
// 007709cf  b9f0908b00           mov ecx, 0x8b90f0
// 007709d4  e80750d3ff           call 0x4a59e0
// 007709d9  6880897700           push 0x778980
// 007709de  e8d0e7eaff           call 0x61f1b3
// 007709e3  59                   pop ecx
// 007709e4  c3                   ret 
// library rbxgs-net/Replicator.cpp (function ??__Efunc_closeConnection@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Replicator.cpp
