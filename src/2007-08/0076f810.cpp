// roc 2007-08 0076f810  unit: seg_00760000  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076f810
//
// 0076f810  33c9                 xor ecx, ecx
// 0076f812  51                   push ecx
// 0076f813  68f4e07900           push 0x79e0f4
// 0076f818  51                   push ecx
// 0076f819  b820504a00           mov eax, 0x4a5020
// 0076f81e  50                   push eax
// 0076f81f  b948eb8b00           mov ecx, 0x8beb48
// 0076f824  e8971bd4ff           call 0x4b13c0
// 0076f829  6860897700           push 0x778960
// 0076f82e  e8f014ecff           call 0x630d23
// 0076f833  59                   pop ecx
// 0076f834  c3                   ret 
// library rbxgs-net/Replicator.cpp (function ??__Efunc_closeConnection@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Replicator.cpp
