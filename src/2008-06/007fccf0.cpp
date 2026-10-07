// roc 2008-06 007fccf0  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fccf0
//
// 007fccf0  a1a4469700           mov eax, dword ptr [0x9746a4]
// 007fccf5  85c0                 test eax, eax
// 007fccf7  7409                 je 0x7fcd02
// 007fccf9  50                   push eax
// 007fccfa  e87b39eaff           call 0x6a067a
// 007fccff  83c404               add esp, 4
// 007fcd02  c7058c46970030b78000 mov dword ptr [0x97468c], 0x80b730
// 007fcd0c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
