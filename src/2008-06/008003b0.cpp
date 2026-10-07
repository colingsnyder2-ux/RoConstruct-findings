// roc 2008-06 008003b0  unit: seg_00800000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 008003b0
//
// 008003b0  a108c09700           mov eax, dword ptr [0x97c008]
// 008003b5  85c0                 test eax, eax
// 008003b7  7409                 je 0x8003c2
// 008003b9  50                   push eax
// 008003ba  e8bb02eaff           call 0x6a067a
// 008003bf  83c404               add esp, 4
// 008003c2  c705f0bf970030b78000 mov dword ptr [0x97bff0], 0x80b730
// 008003cc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
