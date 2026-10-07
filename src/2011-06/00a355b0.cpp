// roc 2011-06 00a355b0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a355b0
//
// 00a355b0  a16cd9cb00           mov eax, dword ptr [0xcbd96c]
// 00a355b5  85c0                 test eax, eax
// 00a355b7  7409                 je 0xa355c2
// 00a355b9  50                   push eax
// 00a355ba  e8994addff           call 0x80a058
// 00a355bf  83c404               add esp, 4
// 00a355c2  c70550d9cb00e0bea500 mov dword ptr [0xcbd950], 0xa5bee0
// 00a355cc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
