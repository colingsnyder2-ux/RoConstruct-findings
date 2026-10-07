// roc 2008-06 007fac50  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fac50
//
// 007fac50  a1b4d49600           mov eax, dword ptr [0x96d4b4]
// 007fac55  85c0                 test eax, eax
// 007fac57  7409                 je 0x7fac62
// 007fac59  50                   push eax
// 007fac5a  e81b5aeaff           call 0x6a067a
// 007fac5f  83c404               add esp, 4
// 007fac62  c7059cd4960030b78000 mov dword ptr [0x96d49c], 0x80b730
// 007fac6c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
