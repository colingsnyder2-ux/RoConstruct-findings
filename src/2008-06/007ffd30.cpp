// roc 2008-06 007ffd30  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ffd30
//
// 007ffd30  a160b19700           mov eax, dword ptr [0x97b160]
// 007ffd35  85c0                 test eax, eax
// 007ffd37  7409                 je 0x7ffd42
// 007ffd39  50                   push eax
// 007ffd3a  e83b09eaff           call 0x6a067a
// 007ffd3f  83c404               add esp, 4
// 007ffd42  c70548b1970030b78000 mov dword ptr [0x97b148], 0x80b730
// 007ffd4c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
