// roc 2011-06 00a334a0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a334a0
//
// 00a334a0  a16c7acb00           mov eax, dword ptr [0xcb7a6c]
// 00a334a5  85c0                 test eax, eax
// 00a334a7  7409                 je 0xa334b2
// 00a334a9  50                   push eax
// 00a334aa  e8a96bddff           call 0x80a058
// 00a334af  83c404               add esp, 4
// 00a334b2  c705507acb00e0bea500 mov dword ptr [0xcb7a50], 0xa5bee0
// 00a334bc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
