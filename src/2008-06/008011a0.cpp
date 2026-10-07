// roc 2008-06 008011a0  unit: seg_00800000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 008011a0
//
// 008011a0  a130d79700           mov eax, dword ptr [0x97d730]
// 008011a5  85c0                 test eax, eax
// 008011a7  7409                 je 0x8011b2
// 008011a9  50                   push eax
// 008011aa  e8cbf4e9ff           call 0x6a067a
// 008011af  83c404               add esp, 4
// 008011b2  c70518d7970030b78000 mov dword ptr [0x97d718], 0x80b730
// 008011bc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
