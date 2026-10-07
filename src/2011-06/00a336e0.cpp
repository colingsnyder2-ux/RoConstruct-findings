// roc 2011-06 00a336e0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a336e0
//
// 00a336e0  a1687dcb00           mov eax, dword ptr [0xcb7d68]
// 00a336e5  85c0                 test eax, eax
// 00a336e7  7409                 je 0xa336f2
// 00a336e9  50                   push eax
// 00a336ea  e86969ddff           call 0x80a058
// 00a336ef  83c404               add esp, 4
// 00a336f2  c7054c7dcb00e0bea500 mov dword ptr [0xcb7d4c], 0xa5bee0
// 00a336fc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
