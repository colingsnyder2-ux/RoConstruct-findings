// roc 2008-06 007fdcb0  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fdcb0
//
// 007fdcb0  a108639700           mov eax, dword ptr [0x976308]
// 007fdcb5  85c0                 test eax, eax
// 007fdcb7  7409                 je 0x7fdcc2
// 007fdcb9  50                   push eax
// 007fdcba  e8bb29eaff           call 0x6a067a
// 007fdcbf  83c404               add esp, 4
// 007fdcc2  c705ec62970030b78000 mov dword ptr [0x9762ec], 0x80b730
// 007fdccc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
