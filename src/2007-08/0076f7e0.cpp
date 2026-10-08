// roc 2007-08 0076f7e0  unit: seg_00760000  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076f7e0
//
// 0076f7e0  33c9                 xor ecx, ecx
// 0076f7e2  51                   push ecx
// 0076f7e3  68e0e07900           push 0x79e0e0
// 0076f7e8  51                   push ecx
// 0076f7e9  b860684a00           mov eax, 0x4a6860
// 0076f7ee  50                   push eax
// 0076f7ef  b918eb8b00           mov ecx, 0x8beb18
// 0076f7f4  e8c71bd4ff           call 0x4b13c0
// 0076f7f9  6870897700           push 0x778970
// 0076f7fe  e82015ecff           call 0x630d23
// 0076f803  59                   pop ecx
// 0076f804  c3                   ret 
// library rbxgs-net/Replicator.cpp (function ??__Efunc_requestCharacter@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Replicator.cpp
