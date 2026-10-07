// roc 2008-06 007fac10  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fac10
//
// 007fac10  a178d39600           mov eax, dword ptr [0x96d378]
// 007fac15  85c0                 test eax, eax
// 007fac17  7409                 je 0x7fac22
// 007fac19  50                   push eax
// 007fac1a  e85b5aeaff           call 0x6a067a
// 007fac1f  83c404               add esp, 4
// 007fac22  c7055cd3960030b78000 mov dword ptr [0x96d35c], 0x80b730
// 007fac2c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
