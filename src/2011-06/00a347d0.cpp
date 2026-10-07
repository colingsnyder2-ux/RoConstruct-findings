// roc 2011-06 00a347d0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a347d0
//
// 00a347d0  a1a0b3cb00           mov eax, dword ptr [0xcbb3a0]
// 00a347d5  85c0                 test eax, eax
// 00a347d7  7409                 je 0xa347e2
// 00a347d9  50                   push eax
// 00a347da  e87958ddff           call 0x80a058
// 00a347df  83c404               add esp, 4
// 00a347e2  c70584b3cb00e0bea500 mov dword ptr [0xcbb384], 0xa5bee0
// 00a347ec  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
