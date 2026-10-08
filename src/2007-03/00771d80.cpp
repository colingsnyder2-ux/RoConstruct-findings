// roc 2007-03 00771d80  unit: seg_00770000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00771d80
//
// 00771d80  56                   push esi
// 00771d81  6a05                 push 5
// 00771d83  33c9                 xor ecx, ecx
// 00771d85  51                   push ecx
// 00771d86  b840405400           mov eax, 0x544040
// 00771d8b  50                   push eax
// 00771d8c  33f6                 xor esi, esi
// 00771d8e  56                   push esi
// 00771d8f  ba202a5400           mov edx, 0x542a20
// 00771d94  52                   push edx
// 00771d95  681c6e7a00           push 0x7a6e1c
// 00771d9a  68386e7a00           push 0x7a6e38
// 00771d9f  b96cbb8b00           mov ecx, 0x8bbb6c
// 00771da4  e8c71cddff           call 0x543a70
// 00771da9  6860967700           push 0x779660
// 00771dae  e800d4eaff           call 0x61f1b3
// 00771db3  83c404               add esp, 4
// 00771db6  5e                   pop esi
// 00771db7  c3                   ret 
// library rbxgs/v8datamodel\DebugSettings.cpp (function ??__Eprop_HighlightAwakeParts@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
