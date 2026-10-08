// roc 2007-03 0076fc40  unit: seg_00760000  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0076fc40
//
// 0076fc40  33c9                 xor ecx, ecx
// 0076fc42  51                   push ecx
// 0076fc43  680ca77900           push 0x79a70c
// 0076fc48  51                   push ecx
// 0076fc49  b840a94800           mov eax, 0x48a940
// 0076fc4e  50                   push eax
// 0076fc4f  b9d8848b00           mov ecx, 0x8b84d8
// 0076fc54  e837a0d1ff           call 0x489c90
// 0076fc59  6840857700           push 0x778540
// 0076fc5e  e850f5eaff           call 0x61f1b3
// 0076fc63  59                   pop ecx
// 0076fc64  c3                   ret 
// library rbxgs-net/Player.cpp (function ??__EloadCharacterFunction@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Player.cpp
