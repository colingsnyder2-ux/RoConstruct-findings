// roc 2008-06 007fd8f0  unit: seg_007f0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fd8f0
//
// 007fd8f0  a188579700           mov eax, dword ptr [0x975788]
// 007fd8f5  85c0                 test eax, eax
// 007fd8f7  7409                 je 0x7fd902
// 007fd8f9  50                   push eax
// 007fd8fa  e87b2deaff           call 0x6a067a
// 007fd8ff  83c404               add esp, 4
// 007fd902  c7057057970030b78000 mov dword ptr [0x975770], 0x80b730
// 007fd90c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
