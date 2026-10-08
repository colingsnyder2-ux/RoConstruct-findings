// roc 2007-03 00771d40  unit: seg_00770000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00771d40
//
// 00771d40  56                   push esi
// 00771d41  6a05                 push 5
// 00771d43  33c9                 xor ecx, ecx
// 00771d45  51                   push ecx
// 00771d46  b810405400           mov eax, 0x544010
// 00771d4b  50                   push eax
// 00771d4c  33f6                 xor esi, esi
// 00771d4e  56                   push esi
// 00771d4f  ba102a5400           mov edx, 0x542a10
// 00771d54  52                   push edx
// 00771d55  681c6e7a00           push 0x7a6e1c
// 00771d5a  68246e7a00           push 0x7a6e24
// 00771d5f  b9d8bc8b00           mov ecx, 0x8bbcd8
// 00771d64  e8071dddff           call 0x543a70
// 00771d69  68a0977700           push 0x7797a0
// 00771d6e  e840d4eaff           call 0x61f1b3
// 00771d73  83c404               add esp, 4
// 00771d76  5e                   pop esi
// 00771d77  c3                   ret 
// library rbxgs/v8datamodel\DebugSettings.cpp (function ??__Eprop_HighlightSleepParts@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
