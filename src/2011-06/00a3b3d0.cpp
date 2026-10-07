// roc 2011-06 00a3b3d0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3b3d0
//
// 00a3b3d0  a1b4e6cc00           mov eax, dword ptr [0xcce6b4]
// 00a3b3d5  85c0                 test eax, eax
// 00a3b3d7  7409                 je 0xa3b3e2
// 00a3b3d9  50                   push eax
// 00a3b3da  e879ecdcff           call 0x80a058
// 00a3b3df  83c404               add esp, 4
// 00a3b3e2  c70594e6cc00e0bea500 mov dword ptr [0xcce694], 0xa5bee0
// 00a3b3ec  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
