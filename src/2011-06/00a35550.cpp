// roc 2011-06 00a35550  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a35550
//
// 00a35550  a18cd9cb00           mov eax, dword ptr [0xcbd98c]
// 00a35555  85c0                 test eax, eax
// 00a35557  7409                 je 0xa35562
// 00a35559  50                   push eax
// 00a3555a  e8f94addff           call 0x80a058
// 00a3555f  83c404               add esp, 4
// 00a35562  c70570d9cb00e0bea500 mov dword ptr [0xcbd970], 0xa5bee0
// 00a3556c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
