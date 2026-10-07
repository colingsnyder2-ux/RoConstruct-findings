// roc 2008-06 007fad30  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fad30
//
// 007fad30  a12cd59600           mov eax, dword ptr [0x96d52c]
// 007fad35  85c0                 test eax, eax
// 007fad37  7409                 je 0x7fad42
// 007fad39  50                   push eax
// 007fad3a  e83b59eaff           call 0x6a067a
// 007fad3f  83c404               add esp, 4
// 007fad42  c70514d5960030b78000 mov dword ptr [0x96d514], 0x80b730
// 007fad4c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
