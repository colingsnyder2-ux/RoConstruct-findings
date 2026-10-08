// roc 2007-08 00770960  unit: seg_00770000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00770960
//
// 00770960  56                   push esi
// 00770961  6a01                 push 1
// 00770963  33c9                 xor ecx, ecx
// 00770965  51                   push ecx
// 00770966  b830165400           mov eax, 0x541630
// 0077096b  50                   push eax
// 0077096c  33f6                 xor esi, esi
// 0077096e  56                   push esi
// 0077096f  bad0ce4100           mov edx, 0x41ced0
// 00770974  52                   push edx
// 00770975  6898b67900           push 0x79b698
// 0077097a  6848677a00           push 0x7a6748
// 0077097f  b99c148c00           mov ecx, 0x8c149c
// 00770984  e8f7ffdcff           call 0x540980
// 00770989  6890957700           push 0x779590
// 0077098e  e89003ecff           call 0x630d23
// 00770993  83c404               add esp, 4
// 00770996  5e                   pop esi
// 00770997  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??__E?propParent@Instance@RBX@@2V?$RefPropDescriptor@VInstance@RBX@@V12@@Reflection@2@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
