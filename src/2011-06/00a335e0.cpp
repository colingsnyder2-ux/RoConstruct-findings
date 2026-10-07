// roc 2011-06 00a335e0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a335e0
//
// 00a335e0  a1d47bcb00           mov eax, dword ptr [0xcb7bd4]
// 00a335e5  85c0                 test eax, eax
// 00a335e7  7409                 je 0xa335f2
// 00a335e9  50                   push eax
// 00a335ea  e8696addff           call 0x80a058
// 00a335ef  83c404               add esp, 4
// 00a335f2  c705b87bcb00e0bea500 mov dword ptr [0xcb7bb8], 0xa5bee0
// 00a335fc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
