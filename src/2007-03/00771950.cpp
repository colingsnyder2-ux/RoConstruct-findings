// roc 2007-03 00771950  unit: seg_00770000  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00771950
//
// 00771950  6a01                 push 1
// 00771952  33c9                 xor ecx, ecx
// 00771954  68dc677a00           push 0x7a67dc
// 00771959  51                   push ecx
// 0077195a  b880fe5300           mov eax, 0x53fe80
// 0077195f  50                   push eax
// 00771960  b918b98b00           mov ecx, 0x8bb918
// 00771965  e8b601ddff           call 0x541b20
// 0077196a  68f0957700           push 0x7795f0
// 0077196f  e83fd8eaff           call 0x61f1b3
// 00771974  59                   pop ecx
// 00771975  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??__Efunc_childrenOld@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
