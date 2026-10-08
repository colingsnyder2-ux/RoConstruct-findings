// roc 2007-08 00770380  unit: seg_00770000  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00770380
//
// 00770380  68604c7a00           push 0x7a4c60
// 00770385  68544c7a00           push 0x7a4c54
// 0077038a  b9580d8c00           mov ecx, 0x8c0d58
// 0077038f  e81cefdbff           call 0x52f2b0
// 00770394  6890937700           push 0x779390
// 00770399  e88509ecff           call 0x630d23
// 0077039e  59                   pop ecx
// 0077039f  c3                   ret 
// library rbxgs/util\RunStateOwner.cpp (function ??__Eevent_Heartbeat@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
