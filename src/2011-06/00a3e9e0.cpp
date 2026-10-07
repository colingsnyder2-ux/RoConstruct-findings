// roc 2011-06 00a3e9e0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3e9e0
//
// 00a3e9e0  a1dc3dcd00           mov eax, dword ptr [0xcd3ddc]
// 00a3e9e5  85c0                 test eax, eax
// 00a3e9e7  7409                 je 0xa3e9f2
// 00a3e9e9  50                   push eax
// 00a3e9ea  e869b6dcff           call 0x80a058
// 00a3e9ef  83c404               add esp, 4
// 00a3e9f2  c705bc3dcd00e0bea500 mov dword ptr [0xcd3dbc], 0xa5bee0
// 00a3e9fc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
