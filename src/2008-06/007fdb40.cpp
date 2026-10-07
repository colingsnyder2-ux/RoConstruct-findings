// roc 2008-06 007fdb40  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fdb40
//
// 007fdb40  a1105f9700           mov eax, dword ptr [0x975f10]
// 007fdb45  85c0                 test eax, eax
// 007fdb47  7409                 je 0x7fdb52
// 007fdb49  50                   push eax
// 007fdb4a  e82b2beaff           call 0x6a067a
// 007fdb4f  83c404               add esp, 4
// 007fdb52  c705f85e970030b78000 mov dword ptr [0x975ef8], 0x80b730
// 007fdb5c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
