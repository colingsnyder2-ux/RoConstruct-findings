// roc 2008-06 007ffc30  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ffc30
//
// 007ffc30  a12cb49700           mov eax, dword ptr [0x97b42c]
// 007ffc35  85c0                 test eax, eax
// 007ffc37  7409                 je 0x7ffc42
// 007ffc39  50                   push eax
// 007ffc3a  e83b0aeaff           call 0x6a067a
// 007ffc3f  83c404               add esp, 4
// 007ffc42  c70514b4970030b78000 mov dword ptr [0x97b414], 0x80b730
// 007ffc4c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
