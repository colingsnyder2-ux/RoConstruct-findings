// roc 2011-06 00a313a0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a313a0
//
// 00a313a0  a16c36cb00           mov eax, dword ptr [0xcb366c]
// 00a313a5  85c0                 test eax, eax
// 00a313a7  7409                 je 0xa313b2
// 00a313a9  50                   push eax
// 00a313aa  e8a98cddff           call 0x80a058
// 00a313af  83c404               add esp, 4
// 00a313b2  c7054c36cb00e0bea500 mov dword ptr [0xcb364c], 0xa5bee0
// 00a313bc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
