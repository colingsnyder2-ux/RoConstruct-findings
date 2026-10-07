// roc 2008-06 007fc8c0  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fc8c0
//
// 007fc8c0  a18c3e9700           mov eax, dword ptr [0x973e8c]
// 007fc8c5  85c0                 test eax, eax
// 007fc8c7  7409                 je 0x7fc8d2
// 007fc8c9  50                   push eax
// 007fc8ca  e8ab3deaff           call 0x6a067a
// 007fc8cf  83c404               add esp, 4
// 007fc8d2  c705743e970030b78000 mov dword ptr [0x973e74], 0x80b730
// 007fc8dc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
