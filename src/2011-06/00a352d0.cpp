// roc 2011-06 00a352d0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a352d0
//
// 00a352d0  a19ccecb00           mov eax, dword ptr [0xcbce9c]
// 00a352d5  85c0                 test eax, eax
// 00a352d7  7409                 je 0xa352e2
// 00a352d9  50                   push eax
// 00a352da  e8794dddff           call 0x80a058
// 00a352df  83c404               add esp, 4
// 00a352e2  c70580cecb00e0bea500 mov dword ptr [0xcbce80], 0xa5bee0
// 00a352ec  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
