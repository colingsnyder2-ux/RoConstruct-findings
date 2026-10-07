// roc 2008-06 00801140  unit: seg_00800000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00801140
//
// 00801140  a1c4d89700           mov eax, dword ptr [0x97d8c4]
// 00801145  85c0                 test eax, eax
// 00801147  7409                 je 0x801152
// 00801149  50                   push eax
// 0080114a  e82bf5e9ff           call 0x6a067a
// 0080114f  83c404               add esp, 4
// 00801152  c705acd8970030b78000 mov dword ptr [0x97d8ac], 0x80b730
// 0080115c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
