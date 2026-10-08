// roc 2009-06 0088cf90  unit: seg_00880000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0088cf90
//
// 0088cf90  33c9                 xor ecx, ecx
// 0088cf92  51                   push ecx
// 0088cf93  51                   push ecx
// 0088cf94  b820626200           mov eax, 0x626220
// 0088cf99  50                   push eax
// 0088cf9a  51                   push ecx
// 0088cf9b  68584e8c00           push 0x8c4e58
// 0088cfa0  68a0a38d00           push 0x8da3a0
// 0088cfa5  b9a0b5a400           mov ecx, 0xa4b5a0
// 0088cfaa  e8e185d9ff           call 0x625590
// 0088cfaf  68109c8900           push 0x899c10
// 0088cfb4  e842cbe8ff           call 0x719afb
// 0088cfb9  59                   pop ecx
// 0088cfba  c3                   ret 
// library rbxgs/v8datamodel\Hopper.cpp (function ??__Edesc_legacyTextureName@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Hopper.cpp
