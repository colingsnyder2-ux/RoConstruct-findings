// roc 2007-08 00770890  unit: seg_00770000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00770890
//
// 00770890  6a01                 push 1
// 00770892  6814677a00           push 0x7a6714
// 00770897  33c9                 xor ecx, ecx
// 00770899  6804677a00           push 0x7a6704
// 0077089e  51                   push ecx
// 0077089f  b860e65300           mov eax, 0x53e660
// 007708a4  50                   push eax
// 007708a5  b948148c00           mov ecx, 0x8c1448
// 007708aa  e8810addff           call 0x541330
// 007708af  6860967700           push 0x779660
// 007708b4  e86a04ecff           call 0x630d23
// 007708b9  59                   pop ecx
// 007708ba  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??__Efunc_isDescendentOf@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
