// roc 2008-06 008006f0  unit: seg_00800000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 008006f0
//
// 008006f0  a100c79700           mov eax, dword ptr [0x97c700]
// 008006f5  85c0                 test eax, eax
// 008006f7  7409                 je 0x800702
// 008006f9  50                   push eax
// 008006fa  e87bffe9ff           call 0x6a067a
// 008006ff  83c404               add esp, 4
// 00800702  c705e8c6970030b78000 mov dword ptr [0x97c6e8], 0x80b730
// 0080070c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
