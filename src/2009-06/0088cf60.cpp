// roc 2009-06 0088cf60  unit: seg_00880000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0088cf60
//
// 0088cf60  33c9                 xor ecx, ecx
// 0088cf62  51                   push ecx
// 0088cf63  51                   push ecx
// 0088cf64  b8e0686200           mov eax, 0x6268e0
// 0088cf69  50                   push eax
// 0088cf6a  51                   push ecx
// 0088cf6b  68584e8c00           push 0x8c4e58
// 0088cf70  6864178b00           push 0x8b1764
// 0088cf75  b928b5a400           mov ecx, 0xa4b528
// 0088cf7a  e81186d9ff           call 0x625590
// 0088cf7f  68309c8900           push 0x899c30
// 0088cf84  e872cbe8ff           call 0x719afb
// 0088cf89  59                   pop ecx
// 0088cf8a  c3                   ret 
// library rbxgs/v8datamodel\Hopper.cpp (function ??__Edesc_legacyCommand@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Hopper.cpp
