// roc 2011-06 00a3a600  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3a600
//
// 00a3a600  a108cdcc00           mov eax, dword ptr [0xcccd08]
// 00a3a605  85c0                 test eax, eax
// 00a3a607  7409                 je 0xa3a612
// 00a3a609  50                   push eax
// 00a3a60a  e849fadcff           call 0x80a058
// 00a3a60f  83c404               add esp, 4
// 00a3a612  c705e8cccc00e0bea500 mov dword ptr [0xcccce8], 0xa5bee0
// 00a3a61c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
