// roc 2011-06 00a3e5e0  unit: seg_00a30000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3e5e0
//
// 00a3e5e0  a17c37cd00           mov eax, dword ptr [0xcd377c]
// 00a3e5e5  85c0                 test eax, eax
// 00a3e5e7  7409                 je 0xa3e5f2
// 00a3e5e9  50                   push eax
// 00a3e5ea  e869badcff           call 0x80a058
// 00a3e5ef  83c404               add esp, 4
// 00a3e5f2  c7056037cd00e0bea500 mov dword ptr [0xcd3760], 0xa5bee0
// 00a3e5fc  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__F?prop_Disabled@Script@RBX@@2V?$BoundProp@_N$00@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
