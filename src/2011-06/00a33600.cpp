// roc 2011-06 00a33600  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a33600
//
// 00a33600  a1487dcb00           mov eax, dword ptr [0xcb7d48]
// 00a33605  85c0                 test eax, eax
// 00a33607  7409                 je 0xa33612
// 00a33609  50                   push eax
// 00a3360a  e8496addff           call 0x80a058
// 00a3360f  83c404               add esp, 4
// 00a33612  c7052c7dcb00e0bea500 mov dword ptr [0xcb7d2c], 0xa5bee0
// 00a3361c  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
