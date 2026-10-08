// roc 2007-08 00770400  unit: seg_00770000  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00770400
//
// 00770400  33c9                 xor ecx, ecx
// 00770402  51                   push ecx
// 00770403  68784c7a00           push 0x7a4c78
// 00770408  51                   push ecx
// 00770409  b8a0cf4400           mov eax, 0x44cfa0
// 0077040e  50                   push eax
// 0077040f  b9280d8c00           mov ecx, 0x8c0d28
// 00770414  e867efdbff           call 0x52f380
// 00770419  6870937700           push 0x779370
// 0077041e  e80009ecff           call 0x630d23
// 00770423  59                   pop ecx
// 00770424  c3                   ret 
// library rbxgs/util\RunStateOwner.cpp (function ??__EresetFunction@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
