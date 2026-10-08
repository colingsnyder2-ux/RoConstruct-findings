// roc 2007-08 00770a00  unit: seg_00770000  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00770a00
//
// 00770a00  6830677a00           push 0x7a6730
// 00770a05  6884677a00           push 0x7a6784
// 00770a0a  b92c168c00           mov ecx, 0x8c162c
// 00770a0f  e85c01ddff           call 0x540b70
// 00770a14  6890967700           push 0x779690
// 00770a19  e80503ecff           call 0x630d23
// 00770a1e  59                   pop ecx
// 00770a1f  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??__E?event_descendentRemoving@Instance@RBX@@2V?$SignalDesc@VInstance@RBX@@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@Z@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
