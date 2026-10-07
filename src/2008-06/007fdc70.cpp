// roc 2008-06 007fdc70  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fdc70
//
// 007fdc70  a160619700           mov eax, dword ptr [0x976160]
// 007fdc75  85c0                 test eax, eax
// 007fdc77  7409                 je 0x7fdc82
// 007fdc79  50                   push eax
// 007fdc7a  e8fb29eaff           call 0x6a067a
// 007fdc7f  83c404               add esp, 4
// 007fdc82  c7054861970030b78000 mov dword ptr [0x976148], 0x80b730
// 007fdc8c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
