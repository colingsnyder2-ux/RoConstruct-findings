// roc 2008-06 007ffc90  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ffc90
//
// 007ffc90  a10cb29700           mov eax, dword ptr [0x97b20c]
// 007ffc95  85c0                 test eax, eax
// 007ffc97  7409                 je 0x7ffca2
// 007ffc99  50                   push eax
// 007ffc9a  e8db09eaff           call 0x6a067a
// 007ffc9f  83c404               add esp, 4
// 007ffca2  c705f0b1970030b78000 mov dword ptr [0x97b1f0], 0x80b730
// 007ffcac  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
