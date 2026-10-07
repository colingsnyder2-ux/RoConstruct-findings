// roc 2011-06 00a337e0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a337e0
//
// 00a337e0  a1347bcb00           mov eax, dword ptr [0xcb7b34]
// 00a337e5  85c0                 test eax, eax
// 00a337e7  7409                 je 0xa337f2
// 00a337e9  50                   push eax
// 00a337ea  e86968ddff           call 0x80a058
// 00a337ef  83c404               add esp, 4
// 00a337f2  c705187bcb00e0bea500 mov dword ptr [0xcb7b18], 0xa5bee0
// 00a337fc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
