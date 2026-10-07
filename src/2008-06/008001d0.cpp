// roc 2008-06 008001d0  unit: seg_00800000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 008001d0
//
// 008001d0  a118be9700           mov eax, dword ptr [0x97be18]
// 008001d5  85c0                 test eax, eax
// 008001d7  7409                 je 0x8001e2
// 008001d9  50                   push eax
// 008001da  e89b04eaff           call 0x6a067a
// 008001df  83c404               add esp, 4
// 008001e2  c705fcbd970030b78000 mov dword ptr [0x97bdfc], 0x80b730
// 008001ec  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
