// roc 2008-06 007ff030  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ff030
//
// 007ff030  a1c09e9700           mov eax, dword ptr [0x979ec0]
// 007ff035  85c0                 test eax, eax
// 007ff037  7409                 je 0x7ff042
// 007ff039  50                   push eax
// 007ff03a  e83b16eaff           call 0x6a067a
// 007ff03f  83c404               add esp, 4
// 007ff042  c705a89e970030b78000 mov dword ptr [0x979ea8], 0x80b730
// 007ff04c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
