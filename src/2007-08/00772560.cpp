// from server: 99% by colin
// roc 2007-08 00770a40  unit: seg_00770000  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00770a40
//
// 00770a40  68d4797800           push 0x796108
// 00770a45  68a8677a00           push 0x7ab0b8
// 00770a4a  b908168c00           mov ecx, 0x8c2990
// 00770a4f  e8ec01ddff           call 0x578930
// 00770a54  68b0967700           push 0x77a3a0
// 00770a59  e8c502ecff           call 0x630d23
// 00770a5e  59                   pop ecx
// 00770a5f  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??__E?event_propertyChanged@Instance@RBX@@2V?$SignalDesc@VInstance@RBX@@$$A6AXPBVPropertyDescriptor@Reflection@2@@Z@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp