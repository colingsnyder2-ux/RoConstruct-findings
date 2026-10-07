// roc 2008-06 007ffc50  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ffc50
//
// 007ffc50  a180b39700           mov eax, dword ptr [0x97b380]
// 007ffc55  85c0                 test eax, eax
// 007ffc57  7409                 je 0x7ffc62
// 007ffc59  50                   push eax
// 007ffc5a  e81b0aeaff           call 0x6a067a
// 007ffc5f  83c404               add esp, 4
// 007ffc62  c70568b3970030b78000 mov dword ptr [0x97b368], 0x80b730
// 007ffc6c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
