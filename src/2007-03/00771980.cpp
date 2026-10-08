// roc 2007-03 00771980  unit: seg_00770000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00771980
//
// 00771980  6a01                 push 1
// 00771982  33c9                 xor ecx, ecx
// 00771984  51                   push ecx
// 00771985  51                   push ecx
// 00771986  b8e0db4100           mov eax, 0x41dbe0
// 0077198b  50                   push eax
// 0077198c  6870a77900           push 0x79a770
// 00771991  68e8677a00           push 0x7a67e8
// 00771996  b974b88b00           mov ecx, 0x8bb874
// 0077199b  e850f9dcff           call 0x5412f0
// 007719a0  68c0957700           push 0x7795c0
// 007719a5  e809d8eaff           call 0x61f1b3
// 007719aa  59                   pop ecx
// 007719ab  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??__Eprop_className@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
