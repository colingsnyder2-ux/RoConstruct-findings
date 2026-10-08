// roc 2007-08 0076f040  unit: seg_00760000  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076f040
//
// 0076f040  33c9                 xor ecx, ecx
// 0076f042  51                   push ecx
// 0076f043  6888b87900           push 0x79b888
// 0076f048  68b0bd7900           push 0x79bdb0
// 0076f04d  51                   push ecx
// 0076f04e  b8d02b4900           mov eax, 0x492bd0
// 0076f053  50                   push eax
// 0076f054  b9d0e08b00           mov ecx, 0x8be0d0
// 0076f059  e8b26cd2ff           call 0x495d10
// 0076f05e  6870867700           push 0x778670
// 0076f063  e8bb1cecff           call 0x630d23
// 0076f068  59                   pop ecx
// 0076f069  c3                   ret 
// library rbxgs-net/Players.cpp (function ??__Efunc_GetPlayerByID@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Players.cpp
