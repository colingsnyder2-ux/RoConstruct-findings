// roc 2007-08 0076ea10  unit: seg_00760000  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076ea10
//
// 0076ea10  33c9                 xor ecx, ecx
// 0076ea12  51                   push ecx
// 0076ea13  6870b67900           push 0x79b670
// 0076ea18  6878b67900           push 0x79b678
// 0076ea1d  51                   push ecx
// 0076ea1e  b820874800           mov eax, 0x488720
// 0076ea23  50                   push eax
// 0076ea24  b990dd8b00           mov ecx, 0x8bdd90
// 0076ea29  e8a201d2ff           call 0x48ebd0
// 0076ea2e  6800817700           push 0x778100
// 0076ea33  e8eb22ecff           call 0x630d23
// 0076ea38  59                   pop ecx
// 0076ea39  c3                   ret 
// library rbxgs-net/Player.cpp (function ??__Efunc_SetSuperSafeChat@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Player.cpp
