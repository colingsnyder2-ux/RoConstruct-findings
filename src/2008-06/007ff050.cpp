// roc 2008-06 007ff050  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ff050
//
// 007ff050  a1dc9e9700           mov eax, dword ptr [0x979edc]
// 007ff055  85c0                 test eax, eax
// 007ff057  7409                 je 0x7ff062
// 007ff059  50                   push eax
// 007ff05a  e81b16eaff           call 0x6a067a
// 007ff05f  83c404               add esp, 4
// 007ff062  c705c49e970030b78000 mov dword ptr [0x979ec4], 0x80b730
// 007ff06c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
