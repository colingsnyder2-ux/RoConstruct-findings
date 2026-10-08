// roc 2007-08 00771320  unit: seg_00770000  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00771320
//
// 00771320  33c9                 xor ecx, ecx
// 00771322  51                   push ecx
// 00771323  68288f7a00           push 0x7a8f28
// 00771328  51                   push ecx
// 00771329  b8b0ac5500           mov eax, 0x55acb0
// 0077132e  50                   push eax
// 0077132f  b940208c00           mov ecx, 0x8c2040
// 00771334  e8c7b1deff           call 0x55c500
// 00771339  68c09c7700           push 0x779cc0
// 0077133e  e8e0f9ebff           call 0x630d23
// 00771343  59                   pop ecx
// 00771344  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??__EsanitizeFunction@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
