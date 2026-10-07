// roc 2008-06 008004d0  unit: seg_00800000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 008004d0
//
// 008004d0  a154c79700           mov eax, dword ptr [0x97c754]
// 008004d5  85c0                 test eax, eax
// 008004d7  7409                 je 0x8004e2
// 008004d9  50                   push eax
// 008004da  e89b01eaff           call 0x6a067a
// 008004df  83c404               add esp, 4
// 008004e2  c7053cc7970030b78000 mov dword ptr [0x97c73c], 0x80b730
// 008004ec  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
