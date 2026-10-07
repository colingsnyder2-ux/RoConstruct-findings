// roc 2011-06 00a345d0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a345d0
//
// 00a345d0  a180b4cb00           mov eax, dword ptr [0xcbb480]
// 00a345d5  85c0                 test eax, eax
// 00a345d7  7409                 je 0xa345e2
// 00a345d9  50                   push eax
// 00a345da  e8795addff           call 0x80a058
// 00a345df  83c404               add esp, 4
// 00a345e2  c70564b4cb00e0bea500 mov dword ptr [0xcbb464], 0xa5bee0
// 00a345ec  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
