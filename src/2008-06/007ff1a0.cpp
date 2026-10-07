// roc 2008-06 007ff1a0  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ff1a0
//
// 007ff1a0  a114a09700           mov eax, dword ptr [0x97a014]
// 007ff1a5  85c0                 test eax, eax
// 007ff1a7  7409                 je 0x7ff1b2
// 007ff1a9  50                   push eax
// 007ff1aa  e8cb14eaff           call 0x6a067a
// 007ff1af  83c404               add esp, 4
// 007ff1b2  c705fc9f970030b78000 mov dword ptr [0x979ffc], 0x80b730
// 007ff1bc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
