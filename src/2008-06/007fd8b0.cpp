// roc 2008-06 007fd8b0  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fd8b0
//
// 007fd8b0  a16c579700           mov eax, dword ptr [0x97576c]
// 007fd8b5  85c0                 test eax, eax
// 007fd8b7  7409                 je 0x7fd8c2
// 007fd8b9  50                   push eax
// 007fd8ba  e8bb2deaff           call 0x6a067a
// 007fd8bf  83c404               add esp, 4
// 007fd8c2  c7055457970030b78000 mov dword ptr [0x975754], 0x80b730
// 007fd8cc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
