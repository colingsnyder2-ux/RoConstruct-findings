// roc 2011-06 00a3e9c0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3e9c0
//
// 00a3e9c0  a1403ecd00           mov eax, dword ptr [0xcd3e40]
// 00a3e9c5  85c0                 test eax, eax
// 00a3e9c7  7409                 je 0xa3e9d2
// 00a3e9c9  50                   push eax
// 00a3e9ca  e889b6dcff           call 0x80a058
// 00a3e9cf  83c404               add esp, 4
// 00a3e9d2  c705243ecd00e0bea500 mov dword ptr [0xcd3e24], 0xa5bee0
// 00a3e9dc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
