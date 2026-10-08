// roc 2007-08 0076e980  unit: seg_00760000  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076e980
//
// 0076e980  33c9                 xor ecx, ecx
// 0076e982  51                   push ecx
// 0076e983  6844b67900           push 0x79b644
// 0076e988  51                   push ecx
// 0076e989  b8f00d4900           mov eax, 0x490df0
// 0076e98e  50                   push eax
// 0076e98f  b9d0de8b00           mov ecx, 0x8bded0
// 0076e994  e80701d2ff           call 0x48eaa0
// 0076e999  68c0847700           push 0x7784c0
// 0076e99e  e88023ecff           call 0x630d23
// 0076e9a3  59                   pop ecx
// 0076e9a4  c3                   ret 
// library rbxgs-net/Player.cpp (function ??__EloadCharacterFunction@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Player.cpp
