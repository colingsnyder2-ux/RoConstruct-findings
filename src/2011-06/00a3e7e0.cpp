// roc 2011-06 00a3e7e0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3e7e0
//
// 00a3e7e0  a18039cd00           mov eax, dword ptr [0xcd3980]
// 00a3e7e5  85c0                 test eax, eax
// 00a3e7e7  7409                 je 0xa3e7f2
// 00a3e7e9  50                   push eax
// 00a3e7ea  e869b8dcff           call 0x80a058
// 00a3e7ef  83c404               add esp, 4
// 00a3e7f2  c7056039cd00e0bea500 mov dword ptr [0xcd3960], 0xa5bee0
// 00a3e7fc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
