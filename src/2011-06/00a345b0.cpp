// roc 2011-06 00a345b0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a345b0
//
// 00a345b0  a1a8b5cb00           mov eax, dword ptr [0xcbb5a8]
// 00a345b5  85c0                 test eax, eax
// 00a345b7  7409                 je 0xa345c2
// 00a345b9  50                   push eax
// 00a345ba  e8995addff           call 0x80a058
// 00a345bf  83c404               add esp, 4
// 00a345c2  c7058cb5cb00e0bea500 mov dword ptr [0xcbb58c], 0xa5bee0
// 00a345cc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
