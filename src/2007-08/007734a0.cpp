// roc 2007-08 007734a0  unit: seg_00770000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007734a0
//
// 007734a0  33c9                 xor ecx, ecx
// 007734a2  51                   push ecx
// 007734a3  51                   push ecx
// 007734a4  b820ee5900           mov eax, 0x59ee20
// 007734a9  50                   push eax
// 007734aa  51                   push ecx
// 007734ab  6898b67900           push 0x79b698
// 007734b0  68d4b07800           push 0x78b0d4
// 007734b5  b9f4518c00           mov ecx, 0x8c51f4
// 007734ba  e891ade2ff           call 0x59e250
// 007734bf  6810b07700           push 0x77b010
// 007734c4  e85ad8ebff           call 0x630d23
// 007734c9  59                   pop ecx
// 007734ca  c3                   ret 
// library rbxgs/v8datamodel\Hopper.cpp (function ??__Edesc_legacyCommand@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Hopper.cpp
