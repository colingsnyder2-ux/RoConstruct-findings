// roc 2011-06 00a3dad0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3dad0
//
// 00a3dad0  a1f428cd00           mov eax, dword ptr [0xcd28f4]
// 00a3dad5  85c0                 test eax, eax
// 00a3dad7  7409                 je 0xa3dae2
// 00a3dad9  50                   push eax
// 00a3dada  e879c5dcff           call 0x80a058
// 00a3dadf  83c404               add esp, 4
// 00a3dae2  c705d828cd00e0bea500 mov dword ptr [0xcd28d8], 0xa5bee0
// 00a3daec  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
