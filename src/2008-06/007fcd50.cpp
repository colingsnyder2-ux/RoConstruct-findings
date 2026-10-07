// roc 2008-06 007fcd50  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fcd50
//
// 007fcd50  a1e0479700           mov eax, dword ptr [0x9747e0]
// 007fcd55  85c0                 test eax, eax
// 007fcd57  7409                 je 0x7fcd62
// 007fcd59  50                   push eax
// 007fcd5a  e81b39eaff           call 0x6a067a
// 007fcd5f  83c404               add esp, 4
// 007fcd62  c705c847970030b78000 mov dword ptr [0x9747c8], 0x80b730
// 007fcd6c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
