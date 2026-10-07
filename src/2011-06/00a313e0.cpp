// roc 2011-06 00a313e0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a313e0
//
// 00a313e0  a18432cb00           mov eax, dword ptr [0xcb3284]
// 00a313e5  85c0                 test eax, eax
// 00a313e7  7409                 je 0xa313f2
// 00a313e9  50                   push eax
// 00a313ea  e8698cddff           call 0x80a058
// 00a313ef  83c404               add esp, 4
// 00a313f2  c7056832cb00e0bea500 mov dword ptr [0xcb3268], 0xa5bee0
// 00a313fc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
