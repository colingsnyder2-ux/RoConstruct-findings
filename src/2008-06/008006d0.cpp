// roc 2008-06 008006d0  unit: seg_00800000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 008006d0
//
// 008006d0  a1fcc79700           mov eax, dword ptr [0x97c7fc]
// 008006d5  85c0                 test eax, eax
// 008006d7  7409                 je 0x8006e2
// 008006d9  50                   push eax
// 008006da  e89bffe9ff           call 0x6a067a
// 008006df  83c404               add esp, 4
// 008006e2  c705e4c7970030b78000 mov dword ptr [0x97c7e4], 0x80b730
// 008006ec  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
