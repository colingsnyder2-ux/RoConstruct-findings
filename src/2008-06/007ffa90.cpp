// roc 2008-06 007ffa90  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ffa90
//
// 007ffa90  a170ad9700           mov eax, dword ptr [0x97ad70]
// 007ffa95  85c0                 test eax, eax
// 007ffa97  7409                 je 0x7ffaa2
// 007ffa99  50                   push eax
// 007ffa9a  e8db0beaff           call 0x6a067a
// 007ffa9f  83c404               add esp, 4
// 007ffaa2  c70558ad970030b78000 mov dword ptr [0x97ad58], 0x80b730
// 007ffaac  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
