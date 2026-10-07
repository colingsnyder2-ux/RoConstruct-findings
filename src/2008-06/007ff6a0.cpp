// roc 2008-06 007ff6a0  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ff6a0
//
// 007ff6a0  a180a69700           mov eax, dword ptr [0x97a680]
// 007ff6a5  85c0                 test eax, eax
// 007ff6a7  7409                 je 0x7ff6b2
// 007ff6a9  50                   push eax
// 007ff6aa  e8cb0feaff           call 0x6a067a
// 007ff6af  83c404               add esp, 4
// 007ff6b2  c70568a6970030b78000 mov dword ptr [0x97a668], 0x80b730
// 007ff6bc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
