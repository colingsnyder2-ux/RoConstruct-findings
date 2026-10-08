// roc 2007-08 0076f070  unit: seg_00760000  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076f070
//
// 0076f070  33c9                 xor ecx, ecx
// 0076f072  51                   push ecx
// 0076f073  68dcb67900           push 0x79b6dc
// 0076f078  68c0bd7900           push 0x79bdc0
// 0076f07d  51                   push ecx
// 0076f07e  b8b0804900           mov eax, 0x4980b0
// 0076f083  50                   push eax
// 0076f084  b918e28b00           mov ecx, 0x8be218
// 0076f089  e8c26ed2ff           call 0x495f50
// 0076f08e  6890857700           push 0x778590
// 0076f093  e88b1cecff           call 0x630d23
// 0076f098  59                   pop ecx
// 0076f099  c3                   ret 
// library rbxgs-net/Players.cpp (function ??__EfuncChat@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Players.cpp
