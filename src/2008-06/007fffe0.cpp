// roc 2008-06 007fffe0  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fffe0
//
// 007fffe0  a1dcb79700           mov eax, dword ptr [0x97b7dc]
// 007fffe5  85c0                 test eax, eax
// 007fffe7  7409                 je 0x7ffff2
// 007fffe9  50                   push eax
// 007fffea  e88b06eaff           call 0x6a067a
// 007fffef  83c404               add esp, 4
// 007ffff2  c705c4b7970030b78000 mov dword ptr [0x97b7c4], 0x80b730
// 007ffffc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
