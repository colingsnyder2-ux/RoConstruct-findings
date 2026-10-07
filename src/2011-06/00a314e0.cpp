// roc 2011-06 00a314e0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a314e0
//
// 00a314e0  a14432cb00           mov eax, dword ptr [0xcb3244]
// 00a314e5  85c0                 test eax, eax
// 00a314e7  7409                 je 0xa314f2
// 00a314e9  50                   push eax
// 00a314ea  e8698bddff           call 0x80a058
// 00a314ef  83c404               add esp, 4
// 00a314f2  c7052832cb00e0bea500 mov dword ptr [0xcb3228], 0xa5bee0
// 00a314fc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
