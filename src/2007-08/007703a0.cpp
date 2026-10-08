// roc 2007-08 007703a0  unit: seg_00770000  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007703a0
//
// 007703a0  33c9                 xor ecx, ecx
// 007703a2  51                   push ecx
// 007703a3  686c4c7a00           push 0x7a4c6c
// 007703a8  51                   push ecx
// 007703a9  b870cf4400           mov eax, 0x44cf70
// 007703ae  50                   push eax
// 007703af  b9d80d8c00           mov ecx, 0x8c0dd8
// 007703b4  e8c7efdbff           call 0x52f380
// 007703b9  6880937700           push 0x779380
// 007703be  e86009ecff           call 0x630d23
// 007703c3  59                   pop ecx
// 007703c4  c3                   ret 
// library rbxgs/util\RunStateOwner.cpp (function ??__ErunFunction@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
