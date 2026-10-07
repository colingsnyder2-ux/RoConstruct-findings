// roc 2011-06 00a39d20  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a39d20
//
// 00a39d20  a1ccc0cc00           mov eax, dword ptr [0xccc0cc]
// 00a39d25  85c0                 test eax, eax
// 00a39d27  7409                 je 0xa39d32
// 00a39d29  50                   push eax
// 00a39d2a  e82903ddff           call 0x80a058
// 00a39d2f  83c404               add esp, 4
// 00a39d32  c705b0c0cc00e0bea500 mov dword ptr [0xccc0b0], 0xa5bee0
// 00a39d3c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
