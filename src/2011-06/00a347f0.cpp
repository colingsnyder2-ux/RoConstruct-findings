// roc 2011-06 00a347f0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a347f0
//
// 00a347f0  a124b7cb00           mov eax, dword ptr [0xcbb724]
// 00a347f5  85c0                 test eax, eax
// 00a347f7  7409                 je 0xa34802
// 00a347f9  50                   push eax
// 00a347fa  e85958ddff           call 0x80a058
// 00a347ff  83c404               add esp, 4
// 00a34802  c70508b7cb00e0bea500 mov dword ptr [0xcbb708], 0xa5bee0
// 00a3480c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
