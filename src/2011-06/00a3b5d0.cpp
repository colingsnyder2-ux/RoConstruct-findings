// roc 2011-06 00a3b5d0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3b5d0
//
// 00a3b5d0  a12cf0cc00           mov eax, dword ptr [0xccf02c]
// 00a3b5d5  85c0                 test eax, eax
// 00a3b5d7  7409                 je 0xa3b5e2
// 00a3b5d9  50                   push eax
// 00a3b5da  e879eadcff           call 0x80a058
// 00a3b5df  83c404               add esp, 4
// 00a3b5e2  c70510f0cc00e0bea500 mov dword ptr [0xccf010], 0xa5bee0
// 00a3b5ec  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
