// roc 2008-06 00801120  unit: seg_00800000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00801120
//
// 00801120  a174d89700           mov eax, dword ptr [0x97d874]
// 00801125  85c0                 test eax, eax
// 00801127  7409                 je 0x801132
// 00801129  50                   push eax
// 0080112a  e84bf5e9ff           call 0x6a067a
// 0080112f  83c404               add esp, 4
// 00801132  c7055cd8970030b78000 mov dword ptr [0x97d85c], 0x80b730
// 0080113c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
