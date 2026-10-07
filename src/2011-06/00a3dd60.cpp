// roc 2011-06 00a3dd60  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3dd60
//
// 00a3dd60  a17c2dcd00           mov eax, dword ptr [0xcd2d7c]
// 00a3dd65  85c0                 test eax, eax
// 00a3dd67  7409                 je 0xa3dd72
// 00a3dd69  50                   push eax
// 00a3dd6a  e8e9c2dcff           call 0x80a058
// 00a3dd6f  83c404               add esp, 4
// 00a3dd72  c705602dcd00e0bea500 mov dword ptr [0xcd2d60], 0xa5bee0
// 00a3dd7c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
