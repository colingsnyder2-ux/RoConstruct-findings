// roc 2007-08 007709c0  unit: seg_00770000  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007709c0
//
// 007709c0  685c677a00           push 0x7a675c
// 007709c5  6864677a00           push 0x7a6764
// 007709ca  b9f0138c00           mov ecx, 0x8c13f0
// 007709cf  e89c01ddff           call 0x540b70
// 007709d4  6870967700           push 0x779670
// 007709d9  e84503ecff           call 0x630d23
// 007709de  59                   pop ecx
// 007709df  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??__E?event_childRemoved@Instance@RBX@@2V?$SignalDesc@VInstance@RBX@@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@Z@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
