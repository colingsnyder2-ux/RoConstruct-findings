// roc 2008-06 007fe260  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fe260
//
// 007fe260  a1386d9700           mov eax, dword ptr [0x976d38]
// 007fe265  85c0                 test eax, eax
// 007fe267  7409                 je 0x7fe272
// 007fe269  50                   push eax
// 007fe26a  e80b24eaff           call 0x6a067a
// 007fe26f  83c404               add esp, 4
// 007fe272  c705206d970030b78000 mov dword ptr [0x976d20], 0x80b730
// 007fe27c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
