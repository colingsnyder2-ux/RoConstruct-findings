// roc 2011-06 00a344d0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a344d0
//
// 00a344d0  a160b4cb00           mov eax, dword ptr [0xcbb460]
// 00a344d5  85c0                 test eax, eax
// 00a344d7  7409                 je 0xa344e2
// 00a344d9  50                   push eax
// 00a344da  e8795bddff           call 0x80a058
// 00a344df  83c404               add esp, 4
// 00a344e2  c70544b4cb00e0bea500 mov dword ptr [0xcbb444], 0xa5bee0
// 00a344ec  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
