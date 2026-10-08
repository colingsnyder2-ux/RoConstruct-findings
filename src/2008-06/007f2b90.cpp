// roc 2008-06 007f2b90  unit: seg_007f0000  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f2b90
//
// 007f2b90  68ecd98200           push 0x82d9ec
// 007f2b95  6828da8200           push 0x82da28
// 007f2b9a  b9383c9700           mov ecx, 0x973c38
// 007f2b9f  e86c6fd6ff           call 0x559b10
// 007f2ba4  6800cb7f00           push 0x7fcb00
// 007f2ba9  e801eceaff           call 0x6a17af
// 007f2bae  59                   pop ecx
// 007f2baf  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??__E?event_ancestryChanged@Instance@RBX@@2V?$SignalDesc@VInstance@RBX@@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@Z@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
