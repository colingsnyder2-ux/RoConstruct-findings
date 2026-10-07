// roc 2008-06 007fd8d0  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fd8d0
//
// 007fd8d0  a150579700           mov eax, dword ptr [0x975750]
// 007fd8d5  85c0                 test eax, eax
// 007fd8d7  7409                 je 0x7fd8e2
// 007fd8d9  50                   push eax
// 007fd8da  e89b2deaff           call 0x6a067a
// 007fd8df  83c404               add esp, 4
// 007fd8e2  c7053857970030b78000 mov dword ptr [0x975738], 0x80b730
// 007fd8ec  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
