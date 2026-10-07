// roc 2011-06 00a39fa0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a39fa0
//
// 00a39fa0  a13cc4cc00           mov eax, dword ptr [0xccc43c]
// 00a39fa5  85c0                 test eax, eax
// 00a39fa7  7409                 je 0xa39fb2
// 00a39fa9  50                   push eax
// 00a39faa  e8a900ddff           call 0x80a058
// 00a39faf  83c404               add esp, 4
// 00a39fb2  c70520c4cc00e0bea500 mov dword ptr [0xccc420], 0xa5bee0
// 00a39fbc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
