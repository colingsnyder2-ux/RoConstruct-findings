// roc 2007-08 007708c0  unit: seg_00770000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007708c0
//
// 007708c0  6a01                 push 1
// 007708c2  6830677a00           push 0x7a6730
// 007708c7  33c9                 xor ecx, ecx
// 007708c9  6820677a00           push 0x7a6720
// 007708ce  51                   push ecx
// 007708cf  b860e35300           mov eax, 0x53e360
// 007708d4  50                   push eax
// 007708d5  b9d8148c00           mov ecx, 0x8c14d8
// 007708da  e8510addff           call 0x541330
// 007708df  6820967700           push 0x779620
// 007708e4  e83a04ecff           call 0x630d23
// 007708e9  59                   pop ecx
// 007708ea  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??__Efunc_isAncestorOf@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
