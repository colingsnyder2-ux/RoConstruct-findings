// roc 2011-06 00a3dcc0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3dcc0
//
// 00a3dcc0  a1d42bcd00           mov eax, dword ptr [0xcd2bd4]
// 00a3dcc5  85c0                 test eax, eax
// 00a3dcc7  7409                 je 0xa3dcd2
// 00a3dcc9  50                   push eax
// 00a3dcca  e889c3dcff           call 0x80a058
// 00a3dccf  83c404               add esp, 4
// 00a3dcd2  c705b82bcd00e0bea500 mov dword ptr [0xcd2bb8], 0xa5bee0
// 00a3dcdc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
