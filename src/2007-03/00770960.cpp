// roc 2007-03 00770960  unit: seg_00770000  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00770960
//
// 00770960  33c9                 xor ecx, ecx
// 00770962  51                   push ecx
// 00770963  6874cf7900           push 0x79cf74
// 00770968  51                   push ecx
// 00770969  b890954a00           mov eax, 0x4a9590
// 0077096e  50                   push eax
// 0077096f  b968908b00           mov ecx, 0x8b9068
// 00770974  e8374ed3ff           call 0x4a57b0
// 00770979  68b0897700           push 0x7789b0
// 0077097e  e830e8eaff           call 0x61f1b3
// 00770983  59                   pop ecx
// 00770984  c3                   ret 
// library rbxgs-net/Replicator.cpp (function ??__Efunc_SendMarker@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Replicator.cpp
