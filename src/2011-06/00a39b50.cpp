// roc 2011-06 00a39b50  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a39b50
//
// 00a39b50  a184bccc00           mov eax, dword ptr [0xccbc84]
// 00a39b55  85c0                 test eax, eax
// 00a39b57  7409                 je 0xa39b62
// 00a39b59  50                   push eax
// 00a39b5a  e8f904ddff           call 0x80a058
// 00a39b5f  83c404               add esp, 4
// 00a39b62  c70568bccc00e0bea500 mov dword ptr [0xccbc68], 0xa5bee0
// 00a39b6c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
