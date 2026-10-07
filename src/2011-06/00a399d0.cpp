// roc 2011-06 00a399d0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a399d0
//
// 00a399d0  a108b9cc00           mov eax, dword ptr [0xccb908]
// 00a399d5  85c0                 test eax, eax
// 00a399d7  7409                 je 0xa399e2
// 00a399d9  50                   push eax
// 00a399da  e87906ddff           call 0x80a058
// 00a399df  83c404               add esp, 4
// 00a399e2  c705ecb8cc00e0bea500 mov dword ptr [0xccb8ec], 0xa5bee0
// 00a399ec  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
