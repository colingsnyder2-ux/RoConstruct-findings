// roc 2011-06 00a3a770  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3a770
//
// 00a3a770  a198cecc00           mov eax, dword ptr [0xccce98]
// 00a3a775  85c0                 test eax, eax
// 00a3a777  7409                 je 0xa3a782
// 00a3a779  50                   push eax
// 00a3a77a  e8d9f8dcff           call 0x80a058
// 00a3a77f  83c404               add esp, 4
// 00a3a782  c7057ccecc00e0bea500 mov dword ptr [0xccce7c], 0xa5bee0
// 00a3a78c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
