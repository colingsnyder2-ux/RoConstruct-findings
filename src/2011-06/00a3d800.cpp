// roc 2011-06 00a3d800  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3d800
//
// 00a3d800  a1d423cd00           mov eax, dword ptr [0xcd23d4]
// 00a3d805  85c0                 test eax, eax
// 00a3d807  7409                 je 0xa3d812
// 00a3d809  50                   push eax
// 00a3d80a  e849c8dcff           call 0x80a058
// 00a3d80f  83c404               add esp, 4
// 00a3d812  c705b423cd00e0bea500 mov dword ptr [0xcd23b4], 0xa5bee0
// 00a3d81c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
