// roc 2007-08 007709a0  unit: seg_00770000  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007709a0
//
// 007709a0  685c677a00           push 0x7a675c
// 007709a5  6850677a00           push 0x7a6750
// 007709aa  b980158c00           mov ecx, 0x8c1580
// 007709af  e8bc01ddff           call 0x540b70
// 007709b4  68d0967700           push 0x7796d0
// 007709b9  e86503ecff           call 0x630d23
// 007709be  59                   pop ecx
// 007709bf  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??__E?event_childAdded@Instance@RBX@@2V?$SignalDesc@VInstance@RBX@@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@Z@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
