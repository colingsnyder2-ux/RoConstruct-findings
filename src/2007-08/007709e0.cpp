// roc 2007-08 007709e0  unit: seg_00770000  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007709e0
//
// 007709e0  6830677a00           push 0x7a6730
// 007709e5  6874677a00           push 0x7a6774
// 007709ea  b95c158c00           mov ecx, 0x8c155c
// 007709ef  e87c01ddff           call 0x540b70
// 007709f4  6880967700           push 0x779680
// 007709f9  e82503ecff           call 0x630d23
// 007709fe  59                   pop ecx
// 007709ff  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??__E?event_descendentAdded@Instance@RBX@@2V?$SignalDesc@VInstance@RBX@@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@Z@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
