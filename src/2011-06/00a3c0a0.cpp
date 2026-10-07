// roc 2011-06 00a3c0a0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3c0a0
//
// 00a3c0a0  a170fecc00           mov eax, dword ptr [0xccfe70]
// 00a3c0a5  85c0                 test eax, eax
// 00a3c0a7  7409                 je 0xa3c0b2
// 00a3c0a9  50                   push eax
// 00a3c0aa  e8a9dfdcff           call 0x80a058
// 00a3c0af  83c404               add esp, 4
// 00a3c0b2  c70554fecc00e0bea500 mov dword ptr [0xccfe54], 0xa5bee0
// 00a3c0bc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
