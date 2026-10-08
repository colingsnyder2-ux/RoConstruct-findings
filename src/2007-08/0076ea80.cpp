// roc 2007-08 0076ea80  unit: seg_00760000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076ea80
//
// 0076ea80  56                   push esi
// 0076ea81  6a05                 push 5
// 0076ea83  33c9                 xor ecx, ecx
// 0076ea85  51                   push ecx
// 0076ea86  b830144900           mov eax, 0x491430
// 0076ea8b  50                   push eax
// 0076ea8c  33f6                 xor esi, esi
// 0076ea8e  56                   push esi
// 0076ea8f  ba90684800           mov edx, 0x486890
// 0076ea94  52                   push edx
// 0076ea95  6898b67900           push 0x79b698
// 0076ea9a  68a0b67900           push 0x79b6a0
// 0076ea9f  b920df8b00           mov ecx, 0x8bdf20
// 0076eaa4  e837f1d1ff           call 0x48dbe0
// 0076eaa9  68b0807700           push 0x7780b0
// 0076eaae  e87022ecff           call 0x630d23
// 0076eab3  83c404               add esp, 4
// 0076eab6  5e                   pop esi
// 0076eab7  c3                   ret 
// library rbxgs-net/Player.cpp (function ??__Eprop_characterAppearance@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Player.cpp
