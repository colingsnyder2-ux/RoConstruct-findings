// roc 2011-06 00a311e0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a311e0
//
// 00a311e0  a1f831cb00           mov eax, dword ptr [0xcb31f8]
// 00a311e5  85c0                 test eax, eax
// 00a311e7  7409                 je 0xa311f2
// 00a311e9  50                   push eax
// 00a311ea  e8698eddff           call 0x80a058
// 00a311ef  83c404               add esp, 4
// 00a311f2  c705d831cb00e0bea500 mov dword ptr [0xcb31d8], 0xa5bee0
// 00a311fc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
