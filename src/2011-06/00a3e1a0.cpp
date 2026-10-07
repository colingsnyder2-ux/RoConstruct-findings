// roc 2011-06 00a3e1a0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3e1a0
//
// 00a3e1a0  a1cc32cd00           mov eax, dword ptr [0xcd32cc]
// 00a3e1a5  85c0                 test eax, eax
// 00a3e1a7  7409                 je 0xa3e1b2
// 00a3e1a9  50                   push eax
// 00a3e1aa  e8a9bedcff           call 0x80a058
// 00a3e1af  83c404               add esp, 4
// 00a3e1b2  c705b032cd00e0bea500 mov dword ptr [0xcd32b0], 0xa5bee0
// 00a3e1bc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
