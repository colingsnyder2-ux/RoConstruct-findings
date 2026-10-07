// roc 2011-06 00a3e9a0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3e9a0
//
// 00a3e9a0  a1083fcd00           mov eax, dword ptr [0xcd3f08]
// 00a3e9a5  85c0                 test eax, eax
// 00a3e9a7  7409                 je 0xa3e9b2
// 00a3e9a9  50                   push eax
// 00a3e9aa  e8a9b6dcff           call 0x80a058
// 00a3e9af  83c404               add esp, 4
// 00a3e9b2  c705ec3ecd00e0bea500 mov dword ptr [0xcd3eec], 0xa5bee0
// 00a3e9bc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
