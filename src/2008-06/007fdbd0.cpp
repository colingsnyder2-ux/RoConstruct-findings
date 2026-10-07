// roc 2008-06 007fdbd0  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fdbd0
//
// 007fdbd0  a128639700           mov eax, dword ptr [0x976328]
// 007fdbd5  85c0                 test eax, eax
// 007fdbd7  7409                 je 0x7fdbe2
// 007fdbd9  50                   push eax
// 007fdbda  e89b2aeaff           call 0x6a067a
// 007fdbdf  83c404               add esp, 4
// 007fdbe2  c7051063970030b78000 mov dword ptr [0x976310], 0x80b730
// 007fdbec  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
