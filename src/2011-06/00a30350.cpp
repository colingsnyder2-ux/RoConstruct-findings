// roc 2011-06 00a30350  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a30350
//
// 00a30350  a19422cb00           mov eax, dword ptr [0xcb2294]
// 00a30355  85c0                 test eax, eax
// 00a30357  7409                 je 0xa30362
// 00a30359  50                   push eax
// 00a3035a  e8f99cddff           call 0x80a058
// 00a3035f  83c404               add esp, 4
// 00a30362  c7057822cb00e0bea500 mov dword ptr [0xcb2278], 0xa5bee0
// 00a3036c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
