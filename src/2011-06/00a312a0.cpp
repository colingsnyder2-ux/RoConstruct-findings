// roc 2011-06 00a312a0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a312a0
//
// 00a312a0  a1cc35cb00           mov eax, dword ptr [0xcb35cc]
// 00a312a5  85c0                 test eax, eax
// 00a312a7  7409                 je 0xa312b2
// 00a312a9  50                   push eax
// 00a312aa  e8a98dddff           call 0x80a058
// 00a312af  83c404               add esp, 4
// 00a312b2  c705ac35cb00e0bea500 mov dword ptr [0xcb35ac], 0xa5bee0
// 00a312bc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
