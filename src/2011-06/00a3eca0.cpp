// roc 2011-06 00a3eca0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3eca0
//
// 00a3eca0  a1e43fcd00           mov eax, dword ptr [0xcd3fe4]
// 00a3eca5  85c0                 test eax, eax
// 00a3eca7  7409                 je 0xa3ecb2
// 00a3eca9  50                   push eax
// 00a3ecaa  e8a9b3dcff           call 0x80a058
// 00a3ecaf  83c404               add esp, 4
// 00a3ecb2  c705c83fcd00e0bea500 mov dword ptr [0xcd3fc8], 0xa5bee0
// 00a3ecbc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
