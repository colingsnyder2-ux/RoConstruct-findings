// roc 2008-06 007fceb0  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fceb0
//
// 007fceb0  a1bc459700           mov eax, dword ptr [0x9745bc]
// 007fceb5  85c0                 test eax, eax
// 007fceb7  7409                 je 0x7fcec2
// 007fceb9  50                   push eax
// 007fceba  e8bb37eaff           call 0x6a067a
// 007fcebf  83c404               add esp, 4
// 007fcec2  c705a445970030b78000 mov dword ptr [0x9745a4], 0x80b730
// 007fcecc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
