// roc 2011-06 00a3ddc0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3ddc0
//
// 00a3ddc0  a1d42acd00           mov eax, dword ptr [0xcd2ad4]
// 00a3ddc5  85c0                 test eax, eax
// 00a3ddc7  7409                 je 0xa3ddd2
// 00a3ddc9  50                   push eax
// 00a3ddca  e889c2dcff           call 0x80a058
// 00a3ddcf  83c404               add esp, 4
// 00a3ddd2  c705b82acd00e0bea500 mov dword ptr [0xcd2ab8], 0xa5bee0
// 00a3dddc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
