// roc 2008-06 007fe450  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fe450
//
// 007fe450  a17c709700           mov eax, dword ptr [0x97707c]
// 007fe455  85c0                 test eax, eax
// 007fe457  7409                 je 0x7fe462
// 007fe459  50                   push eax
// 007fe45a  e81b22eaff           call 0x6a067a
// 007fe45f  83c404               add esp, 4
// 007fe462  c7056470970030b78000 mov dword ptr [0x977064], 0x80b730
// 007fe46c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
