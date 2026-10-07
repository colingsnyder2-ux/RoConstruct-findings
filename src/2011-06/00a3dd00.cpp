// roc 2011-06 00a3dd00  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3dd00
//
// 00a3dd00  a1942acd00           mov eax, dword ptr [0xcd2a94]
// 00a3dd05  85c0                 test eax, eax
// 00a3dd07  7409                 je 0xa3dd12
// 00a3dd09  50                   push eax
// 00a3dd0a  e849c3dcff           call 0x80a058
// 00a3dd0f  83c404               add esp, 4
// 00a3dd12  c705782acd00e0bea500 mov dword ptr [0xcd2a78], 0xa5bee0
// 00a3dd1c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
