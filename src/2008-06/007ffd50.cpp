// roc 2008-06 007ffd50  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ffd50
//
// 007ffd50  a1bcb39700           mov eax, dword ptr [0x97b3bc]
// 007ffd55  85c0                 test eax, eax
// 007ffd57  7409                 je 0x7ffd62
// 007ffd59  50                   push eax
// 007ffd5a  e81b09eaff           call 0x6a067a
// 007ffd5f  83c404               add esp, 4
// 007ffd62  c705a4b3970030b78000 mov dword ptr [0x97b3a4], 0x80b730
// 007ffd6c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
