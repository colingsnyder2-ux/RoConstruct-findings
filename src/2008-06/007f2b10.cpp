// roc 2008-06 007f2b10  unit: seg_007f0000  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f2b10
//
// 007f2b10  68ecd98200           push 0x82d9ec
// 007f2b15  68e0d98200           push 0x82d9e0
// 007f2b1a  b9903e9700           mov ecx, 0x973e90
// 007f2b1f  e8ec6fd6ff           call 0x559b10
// 007f2b24  6890cb7f00           push 0x7fcb90
// 007f2b29  e881eceaff           call 0x6a17af
// 007f2b2e  59                   pop ecx
// 007f2b2f  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??__E?event_childAdded@Instance@RBX@@2V?$SignalDesc@VInstance@RBX@@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@Z@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
