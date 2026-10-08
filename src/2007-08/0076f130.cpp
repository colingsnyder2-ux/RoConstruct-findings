// roc 2007-08 0076f130  unit: seg_00760000  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076f130
//
// 0076f130  33c9                 xor ecx, ecx
// 0076f132  51                   push ecx
// 0076f133  68b4b67900           push 0x79b6b4
// 0076f138  68e4bd7900           push 0x79bde4
// 0076f13d  51                   push ecx
// 0076f13e  b8506c4900           mov eax, 0x496c50
// 0076f143  50                   push eax
// 0076f144  b998e08b00           mov ecx, 0x8be098
// 0076f149  e8c26bd2ff           call 0x495d10
// 0076f14e  68c0857700           push 0x7785c0
// 0076f153  e8cb1becff           call 0x630d23
// 0076f158  59                   pop ecx
// 0076f159  c3                   ret 
// library rbxgs-net/Players.cpp (function ??__Efunc_createLocalPlayer@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Players.cpp
