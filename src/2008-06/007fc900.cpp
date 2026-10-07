// roc 2008-06 007fc900  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fc900
//
// 007fc900  a1303d9700           mov eax, dword ptr [0x973d30]
// 007fc905  85c0                 test eax, eax
// 007fc907  7409                 je 0x7fc912
// 007fc909  50                   push eax
// 007fc90a  e86b3deaff           call 0x6a067a
// 007fc90f  83c404               add esp, 4
// 007fc912  c705183d970030b78000 mov dword ptr [0x973d18], 0x80b730
// 007fc91c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
