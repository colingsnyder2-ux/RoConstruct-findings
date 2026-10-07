// roc 2008-06 007fcd30  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fcd30
//
// 007fcd30  a130459700           mov eax, dword ptr [0x974530]
// 007fcd35  85c0                 test eax, eax
// 007fcd37  7409                 je 0x7fcd42
// 007fcd39  50                   push eax
// 007fcd3a  e83b39eaff           call 0x6a067a
// 007fcd3f  83c404               add esp, 4
// 007fcd42  c7051845970030b78000 mov dword ptr [0x974518], 0x80b730
// 007fcd4c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
