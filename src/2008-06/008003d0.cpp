// roc 2008-06 008003d0  unit: seg_00800000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 008003d0
//
// 008003d0  a124c09700           mov eax, dword ptr [0x97c024]
// 008003d5  85c0                 test eax, eax
// 008003d7  7409                 je 0x8003e2
// 008003d9  50                   push eax
// 008003da  e89b02eaff           call 0x6a067a
// 008003df  83c404               add esp, 4
// 008003e2  c7050cc0970030b78000 mov dword ptr [0x97c00c], 0x80b730
// 008003ec  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
