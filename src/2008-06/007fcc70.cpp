// roc 2008-06 007fcc70  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fcc70
//
// 007fcc70  a114479700           mov eax, dword ptr [0x974714]
// 007fcc75  85c0                 test eax, eax
// 007fcc77  7409                 je 0x7fcc82
// 007fcc79  50                   push eax
// 007fcc7a  e8fb39eaff           call 0x6a067a
// 007fcc7f  83c404               add esp, 4
// 007fcc82  c705fc46970030b78000 mov dword ptr [0x9746fc], 0x80b730
// 007fcc8c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
