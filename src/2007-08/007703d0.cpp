// roc 2007-08 007703d0  unit: seg_00770000  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007703d0
//
// 007703d0  33c9                 xor ecx, ecx
// 007703d2  51                   push ecx
// 007703d3  68704c7a00           push 0x7a4c70
// 007703d8  51                   push ecx
// 007703d9  b890cf4400           mov eax, 0x44cf90
// 007703de  50                   push eax
// 007703df  b9800d8c00           mov ecx, 0x8c0d80
// 007703e4  e897efdbff           call 0x52f380
// 007703e9  6860937700           push 0x779360
// 007703ee  e83009ecff           call 0x630d23
// 007703f3  59                   pop ecx
// 007703f4  c3                   ret 
// library rbxgs/util\RunStateOwner.cpp (function ??__EpauseFunction@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
