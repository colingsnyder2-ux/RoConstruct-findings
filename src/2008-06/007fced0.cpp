// roc 2008-06 007fced0  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fced0
//
// 007fced0  a168479700           mov eax, dword ptr [0x974768]
// 007fced5  85c0                 test eax, eax
// 007fced7  7409                 je 0x7fcee2
// 007fced9  50                   push eax
// 007fceda  e89b37eaff           call 0x6a067a
// 007fcedf  83c404               add esp, 4
// 007fcee2  c7055047970030b78000 mov dword ptr [0x974750], 0x80b730
// 007fceec  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
