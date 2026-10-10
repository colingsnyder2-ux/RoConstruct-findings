// from server: 97% by colin
// roc 2007-08 007708f0  unit: seg_00770000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007708f0
//
// 007708f0  6a01                 push 1
// 007708f2  33c9                 xor ecx, ecx
// 007708f4  51                   push ecx
// 007708f5  51                   push ecx
// 007708f6  b8a0ce4100           mov eax, 0x542b60
// 007708fb  50                   push eax
// 007708fc  6898b67900           push 0x7a6d64
// 00770901  683c677a00           push 0x7a6d9c
// 00770906  b980148c00           mov ecx, 0x8c1720
// 0077090b  e830ffdcff           call 0x543d90
// 00770910  68f0957700           push 0x779840
// 00770915  e80904ecff           call 0x630d23
// 0077091a  59                   pop ecx
// 0077091b  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??__Eprop_className@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp