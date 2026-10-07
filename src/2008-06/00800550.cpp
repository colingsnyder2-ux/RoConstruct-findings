// roc 2008-06 00800550  unit: seg_00800000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00800550
//
// 00800550  a1c4c79700           mov eax, dword ptr [0x97c7c4]
// 00800555  85c0                 test eax, eax
// 00800557  7409                 je 0x800562
// 00800559  50                   push eax
// 0080055a  e81b01eaff           call 0x6a067a
// 0080055f  83c404               add esp, 4
// 00800562  c705acc7970030b78000 mov dword ptr [0x97c7ac], 0x80b730
// 0080056c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
