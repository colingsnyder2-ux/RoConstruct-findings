// roc 2008-06 007ffd10  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ffd10
//
// 007ffd10  a17cb29700           mov eax, dword ptr [0x97b27c]
// 007ffd15  85c0                 test eax, eax
// 007ffd17  7409                 je 0x7ffd22
// 007ffd19  50                   push eax
// 007ffd1a  e85b09eaff           call 0x6a067a
// 007ffd1f  83c404               add esp, 4
// 007ffd22  c70560b2970030b78000 mov dword ptr [0x97b260], 0x80b730
// 007ffd2c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
