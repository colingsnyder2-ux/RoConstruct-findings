// roc 2011-06 00a396b0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a396b0
//
// 00a396b0  a12cb2cc00           mov eax, dword ptr [0xccb22c]
// 00a396b5  85c0                 test eax, eax
// 00a396b7  7409                 je 0xa396c2
// 00a396b9  50                   push eax
// 00a396ba  e89909ddff           call 0x80a058
// 00a396bf  83c404               add esp, 4
// 00a396c2  c70510b2cc00e0bea500 mov dword ptr [0xccb210], 0xa5bee0
// 00a396cc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
