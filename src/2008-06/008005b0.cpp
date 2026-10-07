// roc 2008-06 008005b0  unit: seg_00800000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 008005b0
//
// 008005b0  a118c89700           mov eax, dword ptr [0x97c818]
// 008005b5  85c0                 test eax, eax
// 008005b7  7409                 je 0x8005c2
// 008005b9  50                   push eax
// 008005ba  e8bb00eaff           call 0x6a067a
// 008005bf  83c404               add esp, 4
// 008005c2  c70500c8970030b78000 mov dword ptr [0x97c800], 0x80b730
// 008005cc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
