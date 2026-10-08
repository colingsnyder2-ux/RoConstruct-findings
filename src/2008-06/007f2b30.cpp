// roc 2008-06 007f2b30  unit: seg_007f0000  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f2b30
//
// 007f2b30  68ecd98200           push 0x82d9ec
// 007f2b35  68f4d98200           push 0x82d9f4
// 007f2b3a  b96c3c9700           mov ecx, 0x973c6c
// 007f2b3f  e8cc6fd6ff           call 0x559b10
// 007f2b44  6840ca7f00           push 0x7fca40
// 007f2b49  e861eceaff           call 0x6a17af
// 007f2b4e  59                   pop ecx
// 007f2b4f  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??__E?event_childRemoved@Instance@RBX@@2V?$SignalDesc@VInstance@RBX@@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@Z@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
