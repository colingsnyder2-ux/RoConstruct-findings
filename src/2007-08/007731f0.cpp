// roc 2007-08 007731f0  unit: seg_00770000  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007731f0
//
// 007731f0  33c9                 xor ecx, ecx
// 007731f2  51                   push ecx
// 007731f3  6884027b00           push 0x7b0284
// 007731f8  51                   push ecx
// 007731f9  b8d0cf4400           mov eax, 0x44cfd0
// 007731fe  50                   push eax
// 007731ff  b9b84c8c00           mov ecx, 0x8c4cb8
// 00773204  e827f9e1ff           call 0x592b30
// 00773209  6880ae7700           push 0x77ae80
// 0077320e  e810dbebff           call 0x630d23
// 00773213  59                   pop ecx
// 00773214  c3                   ret 
// library rbxgs/v8datamodel\Visit.cpp (function ??__EgetUploadUrl@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Visit.cpp
