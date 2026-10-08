// roc 2007-08 00770a20  unit: seg_00770000  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00770a20
//
// 00770a20  685c677a00           push 0x7a675c
// 00770a25  6898677a00           push 0x7a6798
// 00770a2a  b9cc138c00           mov ecx, 0x8c13cc
// 00770a2f  e83c01ddff           call 0x540b70
// 00770a34  68a0967700           push 0x7796a0
// 00770a39  e8e502ecff           call 0x630d23
// 00770a3e  59                   pop ecx
// 00770a3f  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??__E?event_ancestryChanged@Instance@RBX@@2V?$SignalDesc@VInstance@RBX@@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@Z@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
