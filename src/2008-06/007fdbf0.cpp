// roc 2008-06 007fdbf0  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fdbf0
//
// 007fdbf0  a158609700           mov eax, dword ptr [0x976058]
// 007fdbf5  85c0                 test eax, eax
// 007fdbf7  7409                 je 0x7fdc02
// 007fdbf9  50                   push eax
// 007fdbfa  e87b2aeaff           call 0x6a067a
// 007fdbff  83c404               add esp, 4
// 007fdc02  c7053c60970030b78000 mov dword ptr [0x97603c], 0x80b730
// 007fdc0c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
