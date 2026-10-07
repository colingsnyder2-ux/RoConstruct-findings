// roc 2008-06 008010c0  unit: seg_00800000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 008010c0
//
// 008010c0  a1a0d79700           mov eax, dword ptr [0x97d7a0]
// 008010c5  85c0                 test eax, eax
// 008010c7  7409                 je 0x8010d2
// 008010c9  50                   push eax
// 008010ca  e8abf5e9ff           call 0x6a067a
// 008010cf  83c404               add esp, 4
// 008010d2  c70584d7970030b78000 mov dword ptr [0x97d784], 0x80b730
// 008010dc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
