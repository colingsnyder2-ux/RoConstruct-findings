// roc 2007-08 00770830  unit: seg_00770000  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00770830
//
// 00770830  6a01                 push 1
// 00770832  33c9                 xor ecx, ecx
// 00770834  68ec667a00           push 0x7a66ec
// 00770839  51                   push ecx
// 0077083a  b820f05300           mov eax, 0x53f020
// 0077083f  50                   push eax
// 00770840  b9d8158c00           mov ecx, 0x8c15d8
// 00770845  e8160addff           call 0x541260
// 0077084a  6850967700           push 0x779650
// 0077084f  e8cf04ecff           call 0x630d23
// 00770854  59                   pop ecx
// 00770855  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??__Efunc_childrenOld@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
