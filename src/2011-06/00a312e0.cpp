// roc 2011-06 00a312e0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a312e0
//
// 00a312e0  a1f034cb00           mov eax, dword ptr [0xcb34f0]
// 00a312e5  85c0                 test eax, eax
// 00a312e7  7409                 je 0xa312f2
// 00a312e9  50                   push eax
// 00a312ea  e8698dddff           call 0x80a058
// 00a312ef  83c404               add esp, 4
// 00a312f2  c705d034cb00e0bea500 mov dword ptr [0xcb34d0], 0xa5bee0
// 00a312fc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
