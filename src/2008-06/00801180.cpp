// roc 2008-06 00801180  unit: seg_00800000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00801180
//
// 00801180  a124d89700           mov eax, dword ptr [0x97d824]
// 00801185  85c0                 test eax, eax
// 00801187  7409                 je 0x801192
// 00801189  50                   push eax
// 0080118a  e8ebf4e9ff           call 0x6a067a
// 0080118f  83c404               add esp, 4
// 00801192  c7050cd8970030b78000 mov dword ptr [0x97d80c], 0x80b730
// 0080119c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
