// roc 2011-06 00a3f2e0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3f2e0
//
// 00a3f2e0  a1e44ccd00           mov eax, dword ptr [0xcd4ce4]
// 00a3f2e5  85c0                 test eax, eax
// 00a3f2e7  7409                 je 0xa3f2f2
// 00a3f2e9  50                   push eax
// 00a3f2ea  e869addcff           call 0x80a058
// 00a3f2ef  83c404               add esp, 4
// 00a3f2f2  c705c84ccd00e0bea500 mov dword ptr [0xcd4cc8], 0xa5bee0
// 00a3f2fc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
