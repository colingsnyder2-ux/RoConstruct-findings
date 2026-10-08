// roc 2007-08 0076e9e0  unit: seg_00760000  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076e9e0
//
// 0076e9e0  33c9                 xor ecx, ecx
// 0076e9e2  51                   push ecx
// 0076e9e3  6870b67900           push 0x79b670
// 0076e9e8  6864b67900           push 0x79b664
// 0076e9ed  51                   push ecx
// 0076e9ee  b8f0864800           mov eax, 0x4886f0
// 0076e9f3  50                   push eax
// 0076e9f4  b998de8b00           mov ecx, 0x8bde98
// 0076e9f9  e8d201d2ff           call 0x48ebd0
// 0076e9fe  6820817700           push 0x778120
// 0076ea03  e81b23ecff           call 0x630d23
// 0076ea08  59                   pop ecx
// 0076ea09  c3                   ret 
// library rbxgs-net/Player.cpp (function ??__Efunc_SetUnder13@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Player.cpp
