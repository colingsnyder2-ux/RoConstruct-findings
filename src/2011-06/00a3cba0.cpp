// roc 2011-06 00a3cba0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3cba0
//
// 00a3cba0  a12012cd00           mov eax, dword ptr [0xcd1220]
// 00a3cba5  85c0                 test eax, eax
// 00a3cba7  7409                 je 0xa3cbb2
// 00a3cba9  50                   push eax
// 00a3cbaa  e8a9d4dcff           call 0x80a058
// 00a3cbaf  83c404               add esp, 4
// 00a3cbb2  c7050012cd00e0bea500 mov dword ptr [0xcd1200], 0xa5bee0
// 00a3cbbc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
