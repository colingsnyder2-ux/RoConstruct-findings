// roc 2011-06 00a39b90  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a39b90
//
// 00a39b90  a164bccc00           mov eax, dword ptr [0xccbc64]
// 00a39b95  85c0                 test eax, eax
// 00a39b97  7409                 je 0xa39ba2
// 00a39b99  50                   push eax
// 00a39b9a  e8b904ddff           call 0x80a058
// 00a39b9f  83c404               add esp, 4
// 00a39ba2  c70548bccc00e0bea500 mov dword ptr [0xccbc48], 0xa5bee0
// 00a39bac  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
