// roc 2011-06 00a347b0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a347b0
//
// 00a347b0  a1f8b2cb00           mov eax, dword ptr [0xcbb2f8]
// 00a347b5  85c0                 test eax, eax
// 00a347b7  7409                 je 0xa347c2
// 00a347b9  50                   push eax
// 00a347ba  e89958ddff           call 0x80a058
// 00a347bf  83c404               add esp, 4
// 00a347c2  c705dcb2cb00e0bea500 mov dword ptr [0xcbb2dc], 0xa5bee0
// 00a347cc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
