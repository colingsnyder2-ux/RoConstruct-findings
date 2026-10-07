// roc 2008-06 007fffa0  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fffa0
//
// 007fffa0  a114b89700           mov eax, dword ptr [0x97b814]
// 007fffa5  85c0                 test eax, eax
// 007fffa7  7409                 je 0x7fffb2
// 007fffa9  50                   push eax
// 007fffaa  e8cb06eaff           call 0x6a067a
// 007fffaf  83c404               add esp, 4
// 007fffb2  c705fcb7970030b78000 mov dword ptr [0x97b7fc], 0x80b730
// 007fffbc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
